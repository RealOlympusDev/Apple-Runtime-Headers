//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoard/SBUILegibility-Protocol.h>
#import <SpringBoard/_SBFVibrantView-Protocol.h>

@class NSString, SBSaturatedIconView, SBUILegibilityView, UIImage, _SBFVibrantSettings, _UILegibilitySettings;

@interface SBSlideUpAppGrabberView : UIView <_SBFVibrantView, SBUILegibility>
{
    double _strength;
    _UILegibilitySettings *_legibilitySettings;
    struct UIEdgeInsets _hitTestEdgeInsets;
    UIView *_tintView;
    UIView *_backgroundView;
    SBUILegibilityView *_legibilityView;
    SBSaturatedIconView *_saturatedIconView;
    UIImage *_grabberImage;
    _Bool _vibrancyAllowed;
    _SBFVibrantSettings *_vibrantSettings;
}

@property(nonatomic, getter=isVibrancyAllowed) _Bool vibrancyAllowed; // @synthesize vibrancyAllowed=_vibrancyAllowed;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(nonatomic) double strength; // @synthesize strength=_strength;
@property(retain, nonatomic) _SBFVibrantSettings *vibrantSettings; // @synthesize vibrantSettings=_vibrantSettings;
@property(readonly, nonatomic) struct UIEdgeInsets hitTestEdgeInsets; // @synthesize hitTestEdgeInsets=_hitTestEdgeInsets;
- (void).cxx_destruct;
- (id)_lazyLegibilityView;
- (void)setBackgroundView:(id)arg1;
- (_Bool)_shouldUseVibrancy;
- (void)setAppStyleGrabberImage:(id)arg1;
- (void)setGrabberImageFromAppWithBundleIdentifier:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithAdditionalTopPadding:(_Bool)arg1 invertVerticalInsets:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

