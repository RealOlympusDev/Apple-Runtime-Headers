//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEOCommonOptions, GEOComposedRoute, GEOComposedRouteStep, GEOComposedWaypoint, GEOETATrafficUpdateRequest, GEOLocation, GEORouteAttributes, GEORouteMatch, NSData, NSString, NSTimer;
@protocol GEOETAUpdaterDelegate;

@interface GEOETAUpdater : NSObject
{
    id <GEOETAUpdaterDelegate> _delegate;
    NSString *_requestingAppIdentifier;
    GEOETATrafficUpdateRequest *_currentETARequest;
    GEOLocation *_userLocation;
    GEORouteMatch *_routeMatch;
    GEOComposedRoute *_route;
    GEOComposedWaypoint *_destination;
    GEORouteAttributes *_routeAttributes;
    long long _etaState;
    BOOL _allowRequests;
    BOOL _shouldUseConditionalRequest;
    BOOL _shouldUpdateTrafficOnRoute;
    double _requestInterval;
    NSTimer *_etaIdleTimer;
    double _lastETARequestTime;
    double _debugTimeWindowDuration;
    unsigned long long _maxAlternateRoutesCount;
    NSData *_directionsResponseID;
    GEOCommonOptions *_commonOptions;
    GEOApplicationAuditToken *_auditToken;
    GEOComposedRouteStep *_currentStepAtRequestStart;
    double _percentageOfCurrentStepRemainingAtRequestStart;
}

@property(retain, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(nonatomic) unsigned long long maxAlternateRoutesCount; // @synthesize maxAlternateRoutesCount=_maxAlternateRoutesCount;
@property(nonatomic) double debugTimeWindowDuration; // @synthesize debugTimeWindowDuration=_debugTimeWindowDuration;
@property(nonatomic) double requestInterval; // @synthesize requestInterval=_requestInterval;
@property(nonatomic) BOOL shouldUpdateTrafficOnRoute; // @synthesize shouldUpdateTrafficOnRoute=_shouldUpdateTrafficOnRoute;
@property(nonatomic) BOOL shouldUseConditionalRequest; // @synthesize shouldUseConditionalRequest=_shouldUseConditionalRequest;
@property(nonatomic) BOOL allowRequests; // @synthesize allowRequests=_allowRequests;
@property(retain, nonatomic) NSData *directionsResponseID; // @synthesize directionsResponseID=_directionsResponseID;
@property(retain, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
@property(retain, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) GEOLocation *userLocation; // @synthesize userLocation=_userLocation;
@property(retain, nonatomic) GEORouteMatch *routeMatch; // @synthesize routeMatch=_routeMatch;
@property(retain, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property(retain, nonatomic) NSString *requestingAppIdentifier; // @synthesize requestingAppIdentifier=_requestingAppIdentifier;
@property(nonatomic) __weak id <GEOETAUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)_updateRouteWithETATrafficUpdateResponse:(id)arg1;
- (BOOL)updateRouteWithETATrafficUpdateResponse:(id)arg1 step:(id)arg2 percentOfStepRemaining:(double)arg3;
- (id)routesForETAUpdateRequest;
- (double)percentageOfCurrentStepRemaining;
- (id)currentStep;
- (BOOL)_shouldStartConditionalETARequest;
- (void)_continueUpdateRequests;
- (double)_calculateNextTransitionTime;
- (void)_trafficRequest:(id)arg1 finished:(id)arg2;
- (void)_sendRequest:(id)arg1;
- (id)_updateOrCreateRequest:(id)arg1;
- (BOOL)_updateETAResponse:(id)arg1 withRemainingDistanceFromRequest:(id)arg2;
- (void)_startConditionalConnectionETARequest;
- (double)_currentTime;
- (void)_startStateWaitingForBestTimeStart:(id)arg1;
- (void)_updateRequest:(id)arg1;
- (void)stopUpdateRequests;
- (void)startUpdateRequests;
- (void)cancelRequest;
- (void)requestUpdate;
- (void)_clearTimer;
- (void)reset;
@property(readonly, nonatomic) BOOL requestInProgress;
- (void)dealloc;
- (id)initWithRoute:(id)arg1 destination:(id)arg2 routeAttributes:(id)arg3;
- (id)init;

@end

