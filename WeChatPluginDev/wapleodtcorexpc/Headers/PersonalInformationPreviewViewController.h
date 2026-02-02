//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, GetSafetyInfoLogic, MMTableViewInfo, NSArray, NSString, NSURL, UIView;

@interface PersonalInformationPreviewViewController
{
    UIView *_contentHeaderView;
    UIView *_contentFooterView;
    MMTableViewInfo *_tableViewInfo;
    CContact *_contact;
    NSURL *_exportUrl;
    NSArray *_arrAddress;
    GetSafetyInfoLogic *_getSafetyInfoLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GetSafetyInfoLogic *getSafetyInfoLogic; // @synthesize getSafetyInfoLogic=_getSafetyInfoLogic;
@property(retain, nonatomic) NSArray *arrAddress; // @synthesize arrAddress=_arrAddress;
@property(retain, nonatomic) NSURL *exportUrl; // @synthesize exportUrl=_exportUrl;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(retain, nonatomic) UIView *contentFooterView; // @synthesize contentFooterView=_contentFooterView;
@property(retain, nonatomic) UIView *contentHeaderView; // @synthesize contentHeaderView=_contentHeaderView;
- (void)OnGetAllAddress:(id)arg1 UserName:(id)arg2 NickName:(id)arg3 Error:(id)arg4;
- (_Bool)isSetNormalToBlackStyle;
- (id)customCellRightViewWithText:(id)arg1 cellTitle:(id)arg2;
- (id)customCellInfoForTitle:(id)arg1 rightValue:(id)arg2;
- (id)getVersion;
- (id)getEmail;
- (id)getQQ;
- (id)getMobile;
- (id)getSignature;
- (id)getAddressString;
- (id)getSexString;
- (void)onExportInformation;
- (void)onShowSafeDevice;
- (void)onShowMyAddress;
- (void)viewDidLayoutSubviews;
- (void)reloadData;
- (void)initFooterView;
- (void)initHeaderView;
- (void)initTableView;
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

