//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNLabelValuePair : NSObject <NSCopying>
{
    NSString *_label;
    id _value;
}

+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2;
@property(readonly) id value; // @synthesize value=_value;
@property(readonly) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLabel:(id)arg1 value:(id)arg2;

@end

