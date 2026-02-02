//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet;

@interface WCFinderProfileOverviewFeedSectionCtrl
{
    NSMutableSet *_deleteFeedIds;
}

+ (id)feedInfosInDataItem:(id)arg1 layout:(id)arg2 atIndexPath:(id)arg3;
+ (void)setupRegister:(id)arg1;
+ (id)sectionDefines;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *deleteFeedIds; // @synthesize deleteFeedIds=_deleteFeedIds;
- (void)onFeedArrayChanged:(id)arg1;
- (_Bool)showJustWatchWithContentVM:(id)arg1;
- (struct CGRect)liveMorphDismissRectWithCustomKey:(id)arg1;
- (id)genSession3ReportDict;
- (id)genFeedReportDictWithIndexPath:(id)arg1 dataItem:(id)arg2;
- (void)onItemUnExpose:(id)arg1 exposeObj:(id *)arg2;
- (void)onItemExpose:(id)arg1 exposeObj:(id *)arg2;
- (void)willDisplayItemIdentifier:(id)arg1;
- (long long)displayMaxItemCount;
- (struct UIEdgeInsets)insetForSectionAtIndex:(long long)arg1 identifier:(id)arg2;
- (double)minimumInteritemSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (double)minimumLineSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (void)onSelectedCellForIdentifier:(id)arg1;
- (id)cellForItemIdentifier:(id)arg1 collectionView:(id)arg2;
- (struct CGSize)itemSizeForItem:(id)arg1 collectionView:(id)arg2;
- (struct SectionItems)itemsForSection:(id)arg1 index:(long long)arg2;
- (id)sections;
- (id)sectionTitle;
- (id)displayTids;
- (void)onSectionDataChanged:(id)arg1;

@end

