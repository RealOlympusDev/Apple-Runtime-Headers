//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIFocusSearchInfo : NSObject
{
    BOOL _forceFocusToLeaveContainer;
    CDUnknownBlockType _evaluator;
}

+ (id)defaultInfo;
@property(copy, nonatomic) CDUnknownBlockType evaluator; // @synthesize evaluator=_evaluator;
@property(nonatomic) BOOL forceFocusToLeaveContainer; // @synthesize forceFocusToLeaveContainer=_forceFocusToLeaveContainer;
- (void).cxx_destruct;
- (BOOL)shouldIncludeFocusItem:(id)arg1;
- (id)initWithFocusEvaluator:(CDUnknownBlockType)arg1;

@end

