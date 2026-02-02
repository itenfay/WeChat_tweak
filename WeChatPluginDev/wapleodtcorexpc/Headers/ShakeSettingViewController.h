//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPageSheetBaseView, MMTableViewInfo, NSString;
@protocol ShakeSettingViewControllerDelegate><ShakeListDelegate;

@interface ShakeSettingViewController
{
    id <ShakeSettingViewControllerDelegate><ShakeListDelegate> m_delegate;
    MMTableViewInfo *_tableViewInfo;
    MMPageSheetBaseView *_pageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMPageSheetBaseView *pageView; // @synthesize pageView=_pageView;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
- (long long)styleForPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)onSouncStatusSwitchChanged:(id)arg1;
- (void)OnOpenShakeMsgCenter;
- (void)OnOpenShakeHistoryList;
- (void)OnOpenSayHelloFromSayHelloButton;
- (void)useDefaultHideImage;
- (void)nextActionSheet;
- (void)showImagePicker;
- (_Bool)hasCustomImage;
- (void)OnChangeBackgroundPic;
- (void)reloadTableData;
- (void)initTableView;
- (void)initView;
- (void)viewDidLoad;
- (void)setM_Delegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

