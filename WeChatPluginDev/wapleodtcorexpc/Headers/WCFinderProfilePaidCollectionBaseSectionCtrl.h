//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderProfilePaidCollectionBaseSectionCtrl
{
}

+ (void)setupRegister:(id)arg1;
+ (long long)defaultDisplayRowCount;
- (void)onItemExpose:(id)arg1 exposeObj:(id *)arg2;
- (void)onSelectedCellForIdentifier:(id)arg1;
- (struct UIEdgeInsets)edgeInsetForSeperator:(id)arg1 position:(long long)arg2;
- (long long)seperatorStyleForSection:(id)arg1;
- (id)cellForItemIdentifier:(id)arg1 collectionView:(id)arg2;
- (struct CGSize)itemSizeForItem:(id)arg1 collectionView:(id)arg2;
- (struct SectionItems)itemsForSection:(id)arg1 index:(long long)arg2;
- (long long)displayRowCount;
- (long long)moreBtnType;

@end

