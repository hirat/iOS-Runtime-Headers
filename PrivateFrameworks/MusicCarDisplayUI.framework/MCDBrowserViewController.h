/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@class <MCDCarDisplayServiceProvider>, MPAVController, NSMapTable, NSString, UIAlertView, UIButton, UITabBarController;

@interface MCDBrowserViewController : UINavigationController <RUCarPlayAlertViewDelegate, UITabBarControllerDelegate> {
    UITabBarController *_hostTabBarController;
    BOOL _libraryHasSongs;
    UIAlertView *_mirroredAlert;
    NSMapTable *_noContentViews;
    UIButton *_nowPlayingButton;
    MPAVController *_player;
    <MCDCarDisplayServiceProvider> *_serviceProvider;
    UITabBarController *_tabBarController;
    BOOL _viewHasAppeared;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property UITabBarController * hostTabBarController;
@property(retain) MPAVController * player;
@property <MCDCarDisplayServiceProvider> * serviceProvider;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)MCD_pushNowPlayingViewControllerAnimated:(BOOL)arg1;
- (void)_accountsDidChangeNotification:(id)arg1;
- (id)_createViewControllerForIdentifier:(id)arg1;
- (BOOL)_isNowPlayingAvailable;
- (void)_itemChanged:(id)arg1;
- (void)_mediaLibraryDidChange:(id)arg1;
- (void)_nowPlayingButtonTouchUpInside:(id)arg1;
- (void)_reloadHostTabs;
- (void)_tabBarDidChangeViewControllers:(id)arg1;
- (void)_updateNowPlayingVisibility;
- (void)dealloc;
- (void)didDismissAlertView:(id)arg1;
- (id)hostTabBarController;
- (id)initWithHostTabBarController:(id)arg1;
- (id)nowPlayingButton;
- (id)player;
- (void)pushNowPlaying:(BOOL)arg1;
- (void)refreshNavigationPath;
- (void)reloadWithTabs:(id)arg1 forceReload:(BOOL)arg2;
- (id)serviceProvider;
- (void)setHostTabBarController:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setServiceProvider:(id)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)willPresentAlertView:(id)arg1;

@end