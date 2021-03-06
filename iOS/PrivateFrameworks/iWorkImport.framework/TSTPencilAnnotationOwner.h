//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCEFormulaOwning-Protocol.h>

@class NSString, TSCECalculationEngine, TSTFormulaStore, TSTTableModel, TSUSparseArray;

__attribute__((visibility("hidden")))
@interface TSTPencilAnnotationOwner : NSObject <TSCEFormulaOwning>
{
    TSCECalculationEngine *_calculationEngine;
    TSTTableModel *_tableModel;
    TSTFormulaStore *_formulaStore;
    TSUSparseArray *_annotations;
    UUIDData_5fbc143e _ownerUID;
}

@property(retain, nonatomic) TSUSparseArray *annotations; // @synthesize annotations=_annotations;
@property(readonly, nonatomic) TSTFormulaStore *formulaStore; // @synthesize formulaStore=_formulaStore;
@property(readonly, nonatomic) __weak TSTTableModel *tableModel; // @synthesize tableModel=_tableModel;
@property(readonly, nonatomic) __weak TSCECalculationEngine *calculationEngine; // @synthesize calculationEngine=_calculationEngine;
@property(nonatomic) UUIDData_5fbc143e ownerUID; // @synthesize ownerUID=_ownerUID;
- (id).cxx_construct;
- (void).cxx_destruct;
-     // Error parsing type: v32@0:8^{PencilAnnotationOwnerArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}^{CFUUIDArchive}^{FormulaStoreArchive}}16@24, name: saveToArchive:archiver:
-     // Error parsing type: @40@0:8r^{PencilAnnotationOwnerArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}^{CFUUIDArchive}^{FormulaStoreArchive}}16@24@32, name: initWithArchive:unarchiver:forTableModel:
- (void)invalidateForCalcEngine:(id)arg1;
- (void)writeResultsForCalcEngine:(id)arg1;
- (CDStruct_2a4d9400)recalculateForCalcEngine:(id)arg1 atFormulaCoord:(struct TSUCellCoord)arg2 recalcOptions:(CDStruct_3d581f42)arg3;
- (id)linkedResolver;
- (unsigned short)ownerKind;
- (void)rollbackToMark:(unsigned long long)arg1;
- (unsigned long long)markForRollback;
- (void)remapTableUIDsInFormulasWithMap:(const UUIDMap_b66c2694 *)arg1;
- (id)_indexesIntersectingButNotContainingBaseCellRegion:(id)arg1;
- (id)_indexesContainedByRegion:(id)arg1;
- (void)_enumerateIndexesIntersectingRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_indexesForRows:(id)arg1;
- (id)_indexesForRange:(struct TSUModelCellRect)arg1 startingOnly:(_Bool)arg2;
- (id)_annotationsIntersectingButNotContainingBaseCellRegion:(id)arg1;
- (id)annotationsContainedByRegion:(id)arg1;
- (id)_annotationsInRows:(id)arg1;
- (id)annotationsStartingInRange:(struct TSUModelCellRect)arg1;
- (id)_annotationsForIndexes:(id)arg1;
- (unsigned long long)indexOfAnnotation:(id)arg1;
- (_Bool)containsAnnotation:(id)arg1;
- (void)enumerateAnnotationsAndFormulasContainedInRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateAnnotationsAndFormulasInRange:(struct TSUModelCellRect)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateAnnotationsAndFormulasWithIndexes:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateAnnotationsWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (struct TSUCellRect)cellRangeForAnnotation:(id)arg1;
- (const struct TSCEFormula *)removeAnnotationAtIndex:(unsigned long long)arg1;
- (void)removeAnnotations:(id)arg1;
- (void)removeAllAnnotations;
- (const struct TSCEFormula *)removeAnnotation:(id)arg1;
- (void)addAnnotation:(id)arg1 withFormula:(struct TSCEFormula)arg2 atIndex:(unsigned long long)arg3;
- (unsigned long long)addAnnotation:(id)arg1 withAnchorRange:(struct TSUCellRect)arg2;
- (void)unregisterFromCalcEngine;
- (int)registerWithCalcEngine:(id)arg1 baseOwnerUID:(const UUIDData_5fbc143e *)arg2;
- (id)initWithTableModel:(id)arg1 ownerUID:(UUIDData_5fbc143e)arg2 annotations:(id)arg3 formulaStore:(id)arg4;
- (id)initWithTableModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

