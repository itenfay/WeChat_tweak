//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderLivePaymentSetting, MMCPLabel, MMFinderLivePaymentSettingView, MMUILabel, NSString, UIImageView, UISwitch;

@interface MMFInderLiveCreateNoticeSelectModeView : UIView
{
    _Bool _showFreePersion;
    _Bool _isVisible;
    _Bool _forbidLiveMemberMode;
    _Bool _isSupportMemberFeatures;
    _Bool _isPaidSelect;
    _Bool _modMode;
    unsigned int _curPriceInWecoin;
    CDUnknownBlockType _selectModeChangeBlock;
    CDUnknownBlockType _showFreePersionChangeBlock;
    CDUnknownBlockType _paidLiveChooseMoneyBlock;
    CDUnknownBlockType _paidModeCanSelectBlock;
    CDUnknownBlockType _supportMemberFeaturesChangeBlock;
    unsigned long long _selectMode;
    unsigned long long _defaultSelectMode;
    UIView *_contentView;
    UIView *_selectModeView;
    MMUILabel *_selectModeTitleLabel;
    MMUILabel *_selectModeLabel;
    UIView *_selectModeArrowView;
    UIView *_moneyView;
    UIView *_moneyLine;
    MMUILabel *_moneyLabel;
    UIImageView *_wecoinIconView;
    MMCPLabel *_wecoinIconLabel;
    UIImageView *_moneyArrowView;
    UIView *_freeView;
    UIView *_freeLine;
    MMUILabel *_freeLabel;
    MMUILabel *_freeDetailLabel;
    NSString *_digest;
    UIImageView *_freeArrowView;
    UIView *_memberFreeView;
    UIView *_memberFreeLine;
    MMUILabel *_memberFreeLabel;
    UISwitch *_memberFreeSwitch;
    UIView *_bottomLine;
    MMFinderLivePaymentSettingView *_paymentSettingPanel;
    FinderLivePaymentSetting *_paymentSetting;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool modMode; // @synthesize modMode=_modMode;
@property(nonatomic) _Bool isPaidSelect; // @synthesize isPaidSelect=_isPaidSelect;
@property(retain, nonatomic) FinderLivePaymentSetting *paymentSetting; // @synthesize paymentSetting=_paymentSetting;
@property(nonatomic) unsigned int curPriceInWecoin; // @synthesize curPriceInWecoin=_curPriceInWecoin;
@property(retain, nonatomic) MMFinderLivePaymentSettingView *paymentSettingPanel; // @synthesize paymentSettingPanel=_paymentSettingPanel;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UISwitch *memberFreeSwitch; // @synthesize memberFreeSwitch=_memberFreeSwitch;
@property(retain, nonatomic) MMUILabel *memberFreeLabel; // @synthesize memberFreeLabel=_memberFreeLabel;
@property(retain, nonatomic) UIView *memberFreeLine; // @synthesize memberFreeLine=_memberFreeLine;
@property(retain, nonatomic) UIView *memberFreeView; // @synthesize memberFreeView=_memberFreeView;
@property(retain, nonatomic) UIImageView *freeArrowView; // @synthesize freeArrowView=_freeArrowView;
@property(retain, nonatomic) NSString *digest; // @synthesize digest=_digest;
@property(retain, nonatomic) MMUILabel *freeDetailLabel; // @synthesize freeDetailLabel=_freeDetailLabel;
@property(retain, nonatomic) MMUILabel *freeLabel; // @synthesize freeLabel=_freeLabel;
@property(retain, nonatomic) UIView *freeLine; // @synthesize freeLine=_freeLine;
@property(retain, nonatomic) UIView *freeView; // @synthesize freeView=_freeView;
@property(retain, nonatomic) UIImageView *moneyArrowView; // @synthesize moneyArrowView=_moneyArrowView;
@property(retain, nonatomic) MMCPLabel *wecoinIconLabel; // @synthesize wecoinIconLabel=_wecoinIconLabel;
@property(retain, nonatomic) UIImageView *wecoinIconView; // @synthesize wecoinIconView=_wecoinIconView;
@property(retain, nonatomic) MMUILabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(retain, nonatomic) UIView *moneyLine; // @synthesize moneyLine=_moneyLine;
@property(retain, nonatomic) UIView *moneyView; // @synthesize moneyView=_moneyView;
@property(retain, nonatomic) UIView *selectModeArrowView; // @synthesize selectModeArrowView=_selectModeArrowView;
@property(retain, nonatomic) MMUILabel *selectModeLabel; // @synthesize selectModeLabel=_selectModeLabel;
@property(retain, nonatomic) MMUILabel *selectModeTitleLabel; // @synthesize selectModeTitleLabel=_selectModeTitleLabel;
@property(retain, nonatomic) UIView *selectModeView; // @synthesize selectModeView=_selectModeView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool isSupportMemberFeatures; // @synthesize isSupportMemberFeatures=_isSupportMemberFeatures;
@property(nonatomic) unsigned long long defaultSelectMode; // @synthesize defaultSelectMode=_defaultSelectMode;
@property(nonatomic) _Bool forbidLiveMemberMode; // @synthesize forbidLiveMemberMode=_forbidLiveMemberMode;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(nonatomic) _Bool showFreePersion; // @synthesize showFreePersion=_showFreePersion;
@property(nonatomic) unsigned long long selectMode; // @synthesize selectMode=_selectMode;
@property(copy, nonatomic) CDUnknownBlockType supportMemberFeaturesChangeBlock; // @synthesize supportMemberFeaturesChangeBlock=_supportMemberFeaturesChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType paidModeCanSelectBlock; // @synthesize paidModeCanSelectBlock=_paidModeCanSelectBlock;
@property(copy, nonatomic) CDUnknownBlockType paidLiveChooseMoneyBlock; // @synthesize paidLiveChooseMoneyBlock=_paidLiveChooseMoneyBlock;
@property(copy, nonatomic) CDUnknownBlockType showFreePersionChangeBlock; // @synthesize showFreePersionChangeBlock=_showFreePersionChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType selectModeChangeBlock; // @synthesize selectModeChangeBlock=_selectModeChangeBlock;
- (id)accessibilityLabel;
- (_Bool)isLiveThemeReminderSwitchOpen;
- (_Bool)isSuperfanEnabled;
- (_Bool)isMemberLiveEnabled;
- (void)changePaymentSetting:(id)arg1;
- (void)changeCurPriceInWecoin:(unsigned int)arg1;
- (void)updateViewWithModNotcie:(id)arg1;
- (void)handleUpdateCoin:(unsigned int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onMMFinderLivePaymentSettingViewChoosePriceInWecoin:(unsigned int)arg1;
- (void)showSelectModeActionSheet;
- (void)showPaymentSettingPanelAndLegalIntro;
- (id)lowerCellDigestWithContactUsernames:(id)arg1 chatroomUsernames:(id)arg2;
- (double)heightForSessionSelectControllerChildPageSheet:(id)arg1 defaultHeight:(double)arg2;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (void)selectContactsFromRecentSessions;
- (void)handleFreeViewGestureRecognizer:(id)arg1;
- (void)handleMoneyViewGestureRecognizer:(id)arg1;
- (void)handleSelectModeViewGestureRecognizer:(id)arg1;
- (double)getCurrentViewHeight;
- (void)createUI;
- (void)onMMFinderLivePaymentPolicyIntroViewCancelButtonClicked;
- (void)onMMFinderLivePaymentPolicyIntroViewConfirmButtonClicked:(id)arg1;
- (void)switchDidChanged:(id)arg1;
- (_Bool)supportLiveMemberFreeInPaidMode;
- (_Bool)supportLiveMemberModeToSelect;
- (_Bool)supportPaidModeToSelect;
@property(readonly, nonatomic) _Bool supportSelectMode;
- (_Bool)isNoticeSelectModeValid:(unsigned long long)arg1;
- (_Bool)updateShowFreePersion:(_Bool)arg1;
- (void)updateSelectMode:(unsigned long long)arg1;
- (void)paidModeSelected;
- (void)changeSelectMode:(unsigned long long)arg1;
- (void)updateSelectModeLabelOrigin;
- (void)updateSelectModeLabelText;
- (void)chooseShowView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateSupportMemberFeatures:(_Bool)arg1;
- (id)getCurrentLivePaymentSetting;
- (id)initWithDefaultSelectMode:(unsigned long long)arg1 modMode:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

