//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VUIMenuDataSource : NSObject
{
    NSArray *_mainMenuItems;
    NSArray *_genreMenuItems;
}

@property(retain, nonatomic) NSArray *genreMenuItems; // @synthesize genreMenuItems=_genreMenuItems;
@property(retain, nonatomic) NSArray *mainMenuItems; // @synthesize mainMenuItems=_mainMenuItems;
- (void).cxx_destruct;
- (id)initWithMainMenuItems:(id)arg1 genreMenuItems:(id)arg2;

@end

