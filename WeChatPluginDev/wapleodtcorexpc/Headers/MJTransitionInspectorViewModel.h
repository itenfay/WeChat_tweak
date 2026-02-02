//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, OMCTransitionSegment;

@interface MJTransitionInspectorViewModel
{
    NSString *_selectedTransitionID;
    NSArray *_items;
    CDUnknownBlockType _updateSelectionHandler;
    OMCTransitionSegment *_transitionSegment;
    NSString *_originalTransitionID;
    CDStruct_1b6d18a9 _overlappingTransitionDuration;
    CDStruct_1b6d18a9 _nonOverlappingTransitionDuration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *originalTransitionID; // @synthesize originalTransitionID=_originalTransitionID;
@property(retain, nonatomic) OMCTransitionSegment *transitionSegment; // @synthesize transitionSegment=_transitionSegment;
@property(copy, nonatomic) CDUnknownBlockType updateSelectionHandler; // @synthesize updateSelectionHandler=_updateSelectionHandler;
@property(nonatomic) CDStruct_1b6d18a9 nonOverlappingTransitionDuration; // @synthesize nonOverlappingTransitionDuration=_nonOverlappingTransitionDuration;
@property(nonatomic) CDStruct_1b6d18a9 overlappingTransitionDuration; // @synthesize overlappingTransitionDuration=_overlappingTransitionDuration;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *selectedTransitionID; // @synthesize selectedTransitionID=_selectedTransitionID;
- (id)cellItemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)loadMaterial:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleSelectItemAtIndexPath:(id)arg1;
- (id)itemsWithMaterialCategories:(id)arg1;
- (void)handleMaterialPackRequestFailedWithCategories:(id)arg1 error:(id)arg2;
- (void)loadItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)notifyDidApplyToAll:(id)arg1;
- (void)setTransitionToOriginal;
- (void)notifyDidCancel;
- (_Bool)isApplyAllEnabled;
- (_Bool)isCancelEnabled;
- (_Bool)hasChanges;
- (id)adjustableProtocols;
- (id)title;
- (void)dealloc;
- (id)itemsWithDefaultItem;
- (id)initWithSegment:(id)arg1 type:(unsigned long long)arg2;

@end

