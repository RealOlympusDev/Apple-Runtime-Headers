//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PXGLayout, PXGSpriteReference;

@interface PXGHitTestResult : NSObject
{
    BOOL _isDecorated;
    PXGSpriteReference *_spriteReference;
    PXGLayout *_layout;
    NSString *_identifier;
    id _userData;
}

@property(readonly, nonatomic) BOOL isDecorated; // @synthesize isDecorated=_isDecorated;
@property(readonly, nonatomic) id userData; // @synthesize userData=_userData;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) PXGLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) PXGSpriteReference *spriteReference; // @synthesize spriteReference=_spriteReference;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSpriteReference:(id)arg1 layout:(id)arg2 identifier:(id)arg3 userData:(id)arg4;
- (id)init;

@end

