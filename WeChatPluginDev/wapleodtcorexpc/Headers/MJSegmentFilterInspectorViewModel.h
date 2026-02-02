//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJFilterAdjustmentValueItem, NSArray, NSIndexPath, NSString;

@interface MJSegmentFilterInspectorViewModel
{
    NSArray *_titleItems;
    NSArray *_filterItems;
    MJFilterAdjustmentValueItem *_originalItem;
    NSIndexPath *_selectedTitleIndexPath;
    NSIndexPath *_selectedFilterIndexPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *selectedFilterIndexPath; // @synthesize selectedFilterIndexPath=_selectedFilterIndexPath;
@property(retain, nonatomic) NSIndexPath *selectedTitleIndexPath; // @synthesize selectedTitleIndexPath=_selectedTitleIndexPath;
@property(retain, nonatomic) MJFilterAdjustmentValueItem *originalItem; // @synthesize originalItem=_originalItem;
@property(copy, nonatomic) NSArray *filterItems; // @synthesize filterItems=_filterItems;
@property(copy, nonatomic) NSArray *titleItems; // @synthesize titleItems=_titleItems;
- (void)notifyDidApplyToAll:(id)arg1;
- (void)setValuesToOriginal;
- (void)notifyDidCancel;
- (_Bool)hasChanges;
- (id)adjustableProtocols;
- (id)title;
- (_Bool)isResetEnabled;
- (_Bool)isApplyAllEnabled;
- (_Bool)isCancelEnabled;
@property(nonatomic) _Bool isFilterEnabled;
@property(nonatomic) float filterIntensity;
@property(retain, nonatomic) NSString *filterID;
@property(readonly, nonatomic) _Bool isFilterAdjusted;
- (id)cellItemAtIndexPath:(id)arg1 isTitle:(_Bool)arg2;
- (long long)numberOfItemsInSection:(long long)arg1 isTitle:(_Bool)arg2;
- (long long)numberOfSections:(_Bool)arg1;
- (void)loadMaterial:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchItems:(CDUnknownBlockType)arg1;
- (void)setupData;
- (id)initWithSegment:(id)arg1 type:(unsigned long long)arg2;
- (void)loadingStatusForID:(id)arg1 threadSafetyHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)mj_loadingStatusWithID:(id)arg1;
- (float)mj_loadingProgressWithID:(id)arg1;
- (void)mj_loadMaterialWithID:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)downloadStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

