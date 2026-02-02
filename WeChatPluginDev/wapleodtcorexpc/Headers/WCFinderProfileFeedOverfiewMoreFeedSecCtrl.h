//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderFeedArray, WCFinderProfileOverviewFeedSectionCtrl, WCFinderProfileTagFeedViewModel;
@protocol WCFinderProfilePullableFeedViewModel;

@interface WCFinderProfileFeedOverfiewMoreFeedSecCtrl
{
    WCFinderProfileOverviewFeedSectionCtrl *_feedSecCtrl;
    WCFinderFeedArray *_displayFeedArray;
    WCFinderProfileTagFeedViewModel<WCFinderProfilePullableFeedViewModel> *_feedModel;
}

+ (void)setupRegister:(id)arg1;
+ (id)sectionDefines;
- (void).cxx_destruct;
@property(nonatomic) __weak WCFinderProfileTagFeedViewModel<WCFinderProfilePullableFeedViewModel> *feedModel; // @synthesize feedModel=_feedModel;
@property(retain, nonatomic) WCFinderFeedArray *displayFeedArray; // @synthesize displayFeedArray=_displayFeedArray;
@property(nonatomic) __weak WCFinderProfileOverviewFeedSectionCtrl *feedSecCtrl; // @synthesize feedSecCtrl=_feedSecCtrl;
- (id)genSession3ReportDict;
- (id)genFeedReportDictWithIndexPath:(id)arg1 dataItem:(id)arg2;
- (void)onItemUnExpose:(id)arg1 exposeObj:(id *)arg2;
- (void)onItemExpose:(id)arg1 exposeObj:(id *)arg2;
- (void)onFeedArrayChange;
- (void)willDisplayItemIdentifier:(id)arg1;
- (_Bool)showJustWatchWithContentVM:(id)arg1;
- (struct UIEdgeInsets)insetForSectionAtIndex:(long long)arg1 identifier:(id)arg2;
- (double)minimumInteritemSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (double)minimumLineSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (void)onSelectedCellForIdentifier:(id)arg1;
- (id)cellForItemIdentifier:(id)arg1 collectionView:(id)arg2;
- (struct CGSize)itemSizeForItem:(id)arg1 collectionView:(id)arg2;
- (struct SectionItems)itemsForSection:(id)arg1 index:(long long)arg2;
- (id)sections;
- (id)sectionTitle;
- (void)onSectionDataChanged:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

