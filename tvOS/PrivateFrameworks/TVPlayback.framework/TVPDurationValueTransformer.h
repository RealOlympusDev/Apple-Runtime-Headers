//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@class NSDateComponentsFormatter;

__attribute__((visibility("hidden")))
@interface TVPDurationValueTransformer : NSValueTransformer
{
    NSDateComponentsFormatter *_minutesFormatter;
    NSDateComponentsFormatter *_secondsFormatter;
}

+ (_Bool)allowsReverseTransformation;
+ (Class)transformedValueClass;
@property(retain, nonatomic) NSDateComponentsFormatter *secondsFormatter; // @synthesize secondsFormatter=_secondsFormatter;
@property(retain, nonatomic) NSDateComponentsFormatter *minutesFormatter; // @synthesize minutesFormatter=_minutesFormatter;
- (void).cxx_destruct;
- (id)transformedValue:(id)arg1;
- (id)init;

@end

