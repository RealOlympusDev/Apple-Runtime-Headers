//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNUICoreContactScratchpad, NSArray;

@interface CNUICoreContactEditingSession : NSObject
{
    CNUICoreContactScratchpad *_contactsAdded;
    CNUICoreContactScratchpad *_contactsUpdated;
    CNUICoreContactScratchpad *_contactsRemoved;
}

+ (_Bool)isEdiingStateOfContactValid:(long long)arg1;
@property(retain, nonatomic) CNUICoreContactScratchpad *contactsRemoved; // @synthesize contactsRemoved=_contactsRemoved;
@property(retain, nonatomic) CNUICoreContactScratchpad *contactsUpdated; // @synthesize contactsUpdated=_contactsUpdated;
@property(retain, nonatomic) CNUICoreContactScratchpad *contactsAdded; // @synthesize contactsAdded=_contactsAdded;
- (void).cxx_destruct;
- (id)description;
- (id)applyChangesToContacts:(id)arg1;
- (id)generateSaveRequest;
- (id)removedContactsMatchingContacts:(id)arg1;
- (id)updatedContactsMatchingContacts:(id)arg1;
- (id)addedContactsMatchingContacts:(id)arg1;
- (_Bool)containsRemovedContactMatchingContact:(id)arg1;
- (_Bool)containsUpdatedContactMatchingContact:(id)arg1;
- (_Bool)containsAddedContactMatchingContact:(id)arg1;
@property(readonly, nonatomic) NSArray *removedContacts;
@property(readonly, nonatomic) NSArray *updatedContacts;
@property(readonly, nonatomic) NSArray *addedContacts;
- (void)removeContacts:(id)arg1;
- (void)updateContacts:(id)arg1;
- (void)verifyConsistencyOfEditingSessionForContact:(id)arg1;
- (_Bool)wasContactRemoved:(id)arg1;
- (_Bool)wasContactUpdated:(id)arg1;
- (_Bool)wasContactAdded:(id)arg1;
- (_Bool)isContactUnseen:(id)arg1;
- (long long)editingStateOfContact:(id)arg1;
- (void)addContacts:(id)arg1;
@property(readonly, nonatomic) _Bool inProgress;
- (id)init;

@end

