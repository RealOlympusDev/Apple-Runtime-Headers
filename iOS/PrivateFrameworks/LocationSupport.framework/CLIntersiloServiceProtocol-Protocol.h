//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LocationSupport/CLIntersiloProxyDelegateProtocol-Protocol.h>

@class CLSilo, NSArray;
@protocol CLIntersiloProxyDelegateProtocol;

@protocol CLIntersiloServiceProtocol <CLIntersiloProxyDelegateProtocol>
+ (void)performSyncOnSilo:(CLSilo *)arg1 invoker:(void (^)(void))arg2;
+ (void)becameFatallyBlocked:(NSArray *)arg1 index:(unsigned long long)arg2;
+ (CLSilo *)getSilo;
+ (_Bool)isSupported;

@optional
- (void)setDelegateEntityName:(const char *)arg1;
- (void)registerDelegate:(id <CLIntersiloProxyDelegateProtocol>)arg1 inSilo:(CLSilo *)arg2;
- (void)endService;
- (void)beginService;
@end

