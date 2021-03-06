//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSDictionary, _UIStatusBarData, _UIStatusBarStyleAttributes;

__attribute__((visibility("hidden")))
@interface _UIStatusBarItemUpdate : NSObject <NSCopying>
{
    _Bool _enabilityChanged;
    _Bool _enabled;
    _Bool _dataChanged;
    _Bool _styleAttributesChanged;
    _UIStatusBarData *_data;
    _UIStatusBarStyleAttributes *_styleAttributes;
    NSDictionary *_placementInfo;
}

@property(retain, nonatomic) NSDictionary *placementInfo; // @synthesize placementInfo=_placementInfo;
@property(retain, nonatomic) _UIStatusBarStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(nonatomic) _Bool styleAttributesChanged; // @synthesize styleAttributesChanged=_styleAttributesChanged;
@property(retain, nonatomic) _UIStatusBarData *data; // @synthesize data=_data;
@property(nonatomic) _Bool dataChanged; // @synthesize dataChanged=_dataChanged;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool enabilityChanged; // @synthesize enabilityChanged=_enabilityChanged;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

