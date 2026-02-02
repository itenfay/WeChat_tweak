//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface WCFinderProfileOverviewNewLifeSectionCtrl
{
    NSArray *_dataList;
}

+ (void)setupRegister:(id)arg1;
+ (id)sectionDefines;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)onNewLifePostSessionUpLoadSuccessful:(id)arg1;
- (void)onSelectedCellForIdentifier:(id)arg1;
- (double)minimumInteritemSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (double)minimumLineSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (struct CGSize)itemSizeForItem:(id)arg1 collectionView:(id)arg2;
- (id)cellForItemIdentifier:(id)arg1 collectionView:(id)arg2;
- (struct SectionItems)itemsForSection:(id)arg1 index:(long long)arg2;
- (long long)displayMaxCount;
- (id)sections;
- (long long)moreBtnType;
- (id)sectionTitle;
- (void)onSectionDataChanged:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

