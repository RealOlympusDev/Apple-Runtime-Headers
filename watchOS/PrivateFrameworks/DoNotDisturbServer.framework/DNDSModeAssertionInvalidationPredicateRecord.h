//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSModeAssertionStoreRecordDictionaryEncoding-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface DNDSModeAssertionInvalidationPredicateRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding>
{
    NSString *_predicateType;
    NSNumber *_date;
    NSArray *_clientIdentifiers;
    NSArray *_UUIDs;
}

+ (id)recordForInvalidationPredicate:(id)arg1;
+ (id)recordForDictionary:(id)arg1 keys:(const CDStruct_0a6492a9 *)arg2;
@property(retain, nonatomic) NSArray *UUIDs; // @synthesize UUIDs=_UUIDs;
@property(retain, nonatomic) NSArray *clientIdentifiers; // @synthesize clientIdentifiers=_clientIdentifiers;
@property(retain, nonatomic) NSNumber *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *predicateType; // @synthesize predicateType=_predicateType;
- (void).cxx_destruct;
- (id)object;
- (id)dictionaryWithKeys:(const CDStruct_0a6492a9 *)arg1 options:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

