/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFloatingContentView : UIView {
    BOOL __disableOutsetShadowPath;
    struct CGSize { 
        float width; 
        float height; 
    } _asymmetricFocusedSizeIncrease;
    struct CGSize { 
        float width; 
        float height; 
    } _asymmetricScaleFactor;
    struct __CFDictionary { } *_backgroundColorsByState;
    _UIFloatingContentSpecialAnimatingView *_containerView;
    NSMutableArray *_contentMotionEffects;
    BOOL _contentOpaque;
    struct CGPoint { 
        float x; 
        float y; 
    } _contentRotation;
    struct CGPoint { 
        float x; 
        float y; 
    } _contentTranslation;
    UIView *_contentView;
    unsigned int _controlState;
    float _cornerRadius;
    BOOL _customScale;
    <_UIFloatingContentViewDelegate> *_floatingContentViewDelegate;
    _UIFocusAnimationConfiguration *_focusAnimationConfiguration;
    id /* block */ _focusAnimationConfigurationHandler;
    struct CGPoint { 
        float x; 
        float y; 
    } _focusDirection;
    struct CGPoint { 
        float x; 
        float y; 
    } _focusScaleAnchorPoint;
    int _highlightStyle;
    _UIFloatingContentSpecialAnimatingView *_highlightView;
    BOOL _roundContentWhenDeselected;
    BOOL _scalesBackwards;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _shadowContentsCenter;
    BOOL _shadowEnabled;
    struct CGSize { 
        float width; 
        float height; 
    } _shadowExpansion;
    UIImage *_shadowImage;
    float _shadowOpacity;
    float _shadowRadius;
    struct CGSize { 
        float width; 
        float height; 
    } _shadowSize;
    float _shadowVerticalOffset;
    UIView *_shadowView;
    BOOL _stretchableShadowImage;
    BOOL _symmetricScale;
    struct CGSize { 
        float width; 
        float height; 
    } _unfocusedShadowExpansion;
    float _unfocusedShadowOpacity;
    float _unfocusedShadowRadius;
    float _unfocusedShadowVerticalOffset;
    BOOL _useShadowImage;
}

@property (nonatomic) BOOL _disableOutsetShadowPath;
@property (nonatomic) struct CGSize { float x1; float x2; } asymmetricFocusedSizeIncrease;
@property (nonatomic) struct CGSize { float x1; float x2; } asymmetricScaleFactor;
@property (nonatomic) BOOL clipsContentToBounds;
@property (getter=isContentOpaque, nonatomic) BOOL contentOpaque;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) unsigned int controlState;
@property (nonatomic) float cornerRadius;
@property (nonatomic) <_UIFloatingContentViewDelegate> *floatingContentDelegate;
@property (nonatomic, copy) _UIFocusAnimationConfiguration *focusAnimationConfiguration;
@property (nonatomic, copy) id /* block */ focusAnimationConfigurationHandler;
@property (nonatomic) struct CGPoint { float x1; float x2; } focusScaleAnchorPoint;
@property (nonatomic) float focusedSizeIncrease;
@property (nonatomic) int highlightStyle;
@property (nonatomic) BOOL roundContentWhenDeselected;
@property (nonatomic) float scaleFactor;
@property (nonatomic) BOOL scalesBackwards;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } shadowContentsCenter;
@property (getter=isShadowEnabled, nonatomic) BOOL shadowEnabled;
@property (nonatomic) struct CGSize { float x1; float x2; } shadowExpansion;
@property (nonatomic, retain) UIImage *shadowImage;
@property (nonatomic) float shadowOpacity;
@property (nonatomic) float shadowRadius;
@property (nonatomic) struct CGSize { float x1; float x2; } shadowSize;
@property (nonatomic) float shadowVerticalOffset;
@property (nonatomic) struct CGSize { float x1; float x2; } unfocusedShadowExpansion;
@property (nonatomic) float unfocusedShadowOpacity;
@property (nonatomic) float unfocusedShadowRadius;
@property (nonatomic) float unfocusedShadowVerticalOffset;
@property (nonatomic) BOOL useShadowImage;

+ (id)_defaultFocusAnimationConfiguration;
+ (Class)layerClass;

- (void).cxx_destruct;
- (BOOL)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;
- (BOOL)_disableOutsetShadowPath;
- (float)_effectiveShadowRadius;
- (void)_installContentMotionEffects;
- (void)_layoutShadow;
- (id)_preferredConfigurationForFocusAnimation:(int)arg1 inContext:(id)arg2;
- (unsigned int)_primaryStateForState:(unsigned int)arg1;
- (void)_setControlState:(unsigned int)arg1 withAnimationCoordinator:(id)arg2;
- (void)_setShadowImageIfNeeded;
- (struct CGPath { }*)_shadowPathForSize:(struct CGSize { float x1; float x2; })arg1 radius:(float)arg2;
- (BOOL)_shouldAppearToFloatForPrimaryState:(unsigned int)arg1;
- (BOOL)_shouldApplyCornerRadiusForPrimaryState:(unsigned int)arg1;
- (void)_uninstallContentMotionEffects;
- (void)_updateBackgroundViewForPrimaryState:(unsigned int)arg1;
- (void)_updateHighlightViewForPrimaryState:(unsigned int)arg1;
- (void)_updateScaleFactor;
- (void)_updateShadowContentsScaleForPrimaryState:(unsigned int)arg1;
- (void)_updateShadowLayer;
- (void)_updateShadowOpacityForPrimaryState:(unsigned int)arg1;
- (void)_updateTransformForPrimaryState:(unsigned int)arg1;
- (void)addContentMotionEffect:(id)arg1;
- (struct CGSize { float x1; float x2; })asymmetricFocusedSizeIncrease;
- (struct CGSize { float x1; float x2; })asymmetricScaleFactor;
- (id)backgroundColorForState:(unsigned int)arg1;
- (BOOL)canBecomeFocused;
- (BOOL)clipsContentToBounds;
- (id)contentView;
- (unsigned int)controlState;
- (float)cornerRadius;
- (void)dealloc;
- (id)floatingContentDelegate;
- (id)focusAnimationConfiguration;
- (id /* block */)focusAnimationConfigurationHandler;
- (struct CGPoint { float x1; float x2; })focusScaleAnchorPoint;
- (float)focusedSizeIncrease;
- (int)highlightStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isContentOpaque;
- (BOOL)isShadowEnabled;
- (void)layoutSubviews;
- (void)removeContentMotionEffect:(id)arg1;
- (BOOL)roundContentWhenDeselected;
- (float)scaleFactor;
- (BOOL)scalesBackwards;
- (void)setAsymmetricFocusedSizeIncrease:(struct CGSize { float x1; float x2; })arg1;
- (void)setAsymmetricScaleFactor:(struct CGSize { float x1; float x2; })arg1;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setClipsContentToBounds:(BOOL)arg1;
- (void)setContentMotionRotation:(struct CGPoint { float x1; float x2; })arg1 translation:(struct CGPoint { float x1; float x2; })arg2;
- (void)setContentOpaque:(BOOL)arg1;
- (void)setControlState:(unsigned int)arg1;
- (void)setControlState:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setControlState:(unsigned int)arg1 withAnimationCoordinator:(id)arg2;
- (void)setCornerRadius:(float)arg1;
- (void)setFloatingContentDelegate:(id)arg1;
- (void)setFocusAnimationConfiguration:(id)arg1;
- (void)setFocusAnimationConfigurationHandler:(id /* block */)arg1;
- (void)setFocusScaleAnchorPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setFocusedSizeIncrease:(float)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlightStyle:(int)arg1;
- (void)setRoundContentWhenDeselected:(BOOL)arg1;
- (void)setScaleFactor:(float)arg1;
- (void)setScalesBackwards:(BOOL)arg1;
- (void)setShadowContentsCenter:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setShadowEnabled:(BOOL)arg1;
- (void)setShadowExpansion:(struct CGSize { float x1; float x2; })arg1;
- (void)setShadowImage:(id)arg1;
- (void)setShadowImage:(id)arg1 stretchable:(BOOL)arg2;
- (void)setShadowOpacity:(float)arg1;
- (void)setShadowRadius:(float)arg1;
- (void)setShadowSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setShadowVerticalOffset:(float)arg1;
- (void)setUnfocusedShadowExpansion:(struct CGSize { float x1; float x2; })arg1;
- (void)setUnfocusedShadowOpacity:(float)arg1;
- (void)setUnfocusedShadowRadius:(float)arg1;
- (void)setUnfocusedShadowVerticalOffset:(float)arg1;
- (void)setUseShadowImage:(BOOL)arg1;
- (void)set_disableOutsetShadowPath:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })shadowContentsCenter;
- (struct CGSize { float x1; float x2; })shadowExpansion;
- (id)shadowImage;
- (float)shadowOpacity;
- (float)shadowRadius;
- (struct CGSize { float x1; float x2; })shadowSize;
- (float)shadowVerticalOffset;
- (struct CGSize { float x1; float x2; })unfocusedShadowExpansion;
- (float)unfocusedShadowOpacity;
- (float)unfocusedShadowRadius;
- (float)unfocusedShadowVerticalOffset;
- (BOOL)useShadowImage;

@end