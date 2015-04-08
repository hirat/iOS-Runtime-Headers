/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <BSWatchdogDelegate>, <BSWatchdogProviding>, BSTimer, NSDate, NSObject<OS_dispatch_queue>;

@interface BSWatchdog : NSObject {
    BOOL _completed;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completion;

    <BSWatchdogDelegate> *_delegate;
    BOOL _hasFired;
    BOOL _invalidated;
    <BSWatchdogProviding> *_provider;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_startDate;
    double _timeout;
    BSTimer *_timer;
}

@property(retain) <BSWatchdogDelegate> * delegate;
@property(getter=hasFired,readonly) BOOL fired;
@property(retain,readonly) <BSWatchdogProviding> * provider;
@property(retain,readonly) NSObject<OS_dispatch_queue> * queue;
@property(retain,readonly) NSDate * startDate;
@property(readonly) double timeout;

- (void)_completeWatchdogAfterFiring:(BOOL)arg1;
- (void)_invalidateTimer;
- (void)_setupTimerWithInterval:(double)arg1 handler:(id)arg2;
- (void)_stageOneTimerFired;
- (void)_stageTwoTimerFired;
- (void)_startWatchdogTimer;
- (void)_watchdogTimerFired;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (BOOL)hasFired;
- (id)initWithProvider:(id)arg1 queue:(id)arg2;
- (id)initWithProvider:(id)arg1 queue:(id)arg2 completion:(id)arg3;
- (id)initWithTimeout:(double)arg1 queue:(id)arg2;
- (id)initWithTimeout:(double)arg1 queue:(id)arg2 completion:(id)arg3;
- (void)invalidate;
- (id)provider;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)start;
- (id)startDate;
- (double)timeout;

@end