//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCFinderProfileMemberShipVideoSectionCtrl
{
    NSMutableDictionary *_cellHeightMap;
}

+ (void)setupRegister:(id)arg1;
+ (id)sectionDefines;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cellHeightMap; // @synthesize cellHeightMap=_cellHeightMap;
- (void)onMemberShipSecDataExtChange;
- (void)onFeedArrayChanged;
- (void)reportItemClick:(id)arg1;
- (void)onItemUnExpose:(id)arg1 exposeObj:(id *)arg2;
- (void)onItemExpose:(id)arg1 exposeObj:(id *)arg2;
- (void)onClickAll:(id)arg1;
- (void)onClickHeaderRightBtn:(id)arg1;
- (void)onSelectedCellForIdentifier:(id)arg1;
- (void)onPageSizeChanged;
- (double)cellDescHeightForContentVM:(id)arg1 width:(double)arg2;
- (struct CGSize)cellHeightForItem:(long long)arg1 collectionView:(id)arg2;
- (id)videoCell:(id)arg1 identifier:(id)arg2;
- (id)memberShipCell:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)displayMaxRow;
- (double)minimumInteritemSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (struct CGSize)itemSizeForItem:(id)arg1 collectionView:(id)arg2;
- (id)cellForItemIdentifier:(id)arg1 collectionView:(id)arg2;
- (struct SectionItems)itemsForSection:(id)arg1 index:(long long)arg2;
- (id)sections;
- (long long)moreBtnType;
- (id)sectionTitle;
- (void)setContactViewModel:(id)arg1;
- (void)onSectionDataChanged:(id)arg1;
- (id)data;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

