//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UIView;
@protocol WCOutDialPadDelegate;

@interface WCOutDialPad
{
    unsigned long long m_mode;
    UIView *m_keyPadBtnsView;
    UIView *m_SKMBtnsView;
    UIButton *m_hideBtn;
    UIButton *m_bottomFunctionBtn;
    _Bool m_isMuteBtnSelected;
    _Bool m_isSpeakerBtnSelected;
    _Bool _hideKeyPad;
    _Bool _enableBottomFunctionBtn;
    id <WCOutDialPadDelegate> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableBottomFunctionBtn; // @synthesize enableBottomFunctionBtn=_enableBottomFunctionBtn;
@property(nonatomic) _Bool hideKeyPad; // @synthesize hideKeyPad=_hideKeyPad;
@property(readonly, nonatomic) _Bool isSpeakerBtnSelected; // @synthesize isSpeakerBtnSelected=m_isSpeakerBtnSelected;
@property(readonly, nonatomic) _Bool isMuteBtnSelected; // @synthesize isMuteBtnSelected=m_isMuteBtnSelected;
@property(nonatomic) __weak id <WCOutDialPadDelegate> delegate; // @synthesize delegate;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateDailViewMode;
- (void)didTagButton:(id)arg1;
- (void)layoutSubviews;
- (void)configSKMBtnsView;
- (void)configBottomFunctionBtnAndHideBtnWithMode:(unsigned long long)arg1;
- (void)configKeyPadBtnViewWithColorMode:(unsigned long long)arg1;
- (void)configCallingViewMode;
- (void)configDialViewMode;
- (id)initWithPadMode:(unsigned long long)arg1;

@end

