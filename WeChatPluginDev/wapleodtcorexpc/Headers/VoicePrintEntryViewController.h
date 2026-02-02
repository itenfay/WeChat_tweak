//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIButton, UIView, VoicePrintCreateLogic, VoicePrintHeaderView, VoicePrintVerifyLogic, WCSheetView;

@interface VoicePrintEntryViewController
{
    _Bool _voicePrintExists;
    _Bool _voicePrintSwitch;
    WCSheetView *_sheetView;
    VoicePrintHeaderView *_headerView;
    MMUILabel *_createLabel;
    UIButton *_createButton;
    UIView *_itemsView;
    VoicePrintCreateLogic *_createLogic;
    VoicePrintVerifyLogic *_verifyLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VoicePrintVerifyLogic *verifyLogic; // @synthesize verifyLogic=_verifyLogic;
@property(retain, nonatomic) VoicePrintCreateLogic *createLogic; // @synthesize createLogic=_createLogic;
@property(retain, nonatomic) UIView *itemsView; // @synthesize itemsView=_itemsView;
@property(retain, nonatomic) UIButton *createButton; // @synthesize createButton=_createButton;
@property(retain, nonatomic) MMUILabel *createLabel; // @synthesize createLabel=_createLabel;
@property(retain, nonatomic) VoicePrintHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) WCSheetView *sheetView; // @synthesize sheetView=_sheetView;
@property(nonatomic, getter=isVoicePrintSwitchOn) _Bool voicePrintSwitch; // @synthesize voicePrintSwitch=_voicePrintSwitch;
@property(nonatomic) _Bool voicePrintExists; // @synthesize voicePrintExists=_voicePrintExists;
- (void)onVoicePrintCreate;
- (void)onVoicePrintVerify;
- (void)onVoicePrintReset;
- (void)onVoicePrintSwitchChanged:(id)arg1;
- (void)updateVoicePrintFromStates:(unsigned int)arg1;
- (void)switchVoicePrint:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)changeForManage;
- (void)changeForCreate;
- (void)reloadView;
- (void)reloadItemsView;
- (void)initView;
- (void)onCreateWithResult:(unsigned int)arg1 needSwitchOn:(_Bool)arg2;
- (void)startVerifyLogicWithCompletion:(CDUnknownBlockType)arg1;
- (void)startCreateLogicWithCompletion:(CDUnknownBlockType)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

