//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKMedicalRecord.h>

#import <HealthKit/HKConceptIndexable-Protocol.h>
#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKConcept, HKDiagnosticTestReportType, HKMedicalCoding, HKMedicalDate, NSArray, NSLocale, NSString, NSUUID;

@interface HKDiagnosticTestReport : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying>
{
    NSArray *_diagnosticTestCodings;
    NSString *_panelName;
    NSArray *_results;
    HKMedicalDate *_effectiveStartDate;
    HKMedicalCoding *_statusCoding;
    HKMedicalDate *_effectiveEndDate;
    HKMedicalDate *_issueDate;
    HKConcept *_diagnosticTest;
    HKConcept *_status;
}

+ (_Bool)_isConcreteObjectClass;
+ (_Bool)supportsEquivalence;
+ (_Bool)supportsSecureCoding;
+ (id)_newDiagnosticTestReportWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(int)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 diagnosticTestCodings:(id)arg11 panelName:(id)arg12 results:(id)arg13 effectiveStartDate:(id)arg14 statusCoding:(id)arg15 effectiveEndDate:(id)arg16 issueDate:(id)arg17 config:(CDUnknownBlockType)arg18;
+ (id)diagnosticTestReportWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(int)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 diagnosticTestCodings:(id)arg11 panelName:(id)arg12 results:(id)arg13 effectiveStartDate:(id)arg14 statusCoding:(id)arg15 effectiveEndDate:(id)arg16 issueDate:(id)arg17;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)indexableConceptKeyPaths;
+ (id)diagnosticTestReportWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(int)arg7 device:(id)arg8 metadata:(id)arg9 diagnosticTestCodings:(id)arg10 panelName:(id)arg11 results:(id)arg12 effectiveStartDate:(id)arg13 statusCoding:(id)arg14 effectiveEndDate:(id)arg15 issueDate:(id)arg16;
+ (id)defaultDisplayString;
+ (id)statusCodingPreferredSystems;
+ (id)diagnosticTestCodingsPreferredSystems;
- (void).cxx_destruct;
@property(readonly, copy) HKDiagnosticTestReportType *diagnosticTestReportType;
- (id)_validateConfigurationWithOptions:(unsigned int)arg1;
- (void)_setStatus:(id)arg1;
@property(readonly, copy) HKConcept *status;
- (void)_setDiagnosticTest:(id)arg1;
@property(readonly, copy) HKConcept *diagnosticTest;
- (void)_setIssueDate:(id)arg1;
@property(readonly, copy) HKMedicalDate *issueDate;
- (void)_setEffectiveEndDate:(id)arg1;
@property(readonly, copy) HKMedicalDate *effectiveEndDate;
- (void)_setStatusCoding:(id)arg1;
@property(readonly, copy) HKMedicalCoding *statusCoding;
- (void)_setEffectiveStartDate:(id)arg1;
@property(readonly, copy) HKMedicalDate *effectiveStartDate;
- (void)_setResults:(id)arg1;
@property(readonly, copy) NSArray *results;
- (void)_setPanelName:(id)arg1;
@property(readonly, copy) NSString *panelName;
- (void)_setDiagnosticTestCodings:(id)arg1;
@property(readonly, copy) NSArray *diagnosticTestCodings;
- (id)statusCodingContext;
- (id)statusCodingCollection;
- (id)diagnosticTestCodingsContext;
- (id)diagnosticTestCodingsCollection;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;
- (_Bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;
- (id)medicalRecordPreferredSystems;
- (id)medicalRecordCodings;
- (id)indexKeywords;
- (id)statusCodingTasks;
- (id)diagnosticTestCodingsTasks;

// Remaining properties
@property(readonly) NSUUID *UUID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly, copy, nonatomic) NSLocale *locale;
@property(readonly) Class superclass;

@end

