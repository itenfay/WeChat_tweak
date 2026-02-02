//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, RichTextView, UIButton, UIImageView, UIView;
@protocol WCPayOfflinePayCreateOffinePayTipsViewDelegate;

@interface WCPayOfflinePayCreateOfflinePayTipsView
{
    id <WCPayOfflinePayCreateOffinePayTipsViewDelegate> _delegate;
    UIImageView *_iconImgView;
    MMUILabel *_tipsLabel;
    UIButton *_confirmBtn;
    UIImageView *_m_iconForSafeTips;
    MMUILabel *_m_LabelForSafeTips;
    UIImageView *_m_arrowForSafeTips;
    UIButton *_safeTipsCoverBtn;
    UIView *_protocolView;
    UIImageView *_protocolImgView;
    RichTextView *_protocolTextView;
    UIButton *_protocolCoverBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *protocolCoverBtn; // @synthesize protocolCoverBtn=_protocolCoverBtn;
@property(retain, nonatomic) RichTextView *protocolTextView; // @synthesize protocolTextView=_protocolTextView;
@property(retain, nonatomic) UIImageView *protocolImgView; // @synthesize protocolImgView=_protocolImgView;
@property(retain, nonatomic) UIView *protocolView; // @synthesize protocolView=_protocolView;
@property(retain, nonatomic) UIButton *safeTipsCoverBtn; // @synthesize safeTipsCoverBtn=_safeTipsCoverBtn;
@property(retain, nonatomic) UIImageView *m_arrowForSafeTips; // @synthesize m_arrowForSafeTips=_m_arrowForSafeTips;
@property(retain, nonatomic) MMUILabel *m_LabelForSafeTips; // @synthesize m_LabelForSafeTips=_m_LabelForSafeTips;
@property(retain, nonatomic) UIImageView *m_iconForSafeTips; // @synthesize m_iconForSafeTips=_m_iconForSafeTips;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(nonatomic) __weak id <WCPayOfflinePayCreateOffinePayTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)protocolBtnClick;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)shakeProtocolView;
- (void)clickSafeTips;
- (void)confirmBtnPress:(id)arg1;
- (void)updateProtocolView;
- (void)adjustBottomTips;
- (void)updateArrowForSafeTips;
- (void)updateLabelForSafeTips;
- (void)updateIconForSafeTips;
- (void)updateCoverButtonForSafeTips;
- (void)setupContentView:(id)arg1 btnWording:(id)arg2;
- (id)initReCreateOfflinePayTipsViewWithFrame:(struct CGRect)arg1 delegate:(id)arg2 tipsWording:(id)arg3 btnWording:(id)arg4;
- (id)initCreateOfflinePayTipsViewWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (double)layoutForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

