//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistiveControlSupport/ACSHPlistObject.h>

@class NSArray, NSMutableArray;

@interface ACSHToolbarOrdering : ACSHPlistObject
{
    NSMutableArray *__toolbarIdentifiersPriorToBasePanel;
    NSMutableArray *__toolbarIdentifiersAfterBasePanel;
}

@property(retain, nonatomic) NSMutableArray *_toolbarIdentifiersAfterBasePanel; // @synthesize _toolbarIdentifiersAfterBasePanel=__toolbarIdentifiersAfterBasePanel;
@property(retain, nonatomic) NSMutableArray *_toolbarIdentifiersPriorToBasePanel; // @synthesize _toolbarIdentifiersPriorToBasePanel=__toolbarIdentifiersPriorToBasePanel;
- (void).cxx_destruct;
- (void)reorderToolbarIdentifiersPrior:(id)arg1 after:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *_allToolbarIdentifiers;
- (id)allToolbarIdentifiersWithBasePanelIdentifier:(id)arg1;
- (id)_allToolbarIdentifiersWithBasePanelIdentifier:(id)arg1;
- (void)updateWithPanelCollection:(id)arg1;
- (void)mergeInToolbarOrdering:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *toolbarIdentifiersAfterBasePanel;
@property(readonly, copy, nonatomic) NSArray *toolbarIdentifiersPriorToBasePanel;
- (id)descriptionForDepth:(unsigned long long)arg1;
- (id)dictionaryForSaving;
- (void)_configureWithPlistDictionary:(id)arg1;
- (id)initWithUndoManager:(id)arg1;

@end

