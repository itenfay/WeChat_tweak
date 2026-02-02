//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderProfileOverviewMusicSectionCtrl
{
}

+ (void)setupRegister:(id)arg1;
+ (id)sectionDefines;
- (void)openPlaylist;
- (void)onClickHeaderRightBtn:(id)arg1;
- (_Bool)onlyMusicSection;
- (_Bool)showBottomJumpTabButton;
- (_Bool)showMediaCount;
- (long long)columnCountForLayoutType:(int)arg1;
- (struct UIEdgeInsets)edgeInsetForSeperator:(id)arg1 position:(long long)arg2;
- (long long)seperatorStyleForSection:(id)arg1;
- (double)minimumLineSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (void)onSelectedCellForIdentifier:(id)arg1;
- (struct UIEdgeInsets)insetForSectionAtIndex:(long long)arg1 identifier:(id)arg2;
- (struct CGSize)itemSizeForItem:(id)arg1 collectionView:(id)arg2;
- (id)cellForItemIdentifier:(id)arg1 collectionView:(id)arg2;
- (int)layoutTypeForSection:(id)arg1;
- (id)layoutForSectionIdentifier:(id)arg1;
- (struct SectionItems)itemsForSection:(id)arg1 index:(long long)arg2;
- (id)sections;
- (long long)moreBtnType;
- (id)sectionTitle;
- (id)data;

@end

