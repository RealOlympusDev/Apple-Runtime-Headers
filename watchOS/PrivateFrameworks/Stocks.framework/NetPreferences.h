//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NetPreferences : NSObject
{
    NSString *_buildVersion;
    NSString *_productVersion;
    _Bool _serviceDebugging;
    _Bool _isNetworkReachable;
    NSString *_requestCountryCode;
    NSString *_requestLanguageCode;
    NSString *_acceptLanguageCode;
    NSString *_UUID;
}

+ (void)clearSharedPreferences;
+ (id)sharedPreferences;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (id)signedRequestForURL:(id)arg1 parameters:(id)arg2;
- (id)stocksYQLBaseURL;
- (id)serviceDebuggingPath;
- (_Bool)serviceDebugging;
- (id)logoBacksideImage;
- (id)logoButtonImage;
- (id)_cacheDirectoryPath;
- (id)backsideLogoURL;
- (id)defaultBacksideLogoURL;
- (id)fullQuoteURLOverrideForStock:(id)arg1;
- (id)_urlStringWithHost:(id)arg1;
- (id)financeRequestAttributes;
- (void)addStocksHeadersToPostRequest:(id)arg1;
- (id)_stocksAcceptLanguage;
- (id)stocksLanguageCodeForLanguage:(id)arg1;
- (id)stocksLanguageCode;
- (id)stocksCountryCode;
- (id)_stocksUserAgent;
@property(nonatomic, getter=isNetworkReachable) _Bool networkReachable;
- (void)resetLocale;
@property(retain) NSString *acceptLanguageCode;
@property(retain) NSString *requestLanguageCode;
@property(retain) NSString *requestCountryCode;
- (id)init;

@end

