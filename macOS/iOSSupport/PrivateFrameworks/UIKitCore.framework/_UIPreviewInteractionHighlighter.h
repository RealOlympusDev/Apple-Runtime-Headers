//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIInteractionEffect-Protocol.h>

@class NSArray, NSString, NSUUID, UIControl, UIView, _UIInteractiveHighlightEffect;
@protocol UIInteraction, _UIInteractiveHighlighting;

@interface _UIPreviewInteractionHighlighter : NSObject <UIInteractionEffect>
{
    UIView *_view;
    id <_UIInteractiveHighlighting> _interactiveHighlightView;
    UIControl *_compatibilityHighlightView;
    _UIInteractiveHighlightEffect *_interactiveHighlightEffect;
    NSArray *_accessoryHighlightEffects;
    _UIInteractiveHighlightEffect *_presentationControllerHighlightEffect;
    id <UIInteraction> _interaction;
    BOOL _active;
    BOOL _animatesContentEffects;
    NSUUID *_contentAnimationIdentifier;
    BOOL _animatesBackgroundEffects;
    long long _preferredAnimationStyle;
    double _preferredMinimumScale;
    double _preferredMaximumScale;
    BOOL _shouldApplyEffectsOnProxyView;
    BOOL _shouldApplyContentEffects;
    BOOL _shouldApplyBackgroundEffects;
    BOOL _shouldEndWithCancelAnimation;
    BOOL _shouldTransferViewOwnership;
    BOOL _cancelsInteractionWhenScrolling;
    CDUnknownBlockType _completionBlock;
    unsigned long long _clickEffectPhase;
    CDUnknownBlockType _privateCompletionBlock;
    UIView *_customContainerView;
    UIView *_customBackgroundEffectView;
    CDUnknownBlockType _backgroundEffectApplyBlock;
}

@property(copy, nonatomic) CDUnknownBlockType backgroundEffectApplyBlock; // @synthesize backgroundEffectApplyBlock=_backgroundEffectApplyBlock;
@property(nonatomic) BOOL cancelsInteractionWhenScrolling; // @synthesize cancelsInteractionWhenScrolling=_cancelsInteractionWhenScrolling;
@property(nonatomic) BOOL shouldTransferViewOwnership; // @synthesize shouldTransferViewOwnership=_shouldTransferViewOwnership;
@property(retain, nonatomic) UIView *customBackgroundEffectView; // @synthesize customBackgroundEffectView=_customBackgroundEffectView;
@property(nonatomic) __weak UIView *customContainerView; // @synthesize customContainerView=_customContainerView;
@property(copy, nonatomic) CDUnknownBlockType privateCompletionBlock; // @synthesize privateCompletionBlock=_privateCompletionBlock;
@property(nonatomic) unsigned long long clickEffectPhase; // @synthesize clickEffectPhase=_clickEffectPhase;
@property(nonatomic) BOOL shouldEndWithCancelAnimation; // @synthesize shouldEndWithCancelAnimation=_shouldEndWithCancelAnimation;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) BOOL shouldApplyBackgroundEffects; // @synthesize shouldApplyBackgroundEffects=_shouldApplyBackgroundEffects;
@property(nonatomic) BOOL shouldApplyContentEffects; // @synthesize shouldApplyContentEffects=_shouldApplyContentEffects;
@property(nonatomic) BOOL shouldApplyEffectsOnProxyView; // @synthesize shouldApplyEffectsOnProxyView=_shouldApplyEffectsOnProxyView;
- (void).cxx_destruct;
- (void)_setHighlighted:(BOOL)arg1 forViewIfNeeded:(id)arg2;
- (void)_prepareAccessoryViewsForScrollView:(id)arg1 environment:(id)arg2;
- (void)_prepareContentEffectsForInteraction:(id)arg1;
- (void)_applyHighlightEffectsToViewControllerDuringCancellation:(id)arg1;
- (void)_viewControllerPresentationDidEnd;
- (void)_delayedViewControllerPresentationDidCancel;
- (void)_animateForDelayedViewControllerPresentation;
- (void)_animateAlongsideViewControllerPresentationDismiss;
- (void)_prepareForViewControllerPresentation:(id)arg1;
- (void)_finalizeAfterInteraction;
- (void)_finalizeAfterInteractionIfNeeded;
- (void)_updateFromInteraction:(id)arg1 fractionComplete:(double)arg2 ended:(BOOL)arg3;
- (void)_prepareForInteraction:(id)arg1;
@property(readonly, nonatomic) _UIInteractiveHighlightEffect *interactiveHighlightEffect;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

