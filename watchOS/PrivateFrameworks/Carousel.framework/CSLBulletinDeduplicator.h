//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BBObserver, CSLBulletinPipelineStep, CSLPITimer, NSMutableArray, NSMutableDictionary;
@protocol CSLBulletinStateStoreProtocol, OS_dispatch_queue;

@interface CSLBulletinDeduplicator : NSObject
{
    NSMutableDictionary *_bulletinItems;
    NSMutableArray *_autofireQueue;
    CSLPITimer *_autoFireTimer;
    double _fireTimeout;
    CSLBulletinPipelineStep *_pipeline;
    id <CSLBulletinStateStoreProtocol> _stateStore;
    BBObserver *_observer;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _fireBulletin;
    CDUnknownBlockType _sectionIdentifierMappingWithSectionIDProvider;
    CDUnknownBlockType _sectionIdentifierMappingWithMirroredSectionIDProvider;
    CDUnknownBlockType _sectionIdentifierMappingWithLocalSectionIDProvider;
}

@property(copy, nonatomic) CDUnknownBlockType sectionIdentifierMappingWithLocalSectionIDProvider; // @synthesize sectionIdentifierMappingWithLocalSectionIDProvider=_sectionIdentifierMappingWithLocalSectionIDProvider;
@property(copy, nonatomic) CDUnknownBlockType sectionIdentifierMappingWithMirroredSectionIDProvider; // @synthesize sectionIdentifierMappingWithMirroredSectionIDProvider=_sectionIdentifierMappingWithMirroredSectionIDProvider;
@property(copy, nonatomic) CDUnknownBlockType sectionIdentifierMappingWithSectionIDProvider; // @synthesize sectionIdentifierMappingWithSectionIDProvider=_sectionIdentifierMappingWithSectionIDProvider;
@property(copy, nonatomic) CDUnknownBlockType fireBulletin; // @synthesize fireBulletin=_fireBulletin;
- (void).cxx_destruct;
- (void)_purgeExpiredBulletins;
- (id)_itemForAddedBulletin:(id)arg1 feed:(unsigned int)arg2 isLocal:(_Bool *)arg3;
- (void)_invalidateAutoFireTimer;
- (void)_handleAutoFireTimer;
- (void)_startAutoFireTimer;
- (void)_enqueueItemInAutoFireQueue:(id)arg1;
- (_Bool)_isItemInAutoFireQueue:(id)arg1;
- (void)_removeItemFromAutofireQueue:(id)arg1;
- (void)_firePendingItems;
- (void)_handleOnWristStateChanged:(id)arg1;
- (id)_bulletinKeyForBulletin:(id)arg1;
- (id)_existingItemForBulletin:(id)arg1;
- (void)_fireItem:(id)arg1;
- (void)reset;
- (void)invalidateBulletinIDs:(id)arg1;
- (void)sectionVisibilityUpdatedForSectionID:(id)arg1 visibility:(int)arg2;
- (void)sectionParametersChangedForSectionID:(id)arg1;
- (void)forgetBulletinsBeforeDate:(id)arg1 keepNonClearable:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeBulletin:(id)arg1 feed:(unsigned int)arg2;
- (void)modifyBulletin:(id)arg1 feed:(unsigned int)arg2;
- (void)addBulletin:(id)arg1 feed:(unsigned int)arg2;
- (void)_createStateForAddedItem:(id)arg1 triggeredbyBulletin:(id)arg2 feed:(unsigned int)arg3 isLocalBulletin:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 observer:(id)arg2 pipeline:(id)arg3 stateStore:(id)arg4 fireTimeout:(double)arg5;

@end

