//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFInderProfileOverviewPlaybackSectionCtrl
{
}

+ (id)feedInfosInDataItem:(id)arg1 layout:(id)arg2 atIndexPath:(id)arg3;
+ (void)setupRegister:(id)arg1;
+ (id)sectionDefines;
- (id)zoomAnimatorTransitionSnapView:(id)arg1 cornerRaidus:(double *)arg2;
- (void)reportFeedStreamClickSelectedIndexPath:(id)arg1;
- (void)onItemUnExpose:(id)arg1 exposeObj:(id *)arg2;
- (void)onItemExpose:(id)arg1 exposeObj:(id *)arg2;
- (struct UIEdgeInsets)insetForSectionAtIndex:(long long)arg1 identifier:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)willDisplayItemIdentifier:(id)arg1;
- (void)onSelectedCellForIdentifier:(id)arg1;
- (double)minimumLineSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (double)minimumInteritemSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (struct CGSize)itemSizeForItem:(id)arg1 collectionView:(id)arg2;
- (id)cellForItemIdentifier:(id)arg1 collectionView:(id)arg2;
- (long long)displayRowCount;
- (struct SectionItems)itemsForSection:(id)arg1 index:(long long)arg2;
- (id)sections;
- (long long)moreBtnType;
- (id)sectionTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

