//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MTLSimDriver/MTLFunction-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface MTLSimFunction : NSObject <MTLFunction>
{
    id <MTLDevice> _device;
    unsigned int _functionRef;
    unsigned long long _functionType;
    NSString *label;
    unsigned long long patchType;
    long long patchControlPointCount;
    NSArray *vertexAttributes;
    NSArray *stageInputAttributes;
    NSString *name;
    NSDictionary *functionConstantsDictionary;
}

@property(readonly) NSDictionary *functionConstantsDictionary; // @synthesize functionConstantsDictionary;
@property(readonly) NSString *name; // @synthesize name;
@property(readonly) NSArray *stageInputAttributes; // @synthesize stageInputAttributes;
@property(readonly) NSArray *vertexAttributes; // @synthesize vertexAttributes;
@property(readonly) long long patchControlPointCount; // @synthesize patchControlPointCount;
@property(readonly) unsigned long long patchType; // @synthesize patchType;
@property(copy) NSString *label; // @synthesize label;
@property(readonly) unsigned long long functionType; // @synthesize functionType=_functionType;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
@property(readonly) unsigned int functionRef;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 functionType:(unsigned long long)arg2 functionRef:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

