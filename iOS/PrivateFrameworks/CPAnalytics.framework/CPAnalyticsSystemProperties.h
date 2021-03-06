//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CPAnalyticsSystemProperties : NSObject
{
    NSMutableDictionary *_systemProperties;
    NSMutableDictionary *_dynamicProperties;
}

@property(retain, nonatomic) NSMutableDictionary *dynamicProperties; // @synthesize dynamicProperties=_dynamicProperties;
@property(retain, nonatomic) NSMutableDictionary *systemProperties; // @synthesize systemProperties=_systemProperties;
- (void).cxx_destruct;
- (struct NSObject *)propertyForKey:(id)arg1 forEventName:(id)arg2 withPayload:(id)arg3;
- (void)addDynamicProperty:(id)arg1 withProvider:(id)arg2;
- (void)addProperty:(id)arg1 withValue:(struct NSObject *)arg2;
- (id)init;

@end

