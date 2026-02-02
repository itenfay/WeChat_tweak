//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJShootFilterItem, NSArray;

@interface MJShootFilterInspectorViewModel
{
    NSArray *_titleItems;
    NSArray *_filterItems;
    MJShootFilterItem *_selectedFilterItem;
}

+ (id)defaultItems;
- (void).cxx_destruct;
@property(retain, nonatomic) MJShootFilterItem *selectedFilterItem; // @synthesize selectedFilterItem=_selectedFilterItem;
@property(retain, nonatomic) NSArray *filterItems; // @synthesize filterItems=_filterItems;
@property(retain, nonatomic) NSArray *titleItems; // @synthesize titleItems=_titleItems;
- (void)updateCamEffectWithFilterItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cleanFilterData;
- (void)loadMaterialWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)restoreFilterEffectInnerWithCompletion:(CDUnknownBlockType)arg1;
- (void)refetchAndRestoreFilterEffectWithCompletion:(CDUnknownBlockType)arg1;
- (void)restoreFilterEffectWithCompletion:(CDUnknownBlockType)arg1;
- (void)refetchFilterDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)adjustingFilterOnItemValueChanged:(id)arg1;
- (void)didSelectFilterItem:(id)arg1;
- (void)resetSelectionToNone;
- (id)selectedFilterItemIndexPath;
- (id)selectedTitleIndexPath;
- (void)fetchFilterDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchFilterDataIfNeededWithCompletion:(CDUnknownBlockType)arg1;

@end

