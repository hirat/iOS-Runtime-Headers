/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class CAMElapsedTimeView, CAMFlashButton, CAMFlipButton, CAMHDRButton, UIView;

@interface CAMTopBar : UIView <CAMFlashButtonDelegate> {
    CAMHDRButton *_HDRButton;
    UIView *__backgroundView;
    BOOL __flashButtonExpanded;
    int _backgroundStyle;
    CAMElapsedTimeView *_elapsedTimeView;
    CAMFlashButton *_flashButton;
    CAMFlipButton *_flipButton;
    int _orientation;
    int _style;
}

@property(retain) CAMHDRButton * HDRButton;
@property(readonly) UIView * _backgroundView;
@property(getter=_isFlashButtonExpanded,setter=_setFlashButtonExpanded:) BOOL _flashButtonExpanded;
@property int backgroundStyle;
@property(retain) CAMElapsedTimeView * elapsedTimeView;
@property(retain) CAMFlashButton * flashButton;
@property(retain) CAMFlipButton * flipButton;
@property(getter=isFloating,readonly) BOOL floating;
@property int orientation;
@property int style;

- (id)HDRButton;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_backgroundEdgeInsetsForStyle:(int)arg1;
- (id)_backgroundView;
- (void)_commonCAMTopBarInitialization;
- (BOOL)_isFlashButtonExpanded;
- (void)_layoutDefaultStyle;
- (void)_layoutFloatingRecordingStyle;
- (void)_layoutFloatingStyle;
- (void)_setFlashButtonExpanded:(BOOL)arg1;
- (BOOL)_shouldHideElapsedTimeView;
- (BOOL)_shouldHideHDRButton;
- (void)_updateBackgroundStyleAnimated:(BOOL)arg1;
- (void)_updateHiddenViewsForFlashExpansion;
- (void)_updateStyleAnimated:(BOOL)arg1;
- (int)backgroundStyle;
- (void)dealloc;
- (id)elapsedTimeView;
- (id)flashButton;
- (void)flashButtonDidCollapse:(id)arg1;
- (void)flashButtonModeDidChange:(id)arg1;
- (void)flashButtonWasPressed:(id)arg1;
- (void)flashButtonWillExpand:(id)arg1;
- (id)flipButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isFloating;
- (void)layoutSubviews;
- (int)orientation;
- (void)setBackgroundStyle:(int)arg1 animated:(BOOL)arg2;
- (void)setBackgroundStyle:(int)arg1;
- (void)setElapsedTimeView:(id)arg1;
- (void)setFlashButton:(id)arg1;
- (void)setFlipButton:(id)arg1;
- (void)setHDRButton:(id)arg1;
- (void)setOrientation:(int)arg1;
- (void)setStyle:(int)arg1 animated:(BOOL)arg2;
- (void)setStyle:(int)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)style;

@end