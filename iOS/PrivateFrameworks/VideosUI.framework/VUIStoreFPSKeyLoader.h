//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSMutableArray, NSMutableDictionary, NSNumber, NSURL, TVPContentKeyRequest, TVPContentKeySession, TVPPlaybackReportingEventCollection;
@protocol VUIStoreFPSKeyLoaderDelegate;

@interface VUIStoreFPSKeyLoader : NSObject
{
    _Bool _didSkipRentalCheckout;
    _Bool _hasLoadedAnyStreamingKeyRequests;
    _Bool _usesKeyIdentifierPenaltyBox;
    NSURL *_secureInvalidationNonceURL;
    NSNumber *_secureInvalidationDSID;
    NSObject<VUIStoreFPSKeyLoaderDelegate> *_delegate;
    TVPPlaybackReportingEventCollection *_eventCollection;
    NSNumber *_rentalID;
    NSURL *_certificateURL;
    NSURL *_keyServerURL;
    long long _state;
    NSData *_certificateData;
    NSMutableArray *_requestsAwaitingCertFetch;
    TVPContentKeyRequest *_savedRequestToUseForStopping;
    NSDate *_keyExpirationDate;
    NSDate *_rentalPlaybackStartDate;
    TVPContentKeySession *_contentKeySession;
    NSMutableDictionary *_keyIdentifierPenaltyBox;
}

+ (void)_loadAndCacheCertificateDataForValidURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_loadFPSURLsFromStoreBagWithCompletion:(CDUnknownBlockType)arg1;
+ (void)preFetchFPSCertificate;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *keyIdentifierPenaltyBox; // @synthesize keyIdentifierPenaltyBox=_keyIdentifierPenaltyBox;
@property(retain, nonatomic) TVPContentKeySession *contentKeySession; // @synthesize contentKeySession=_contentKeySession;
@property(retain, nonatomic) NSDate *rentalPlaybackStartDate; // @synthesize rentalPlaybackStartDate=_rentalPlaybackStartDate;
@property(retain, nonatomic) NSDate *keyExpirationDate; // @synthesize keyExpirationDate=_keyExpirationDate;
@property(retain, nonatomic) TVPContentKeyRequest *savedRequestToUseForStopping; // @synthesize savedRequestToUseForStopping=_savedRequestToUseForStopping;
@property(retain, nonatomic) NSMutableArray *requestsAwaitingCertFetch; // @synthesize requestsAwaitingCertFetch=_requestsAwaitingCertFetch;
@property(retain, nonatomic) NSData *certificateData; // @synthesize certificateData=_certificateData;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSURL *keyServerURL; // @synthesize keyServerURL=_keyServerURL;
@property(copy, nonatomic) NSURL *certificateURL; // @synthesize certificateURL=_certificateURL;
@property(nonatomic) _Bool usesKeyIdentifierPenaltyBox; // @synthesize usesKeyIdentifierPenaltyBox=_usesKeyIdentifierPenaltyBox;
@property(nonatomic) _Bool hasLoadedAnyStreamingKeyRequests; // @synthesize hasLoadedAnyStreamingKeyRequests=_hasLoadedAnyStreamingKeyRequests;
@property(nonatomic) _Bool didSkipRentalCheckout; // @synthesize didSkipRentalCheckout=_didSkipRentalCheckout;
@property(retain, nonatomic) NSNumber *rentalID; // @synthesize rentalID=_rentalID;
@property(retain, nonatomic) TVPPlaybackReportingEventCollection *eventCollection; // @synthesize eventCollection=_eventCollection;
@property(nonatomic) __weak NSObject<VUIStoreFPSKeyLoaderDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSNumber *secureInvalidationDSID; // @synthesize secureInvalidationDSID=_secureInvalidationDSID;
@property(retain, nonatomic) NSURL *secureInvalidationNonceURL; // @synthesize secureInvalidationNonceURL=_secureInvalidationNonceURL;
- (void).cxx_destruct;
- (id)_jsonDictionaryForRequest:(id)arg1 isStopRequest:(_Bool)arg2;
- (id)_bodyJSONDataForRequests:(id)arg1 isStopRequest:(_Bool)arg2;
- (void)_failKeyRequests:(id)arg1 withError:(id)arg2;
- (id)_errorForStoreResponseStatus:(long long)arg1 deviceLimit:(id)arg2;
- (void)_handleResponseDict:(id)arg1 forKeyRequest:(id)arg2;
- (void)_handleResponseDicts:(id)arg1 forKeyRequests:(id)arg2;
- (void)_handleResponseForKeyRequests:(id)arg1 responseData:(id)arg2 URLResponse:(id)arg3 error:(id)arg4;
- (void)_sendKeyRequestsToServer:(id)arg1 isStopRequest:(_Bool)arg2 isSecureInvalidationRequest:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_generateKeyRequestDataForKeyRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startKeyRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startKeyRequestsInBatches:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_generateSecureInvalidationDataForFirstRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_generateSecureInvalidationDataForRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadNonceDataForRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_invalidateValidKeyRequestsInBatches:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadCertificateDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeAllEntriesFromKeyIdentifierPenaltyBox;
- (void)sendStopRequest;
- (void)invalidateKeysWithRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadFairPlayStreamingKeyRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithCertificateURL:(id)arg1 keyServerURL:(id)arg2;

@end

