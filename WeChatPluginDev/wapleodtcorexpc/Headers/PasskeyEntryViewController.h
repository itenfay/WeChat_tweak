//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, PasskeyCreateLogic, PasskeyEntryHeaderView, UIButton, UIView, WCButtonListView, WCSheetView;

@interface PasskeyEntryViewController
{
    _Bool _isUnsupportedIOSVersion;
    WCSheetView *_sheetView;
    PasskeyEntryHeaderView *_headerView;
    MMUILabel *_createLabel;
    UIButton *_createButton;
    UIView *_itemsView;
    PasskeyCreateLogic *_createLogic;
    WCButtonListView *_bottomButtonList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isUnsupportedIOSVersion; // @synthesize isUnsupportedIOSVersion=_isUnsupportedIOSVersion;
@property(retain, nonatomic) WCButtonListView *bottomButtonList; // @synthesize bottomButtonList=_bottomButtonList;
@property(retain, nonatomic) PasskeyCreateLogic *createLogic; // @synthesize createLogic=_createLogic;
@property(retain, nonatomic) UIView *itemsView; // @synthesize itemsView=_itemsView;
@property(retain, nonatomic) UIButton *createButton; // @synthesize createButton=_createButton;
@property(retain, nonatomic) MMUILabel *createLabel; // @synthesize createLabel=_createLabel;
@property(retain, nonatomic) PasskeyEntryHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) WCSheetView *sheetView; // @synthesize sheetView=_sheetView;
- (void)onPasskeySettingsChanged;
- (void)showAgreementWebviewWithUrl:(id)arg1;
- (void)onDelete;
- (void)onPasskeyDelete;
- (void)onPasskeySwitchChanged:(id)arg1;
- (void)onPasskeyCreateOrReset;
- (void)reloadButtonBottomList;
- (void)reloadItemsView;
- (void)useDefaultHeaderView;
- (void)reloadViewForManage;
- (void)reloadViewForUnsupported;
- (void)reloadViewForCreate;
- (void)reloadView;
- (void)updateSheetViewFrame;
- (void)initView;
- (id)navigationBarBackgroundColor;
- (_Bool)passkeySwitch;
- (_Bool)passkeyExists;
- (void)initData;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

