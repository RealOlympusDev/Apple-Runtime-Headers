//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

@class CKDServerConfiguration, NSObject;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDGlobalConfigurationOperation : CKDOperation
{
    CKDServerConfiguration *_configuration;
    NSObject<OS_dispatch_group> *_configurationFetchedGroup;
}

@property(retain, nonatomic) NSObject<OS_dispatch_group> *configurationFetchedGroup; // @synthesize configurationFetchedGroup=_configurationFetchedGroup;
@property(retain, nonatomic) CKDServerConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)main;
- (_Bool)shouldCheckAppVersion;
- (id)activityCreate;

@end

