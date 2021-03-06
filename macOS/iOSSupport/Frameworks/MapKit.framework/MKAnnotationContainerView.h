//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MapKit/VKCustomFeatureDataSource-Protocol.h>
#import <MapKit/_MKPinAnnotationViewDelegate-Protocol.h>

@class MKAnnotationView, MKPinAnnotationView, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString;
@protocol MKAnnotationContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface MKAnnotationContainerView : UIView <VKCustomFeatureDataSource, _MKPinAnnotationViewDelegate>
{
    NSMutableOrderedSet *_annotationViews;
    NSMutableDictionary *_clusteringAnnotationViews;
    NSMutableArray *_customFeatureDataSourceObservers;
    NSMutableArray *_awaitingDropPins;
    MKAnnotationView *_selectedAnnotationView;
    MKAnnotationView *_annotationViewToSelect;
    id <MKAnnotationContainerViewDelegate> _delegate;
    MKAnnotationView *_draggingAnnotationView;
    struct CGPoint _previousMouseDragPoint;
    double _previousMouseDragTimeStamp;
    struct CGPoint _mouseDownPoint;
    struct CGPoint _draggingAnnotationViewCenter;
    unsigned long long _mapType;
    BOOL _clickedOnAnnotationView;
    BOOL _didDragAnnotationView;
    MKAnnotationView *_userLocationView;
    double _annotationViewsRotationRadians;
    struct CGAffineTransform _mapTransform;
    BOOL _suppressCallout;
    NSMutableArray *_pinsToAnimate;
    double _mapPitchRadians;
    CDStruct_51745937 _mapDisplayStyle;
    BOOL _suppress;
    BOOL _isUpdating;
    double _lastUpdate;
    NSMutableDictionary *_clusterableAnnotationViews;
    NSMutableArray *_requiredPriorityAnnotationViews;
    NSMutableSet *_collidableAnnotationViews;
    NSMutableDictionary *_collidingAnnotationViews;
    NSMutableDictionary *_existingClusterAnnotationViews;
}

@property(readonly, nonatomic) MKAnnotationView *draggingAnnotationView; // @synthesize draggingAnnotationView=_draggingAnnotationView;
@property(nonatomic) BOOL suppressCallout; // @synthesize suppressCallout=_suppressCallout;
- (void).cxx_destruct;
- (void)updateAnnotationViewsWithDelay;
- (void)_performStateUpdatesIfNeeded;
- (void)_updateCollidableAnnotationViews;
- (void)_updateClusterableAnnotationViews:(id)arg1 withID:(id)arg2;
- (id)_existingClusterViewsForClusterID:(id)arg1;
- (BOOL)_updateAnnotationViewPositions;
- (void)stopSuppressingUpdates;
- (void)suppressUpdates;
- (BOOL)_updateAnnotationViews:(id)arg1;
- (void)_updateAnnotationView:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (CDStruct_02837cd9)_mapRectWithFraction:(double)arg1 ofVisible:(CDStruct_02837cd9)arg2;
- (void)transitionTo:(long long)arg1;
- (void)annotationViewDidChangeCenterOffset:(id)arg1;
- (void)_updateZPositionForAnnotationView:(id)arg1 inBounds:(struct CGRect)arg2;
- (void)annotationViewDidChangeHidden:(id)arg1;
- (void)annotationViewDidChangeZIndex:(id)arg1;
@property(readonly, nonatomic) CDStruct_8a8fc6b4 currentComparisonContext;
- (void)selectAnnotationView:(id)arg1 animated:(BOOL)arg2;
- (void)dropPinsIfNeeded;
- (void)removeAnnotationView:(id)arg1;
- (void)finishAddingAndRemovingAnnotationViews;
- (void)addAnnotationView:(id)arg1 allowAnimation:(BOOL)arg2;
- (void)_willRemoveInternalAnnotationView:(id)arg1;
- (void)_dropPinsIfNeeded:(BOOL)arg1;
- (void)setUserLocationView:(id)arg1;
@property(readonly, nonatomic) MKAnnotationView *userLocationView;
@property(readonly, nonatomic) BOOL hasPendingAnimations;
@property(readonly, nonatomic) BOOL hasDroppingPins;
- (struct UIEdgeInsets)accessoryPadding;
- (void)pinDidDrop:(id)arg1 animated:(BOOL)arg2;
- (void)_dropDraggingAnnotationViewAnimated:(BOOL)arg1;
- (struct CGPoint)draggingAnnotationViewDropPointForPoint:(struct CGPoint)arg1;
- (struct CGPoint)draggingAnnotationViewDropPoint;
- (void)draggingTouchMovedToPoint:(struct CGPoint)arg1 edgeInsets:(struct UIEdgeInsets)arg2;
- (void)_draggingAnnotationViewDidPause:(id)arg1;
- (void)_liftForDragging:(id)arg1 mouseDownPoint:(struct CGPoint)arg2;
- (id)annotationViewForPoint:(struct CGPoint)arg1;
- (id)_annotationViewForSelectionAtPoint:(struct CGPoint)arg1 avoidCurrent:(BOOL)arg2 maxDistance:(double)arg3;
@property(readonly, nonatomic) NSMutableOrderedSet *annotationViews;
- (void)updateUserLocationView;
- (void)updateAnnotationView:(id)arg1;
- (struct CGPoint)pointForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (struct CLLocationCoordinate2D)coordinateForAnnotationView:(id)arg1;
- (void)updateAnnotationViewsForReason:(long long)arg1;
- (void)deselectAnnotationView:(id)arg1 animated:(BOOL)arg2;
- (void)updateCalloutStateForSelectedAnnotationView:(id)arg1;
- (void)removeAnnotationViewsRotationAnimations;
- (void)setAnnotationViewsRotationRadians:(double)arg1 animation:(id)arg2;
@property(readonly, nonatomic) MKPinAnnotationView *bubblePin;
- (struct CGRect)_visibleRect;
- (struct CGRect)_visibleCenteringRectInView:(id)arg1;
- (struct CGRect)_visibleCenteringRect;
- (BOOL)calloutContainsPoint:(struct CGPoint)arg1;
- (void)setMapDisplayStyle:(CDStruct_51745937)arg1;
@property(nonatomic) unsigned long long mapType;
- (void)setMapPitchRadians:(double)arg1;
@property(nonatomic) __weak id <MKAnnotationContainerViewDelegate> delegate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)annotationsInMapRect:(CDStruct_02837cd9)arg1;
- (unsigned char)sceneState;
- (unsigned char)sceneID;
- (void)getClusterImageTextForClusterFeatureCount:(unsigned long long)arg1 text:(id *)arg2 locale:(id *)arg3;
- (void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)arg1 text:(id *)arg2 locale:(id *)arg3;
- (id)clusterStyleAttributes;
- (BOOL)isClusteringEnabled;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)invalidateCustomFeatureDataSource;
- (void)invalidateCustomFeatureDataSourceRect:(CDStruct_02837cd9)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

