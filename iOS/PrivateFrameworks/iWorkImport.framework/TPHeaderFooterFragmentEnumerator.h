//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class TPPageMaster;

__attribute__((visibility("hidden")))
@interface TPHeaderFooterFragmentEnumerator : NSEnumerator
{
    TPPageMaster *_pageMaster;
    long long _fragmentIndex;
    long long _headerFooterType;
}

@property(nonatomic) long long headerFooterType; // @synthesize headerFooterType=_headerFooterType;
@property(nonatomic) long long fragmentIndex; // @synthesize fragmentIndex=_fragmentIndex;
@property(retain, nonatomic) TPPageMaster *pageMaster; // @synthesize pageMaster=_pageMaster;
- (void).cxx_destruct;
- (void)p_incrementHeaderFooterType;
- (void)p_incrementFragmentIndex;
- (id)nextObject;
- (id)initWithPageMaster:(id)arg1;

@end

