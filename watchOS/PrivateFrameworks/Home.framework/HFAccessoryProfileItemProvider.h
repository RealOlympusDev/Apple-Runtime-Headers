//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemProvider.h>

#import <Home/HFAccessoryProfileFiltering-Protocol.h>

@class HFAccessoryProfileFilterOptions, HMHome, NSMutableSet, NSString;

@interface HFAccessoryProfileItemProvider : HFItemProvider <HFAccessoryProfileFiltering>
{
    HFAccessoryProfileFilterOptions *_filterOptions;
    HMHome *_home;
    NSMutableSet *_profileItems;
}

@property(retain, nonatomic) NSMutableSet *profileItems; // @synthesize profileItems=_profileItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HFAccessoryProfileFilterOptions *filterOptions; // @synthesize filterOptions=_filterOptions;
- (void).cxx_destruct;
- (id)_profileItemForProfile:(id)arg1;
- (id)_supportedProfileClasses;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithHome:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

