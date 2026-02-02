//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface FavSubLocationSearchViewController
{
    NSMutableArray *_arrCityDatas;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrCityDatas; // @synthesize arrCityDatas=_arrCityDatas;
- (_Bool)isOnSearch;
- (void)canNotSelecteDueToExceedCount;
- (void)onSelectedDataWrap:(id)arg1;
- (void)onClickDetailBtnWith:(id)arg1;
- (void)onClickTagButtonWithTagName:(id)arg1;
- (void)furtherSearchFilter:(id)arg1 withSearchText:(id)arg2 withSearchType:(unsigned long long)arg3 withTagList:(id)arg4;
- (void)onSelectRowAtIndexPath:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initData;
- (void)updateAddBtn;
- (void)onDone;
- (void)configRightNavBtn;
- (id)initWithCellStyle:(unsigned long long)arg1 selectedDic:(id)arg2 maxSelectedCount:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

