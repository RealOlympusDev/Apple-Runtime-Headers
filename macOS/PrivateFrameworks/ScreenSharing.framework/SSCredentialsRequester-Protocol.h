//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenSharing/NSObject-Protocol.h>

@class NSMutableDictionary, NSString, SSCredentials;

@protocol SSCredentialsRequester <NSObject>
- (void)setNetAuthContext:(NSMutableDictionary *)arg1;
- (NSString *)escapedURL;
- (NSString *)displayNameForDialogs;
- (void)guestAccessRequestCancelled;
- (void)gatheredCredentials:(SSCredentials *)arg1 withStatus:(int)arg2;
@end

