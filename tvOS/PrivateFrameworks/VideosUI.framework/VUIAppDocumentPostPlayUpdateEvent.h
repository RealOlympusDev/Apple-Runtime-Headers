//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUI/VUIAppDocumentUpdateEvent.h>

#import <VideosUI/NSCopying-Protocol.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentPostPlayUpdateEvent : VUIAppDocumentUpdateEvent <NSCopying>
{
    NSDictionary *_postPlayUpdateData;
}

@property(retain, nonatomic) NSDictionary *postPlayUpdateData; // @synthesize postPlayUpdateData=_postPlayUpdateData;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithPostPlayUpdateData:(id)arg1;
- (id)initWithDescriptor:(id)arg1;

@end

