//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIDragGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIDragInteraction-Protocol.h>
#import <UIKitCore/UIInteraction-Protocol.h>
#import <UIKitCore/UIInteraction_Internal-Protocol.h>
#import <UIKitCore/_UIDragSetDownAnimationTarget-Protocol.h>

@class NSMapTable, NSMutableSet, NSString, UIDropInteractionContextImpl, UIPasteConfiguration, UIView;
@protocol UIDropInteractionDelegate, UIDropInteractionEffect;

@interface UIDropInteraction : NSObject <UIDragGestureRecognizerDelegate, UIInteraction_Internal, UIDragInteraction, _UIDragSetDownAnimationTarget, UIInteraction>
{
    NSMutableSet *_activeDragGestureRecognizers;
    NSMapTable *_enteredDropSessionByDraggingSession;
    unsigned long long _potentialDragOperation;
    _Bool _allowsSimultaneousDropSessions;
    _Bool _wantsDefaultVisualBehavior;
    id <UIDropInteractionDelegate> _delegate;
    UIView *_view;
    UIDropInteractionContextImpl *_context;
    UIPasteConfiguration *_pasteConfiguration;
    id <UIDropInteractionEffect> _interactionEffect;
}

@property(nonatomic, getter=_wantsDefaultVisualBehavior, setter=_setWantsDefaultVisualBehavior:) _Bool wantsDefaultVisualBehavior; // @synthesize wantsDefaultVisualBehavior=_wantsDefaultVisualBehavior;
@property(retain, nonatomic) id <UIDropInteractionEffect> interactionEffect; // @synthesize interactionEffect=_interactionEffect;
@property(readonly, copy, nonatomic, getter=_pasteConfiguration) UIPasteConfiguration *pasteConfiguration; // @synthesize pasteConfiguration=_pasteConfiguration;
@property(retain, nonatomic) UIDropInteractionContextImpl *context; // @synthesize context=_context;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) _Bool allowsSimultaneousDropSessions; // @synthesize allowsSimultaneousDropSessions=_allowsSimultaneousDropSessions;
@property(readonly, nonatomic) __weak id <UIDropInteractionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_sendSessionDidEnd:(id)arg1;
- (void)_dropSessionEntered:(id)arg1 withSessionDestination:(id)arg2;
- (unsigned long long)_setLastDragOperation:(unsigned long long)arg1 forbidden:(_Bool)arg2 precise:(_Bool)arg3 prefersFullSizePreview:(_Bool)arg4 preferredBadgeStyle:(long long)arg5 onSession:(id)arg6;
- (unsigned long long)_validateDragOperation:(unsigned long long)arg1 forSelector:(SEL)arg2 delegate:(id)arg3 dropSession:(id)arg4 onSession:(id)arg5 forbidden:(_Bool *)arg6;
- (_Bool)_canHandleDragEvent:(id)arg1;
- (_Bool)_setDownAnimation:(id)arg1 shouldDelaySetDownOfDragItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setDownAnimation:(id)arg1 willAnimateSetDownOfDragItem:(id)arg2 withAnimator:(id)arg3;
- (id)_setDownAnimation:(id)arg1 prepareForSetDownOfDragItem:(id)arg2 visibleDroppedItem:(id)arg3;
- (id)_setDownAnimation:(id)arg1 windowSceneForSetDownOfDragItem:(id)arg2;
- (void)_prepareItemsInSessionForDrop:(id)arg1;
- (void)_dragDestinationGestureStateChanged:(id)arg1;
- (void)_gestureRecognizerFailed:(id)arg1;
- (_Bool)_allowsSimultaneousDragWithEvent:(id)arg1;
- (_Bool)_gestureRecognizer:(id)arg1 shouldReceiveDragEvent:(id)arg2;
- (void)didMoveToView:(id)arg1;
- (void)willMoveToView:(id)arg1;
- (_Bool)isActive;
- (id)_dynamicGestureRecognizersForEvent:(id)arg1;
- (id)_initWithPasteConfiguration:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

