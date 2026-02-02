//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, TakeOrSelectHeadImageLogic, UIButton, WCAccountTextFieldItem, WCAgreementCheckBox;
@protocol WCAccountAffiliatedAcctDelegate;

@interface WCAccountAffiliatedAcctRegViewController
{
    id <WCAccountAffiliatedAcctDelegate> _delegate;
    MMUILabel *_titleView;
    UIButton *_headImgBtn;
    TakeOrSelectHeadImageLogic *_photoLogic;
    WCAccountTextFieldItem *_textFieldNameItem;
    WCAgreementCheckBox *_checkBox;
    UIButton *_nextBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) WCAgreementCheckBox *checkBox; // @synthesize checkBox=_checkBox;
@property(retain, nonatomic) WCAccountTextFieldItem *textFieldNameItem; // @synthesize textFieldNameItem=_textFieldNameItem;
@property(retain, nonatomic) TakeOrSelectHeadImageLogic *photoLogic; // @synthesize photoLogic=_photoLogic;
@property(retain, nonatomic) UIButton *headImgBtn; // @synthesize headImgBtn=_headImgBtn;
@property(retain, nonatomic) MMUILabel *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak id <WCAccountAffiliatedAcctDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onGetHeadImage:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)onNext;
- (void)showHeadImageOption;
- (void)checkNextBtnEnable;
- (void)initView;
- (void)viewDidBePoped:(_Bool)arg1;
- (_Bool)autoHandleKeyboardEvent;
- (_Bool)useSheetView;
- (_Bool)useRedesignStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

