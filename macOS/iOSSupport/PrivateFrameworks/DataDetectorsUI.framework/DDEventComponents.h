//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataDetectorsUI/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface DDEventComponents : NSObject <NSSecureCoding>
{
    NSString *_title;
    NSString *_eventTypeIdentifier;
    NSDate *_startDate;
    NSDate *_endDate;
    double _duration;
    struct _NSRange _originRange;
    long long _source;
}

+ (id)_eventsFromIntelligentSuggestions:(id)arg1;
+ (id)_eventsFromNaturalLanguageText:(id)arg1 context:(id)arg2;
+ (id)_eventComponents:(id)arg1 matchingResult:(struct __DDResult *)arg2 context:(id)arg3;
+ (id)bestEventComponentsForResult:(struct __DDResult *)arg1 withNaturalLanguageContext:(id)arg2 suggestionsContext:(id)arg3 context:(id)arg4;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) struct _NSRange originRange; // @synthesize originRange=_originRange;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSString *eventTypeIdentifier; // @synthesize eventTypeIdentifier=_eventTypeIdentifier;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

