//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, NSArray, NSString, UIView;

@interface PersonalInformationAddressViewController
{
    _Bool _loadingData;
    NSArray *_arrAddress;
    UIView *_contentHeaderView;
    MMTableViewInfo *_tableViewInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool loadingData; // @synthesize loadingData=_loadingData;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(retain, nonatomic) UIView *contentHeaderView; // @synthesize contentHeaderView=_contentHeaderView;
@property(retain, nonatomic) NSArray *arrAddress; // @synthesize arrAddress=_arrAddress;
- (void)OnGetAllAddress:(id)arg1 UserName:(id)arg2 NickName:(id)arg3 Error:(id)arg4;
- (id)getAddressDetailString:(id)arg1;
- (void)makeNoContentCell:(id)arg1;
- (double)getCellHeightForAddress:(id)arg1;
- (void)makeCell:(id)arg1 cellInfo:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)reloadData;
- (void)initHeaderView;
- (void)initTableView;
- (void)initData;
- (void)initView;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

