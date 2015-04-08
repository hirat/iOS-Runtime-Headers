/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSLayoutConstraint, NSString, UIImageView, _UIDocumentPickerContainerItem;

@interface _UIDocumentPickerContainerCell : _UIDocumentPickerCell {
    NSString *_containerDisplayName;
    NSLayoutConstraint *_containerIconBottomConstraint;
    NSLayoutConstraint *_containerIconHeightConstraint;
    UIImageView *_containerIconView;
    NSLayoutConstraint *_containerIconWidthConstraint;
    _UIDocumentPickerContainerItem *_item;
    id _observerToken;
}

@property(retain) NSString * containerDisplayName;
@property(retain) NSLayoutConstraint * containerIconBottomConstraint;
@property(retain) NSLayoutConstraint * containerIconHeightConstraint;
@property(retain) UIImageView * containerIconView;
@property(retain) NSLayoutConstraint * containerIconWidthConstraint;
@property(retain) _UIDocumentPickerContainerItem * item;
@property(retain) id observerToken;

- (void)_showPickableDiagnostic;
- (id)containerDisplayName;
- (id)containerIconBottomConstraint;
- (id)containerIconHeightConstraint;
- (id)containerIconView;
- (id)containerIconWidthConstraint;
- (void)containersChangedWithSnapshot:(id)arg1 differences:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)item;
- (id)observerToken;
- (void)prepareForReuse;
- (void)reloadItem:(BOOL)arg1;
- (void)setContainerDisplayName:(id)arg1;
- (void)setContainerIconBottomConstraint:(id)arg1;
- (void)setContainerIconHeightConstraint:(id)arg1;
- (void)setContainerIconView:(id)arg1;
- (void)setContainerIconWidthConstraint:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setObserverToken:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateSubtitle;
- (id)viewControllerForDisplay;

@end