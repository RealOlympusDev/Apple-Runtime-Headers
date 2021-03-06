//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDocumentRevisionsPlaceholderView, NSDocumentRevisionsStackLayer, NSFileVersion;

__attribute__((visibility("hidden")))
@interface NSDocumentRevisionsStackItem : NSObject
{
    NSFileVersion *version;
    BOOL hasLocalData;
    NSDocumentRevisionsPlaceholderView *placeholderView;
    NSDocumentRevisionsStackLayer *layer;
    BOOL hasValidSnapshot;
    BOOL hasWindowVisible;
    BOOL documentFailedToLoad;
}

+ (id)itemWithVersion:(id)arg1;
@property BOOL documentFailedToLoad; // @synthesize documentFailedToLoad;
@property BOOL hasWindowVisible; // @synthesize hasWindowVisible;
@property BOOL hasValidSnapshot; // @synthesize hasValidSnapshot;
@property(retain) NSDocumentRevisionsStackLayer *layer; // @synthesize layer;
@property BOOL hasLocalData; // @synthesize hasLocalData;
@property(retain) NSFileVersion *version; // @synthesize version;
- (void)dealloc;
@property(retain) NSDocumentRevisionsPlaceholderView *placeholderView;
- (void)applyParameters:(id)arg1;
- (void)_setupLayerAsPlaceholder:(BOOL)arg1;

@end

