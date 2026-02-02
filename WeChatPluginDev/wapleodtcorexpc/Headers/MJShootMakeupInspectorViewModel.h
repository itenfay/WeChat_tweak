//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJShootVisageInspectorItem, NSArray, NSIndexPath;

@interface MJShootMakeupInspectorViewModel
{
    NSArray *_makeupItems;
    MJShootVisageInspectorItem *_selectedMakeupItem;
    NSIndexPath *_selectedIndexPath;
}

+ (id)defaultMakeupItems;
- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) MJShootVisageInspectorItem *selectedMakeupItem; // @synthesize selectedMakeupItem=_selectedMakeupItem;
@property(retain, nonatomic) NSArray *makeupItems; // @synthesize makeupItems=_makeupItems;
- (void)resetSelectionToNone;
- (void)updateMakeupWithItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleSelectItemAtIndexPath:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (void)restoreMakeupInnerWithCompletion:(CDUnknownBlockType)arg1;
- (void)refetchAndRestoreMakeupWithCompletion:(CDUnknownBlockType)arg1;
- (void)restoreMakeupWithCompletion:(CDUnknownBlockType)arg1;
- (void)refetchMakeupDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchMakeupDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchMakeupDataIfNeededWithCompletion:(CDUnknownBlockType)arg1;

@end

