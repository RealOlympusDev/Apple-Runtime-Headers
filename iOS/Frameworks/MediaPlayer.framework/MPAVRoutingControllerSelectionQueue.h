//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPAVRoute, MPAVRoutingController, MPAVRoutingControllerSelection, MSVTimer, NSMapTable, NSMutableArray, NSMutableSet, NSSet;
@protocol OS_dispatch_queue;

@interface MPAVRoutingControllerSelectionQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_selectionsEnqueued;
    MPAVRoutingControllerSelection *_selectionInProgress;
    NSMutableSet *_pendingRoutes;
    MSVTimer *_selectionInProgressTimer;
    NSMapTable *_pendingSelectionTimers;
    _Bool _hasPendingPickedRoutes;
    MPAVRoutingController *_routingController;
}

@property(readonly, nonatomic) _Bool hasPendingPickedRoutes; // @synthesize hasPendingPickedRoutes=_hasPendingPickedRoutes;
@property(readonly, nonatomic) __weak MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
- (void).cxx_destruct;
- (void)_processSelection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_dequeue;
- (void)_dequeueSelectionWhenPossible;
- (void)_enqueue:(id)arg1;
- (void)removePendingRoute:(id)arg1 withError:(_Bool)arg2;
- (void)removePendingRoute:(id)arg1;
- (void)removeAllPendingRoutes;
- (void)addPendingRoute:(id)arg1;
- (_Bool)routeIsPendingPick:(id)arg1;
@property(readonly, nonatomic) NSSet *pendingPickedRoutes;
@property(readonly, nonatomic) MPAVRoute *pendingPickedRoute;
- (void)pickedRouteDidChange;
- (_Bool)hasPendingRoutes;
- (void)enqueueSelectionOperation:(long long)arg1 forRoute:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelInProgressSelectionForRoute:(id)arg1;
- (id)initWithRoutingController:(id)arg1;

@end

