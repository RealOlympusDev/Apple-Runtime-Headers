//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString, NSURL, OspreyGRPCChannel, OspreyKeychain;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OspreyAbsintheAuthenticator : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    struct NACContextOpaque_ *_nacContext;
    NSData *_certificateData;
    OspreyGRPCChannel *_channel;
    NSString *_uuid;
    long long _state;
    NSData *_sessionInfo;
    NSDate *_sessionExpireOn;
    NSURL *_server;
    OspreyKeychain *_keychainStorage;
}

+ (void)initialize;
@property(nonatomic) __weak OspreyKeychain *keychainStorage; // @synthesize keychainStorage=_keychainStorage;
@property(retain, nonatomic) NSURL *server; // @synthesize server=_server;
@property(retain, nonatomic) NSDate *sessionExpireOn; // @synthesize sessionExpireOn=_sessionExpireOn;
@property(retain, nonatomic) NSData *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)createClientSessionWithData:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)fetchAbsintheServerCertificate:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)_initializeAbsintheClientWithCertificateData:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)_ensureAuthenticatedWithCompletion:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (BOOL)_isSessionInfoExpired;
- (BOOL)isSessionInfoExpired;
- (id)_signData:(id)arg1;
- (void)signData:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)didMoveToState:(long long)arg1;
- (void)willMoveToState:(long long)arg1;
- (BOOL)_readyToSignClientData;
- (void)deleteCachedCertificateDataWithEndpoint:(id)arg1;
- (void)setCachedCertificateData:(id)arg1 endpoint:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)getCachedCertificateDataWithEndpoint:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_prefixIdentifierWithOsprey:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 channel:(id)arg2 keychainStorage:(id)arg3;
- (id)initWithURL:(id)arg1 channel:(id)arg2;

@end

