//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SAIntentGroupSiriKitRemoteExecution : AceObject <SAAceSerializable>
{
}

+ (id)siriKitRemoteExecutionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)siriKitRemoteExecution;
@property(copy, nonatomic) NSString *runLocation;
@property(copy, nonatomic) NSString *personalDomainAuthenticationMode;
@property(copy, nonatomic) NSString *invocationDeviceAssistantId;
@property(copy, nonatomic) NSString *executionDeviceAssistantId;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

