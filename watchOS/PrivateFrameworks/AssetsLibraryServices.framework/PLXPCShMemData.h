//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface PLXPCShMemData : NSData
{
    void *_buffer;
    unsigned long _dataLength;
    unsigned long _bufferLength;
}

- (unsigned int)length;
- (const void *)bytes;
- (id)description;
- (void)dealloc;
- (id)initWithXPCShmem:(id)arg1 length:(long long)arg2;
- (id)initWithXPCShmem:(id)arg1;

@end

