//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderProfileOverviewTemplateSectionCtrl
{
}

+ (void)setupRegister:(id)arg1;
+ (id)sectionDefines;
- (long long)displayMaxCount;
- (double)minimumInteritemSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (void)onSelectedCellForIdentifier:(id)arg1;
- (id)cellForItemIdentifier:(id)arg1 collectionView:(id)arg2;
- (struct CGSize)itemSizeForItem:(id)arg1 collectionView:(id)arg2;
- (struct SectionItems)itemsForSection:(id)arg1 index:(long long)arg2;
- (id)sections;
- (long long)moreBtnType;
- (id)sectionTitle;
- (id)templates;

@end

