//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class NSDictionary, NSString, VCMoments;

@protocol VCMomentTransportDelegate <NSObject>
- (void)moments:(VCMoments *)arg1 shouldProcessRequest:(NSDictionary *)arg2 recipientID:(NSString *)arg3;
@end

