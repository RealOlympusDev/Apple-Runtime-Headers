//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSupport/MSPQuery.h>

@class MSPContainer, NSString, _MSPQueryState;

@interface MSPEditableQuery : MSPQuery
{
    _MSPQueryState *_editedState;
    MSPContainer *_container;
    NSString *_context;
}

- (void).cxx_destruct;
- (void)moveContentsObjectAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (void)deleteContentsObjectAtIndex:(unsigned int)arg1;
- (void)deleteContentsObjectAtIndexes:(id)arg1;
- (void)_performEditWithStateTransformation:(CDUnknownBlockType)arg1 containerEdit:(CDUnknownBlockType)arg2;
- (void)_didChangeSourceWithNewState:(id)arg1 context:(id)arg2 inContainer:(id)arg3;
- (id)_visibleState;
- (id)_initWithSource:(id)arg1;

@end

