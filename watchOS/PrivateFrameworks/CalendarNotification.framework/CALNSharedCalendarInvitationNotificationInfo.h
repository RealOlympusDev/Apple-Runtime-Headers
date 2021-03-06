//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EKCalendarNotification, NSString;

@interface CALNSharedCalendarInvitationNotificationInfo : NSObject
{
    _Bool _isDelegate;
    NSString *_sourceClientIdentifier;
    EKCalendarNotification *_calendarNotification;
    NSString *_sourceTitle;
    NSString *_sourceIdentifier;
}

@property(readonly, copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(readonly, copy, nonatomic) NSString *sourceTitle; // @synthesize sourceTitle=_sourceTitle;
@property(readonly, nonatomic) _Bool isDelegate; // @synthesize isDelegate=_isDelegate;
@property(readonly, nonatomic) EKCalendarNotification *calendarNotification; // @synthesize calendarNotification=_calendarNotification;
@property(readonly, copy, nonatomic) NSString *sourceClientIdentifier; // @synthesize sourceClientIdentifier=_sourceClientIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSourceClientIdentifier:(id)arg1 calendarNotification:(id)arg2 isDelegate:(_Bool)arg3 sourceTitle:(id)arg4 sourceIdentifier:(id)arg5;

@end

