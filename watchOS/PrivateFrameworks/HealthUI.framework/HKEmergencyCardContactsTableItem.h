//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKEmergencyCardTableItem.h>

#import <HealthUI/HKMedicalIDEditorCellEditDelegate-Protocol.h>
#import <HealthUI/_HKEmergencyContactPickerDelegate-Protocol.h>
#import <HealthUI/_HKEmergencyContactRelationshipPickerDelegate-Protocol.h>

@class HKCoreTelephonyUtilities, UITableViewCell, _HKEmergencyContact, _HKEmergencyContactPicker;
@protocol HKEmergencyCardContactUpdateDelegate;

@interface HKEmergencyCardContactsTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, _HKEmergencyContactPickerDelegate, _HKEmergencyContactRelationshipPickerDelegate>
{
    UITableViewCell *_lastDequeuedAddContactCell;
    _HKEmergencyContact *_selectedContact;
    _HKEmergencyContactPicker *_contactPicker;
    _Bool _selectedContactIsBeingAdded;
    id <HKEmergencyCardContactUpdateDelegate> _delegate;
    HKCoreTelephonyUtilities *_coreTelephonyUtilities;
}

@property(retain, nonatomic) HKCoreTelephonyUtilities *coreTelephonyUtilities; // @synthesize coreTelephonyUtilities=_coreTelephonyUtilities;
@property(nonatomic) __weak id <HKEmergencyCardContactUpdateDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)titleForHeader;
- (id)viewOnlyTitle;
- (id)titleForFooter;
- (void)_didSelectContact:(id)arg1 property:(id)arg2;
- (void)emergencyContactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)emergencyContactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)_addEmergencyContactToData:(id)arg1;
- (void)emergencyContactRelationshipPickerDidCancel:(id)arg1;
- (void)emergencyContactRelationshipPicker:(id)arg1 didChooseRelationshipNamed:(id)arg2;
- (void)medicalIDEditorCellDidTapLabel:(id)arg1;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (int)commitEditingStyle:(int)arg1 forRowAtIndex:(int)arg2;
- (int)editingStyleForRowAtIndex:(int)arg1;
- (_Bool)canEditRowAtIndex:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(int)arg2;
- (void)_presentEmergencyContactPicker;
- (_Bool)shouldHighlightRowAtIndex:(int)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndex:(int)arg2;
- (id)title;
- (id)tableView:(id)arg1 cellForRowAtIndex:(int)arg2;
- (id)_dequeueAndConfigureContactEditCellForIndex:(int)arg1 inTableView:(id)arg2;
- (id)_dequeueAndConfigureContactViewCellForIndex:(int)arg1 inTableView:(id)arg2;
- (_Bool)refreshFromData;
- (int)numberOfRows;
- (void)callEmergencyContact:(id)arg1;
- (int)contactIndexForRowIndex:(int)arg1;
- (int)itemTypeForRowIndex:(int)arg1;
- (_Bool)hasPresentableData;
- (id)initInEditMode:(_Bool)arg1;

@end

