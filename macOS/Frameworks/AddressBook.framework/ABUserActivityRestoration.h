//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABUserActivityRestoration : NSObject
{
}

+ (id)scoreMatches:(id)arg1 usingPayload:(id)arg2;
+ (id)recordsMatchingEmailAddresses:(id)arg1 phoneNumbers:(id)arg2 addressBook:(id)arg3;
+ (id)peopleMatchingFirstName:(id)arg1 lastName:(id)arg2 addressBook:(id)arg3;
+ (id)companiesMatchingOrganizationName:(id)arg1 addressBook:(id)arg2;
+ (id)recordIdentifierBestMatchingPayload:(id)arg1 addressBook:(id)arg2;
+ (id)recordIdentifiersForServerUUIDs:(id)arg1 addressBook:(id)arg2;
+ (id)recordIdentifiersGivenPayload:(id)arg1 addressBook:(id)arg2;
+ (id)recordsGivenPayload:(id)arg1 addressBook:(id)arg2;
+ (id)searchQueryGivenPayload:(id)arg1;

@end

