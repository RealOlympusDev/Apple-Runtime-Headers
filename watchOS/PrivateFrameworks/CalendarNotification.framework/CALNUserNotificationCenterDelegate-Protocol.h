//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CALNNotification, CALNNotificationResponse;
@protocol CALNUserNotificationCenter;

@protocol CALNUserNotificationCenterDelegate
- (void)userNotificationCenter:(id <CALNUserNotificationCenter>)arg1 didReceiveNotificationResponse:(CALNNotificationResponse *)arg2 withCompletionHandler:(void (^)(void))arg3;
- (void)userNotificationCenter:(id <CALNUserNotificationCenter>)arg1 willPresentNotification:(CALNNotification *)arg2 withCompletionHandler:(void (^)(unsigned int))arg3;
@end

