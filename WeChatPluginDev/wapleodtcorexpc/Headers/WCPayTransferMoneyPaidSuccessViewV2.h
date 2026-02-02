//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class InternalFavorDescView, NSString, UIButton, UIImageView, UILabel, UIScrollView, WCPayControlData, WCPayLineSeparatorView, WCPayLotteryView, WCPayWebImageView;
@protocol WCPayTransferMoneyPaidSuccessViewV2Delegate;

@interface WCPayTransferMoneyPaidSuccessViewV2 : UIView
{
    _Bool _m_expendFavor;
    _Bool _m_expendAddress;
    id <WCPayTransferMoneyPaidSuccessViewV2Delegate> _m_delegate;
    WCPayControlData *_m_data;
    UIImageView *_m_WeChatPayIcon;
    UILabel *_m_successLabel;
    UILabel *_m_tipsLabel;
    UILabel *_m_feeLabel;
    UILabel *_m_moneyLabel;
    UIView *_m_firstLineView;
    UIView *_m_lineView;
    UILabel *_m_receiverLabel;
    UILabel *_m_receiverValueLabel;
    UIView *_m_receiverHeadImageView;
    UILabel *_m_receiveDescLabel;
    UILabel *_m_receiveDescValueLabel;
    UILabel *_m_senderLabel;
    UILabel *_m_senderValueLabel;
    UILabel *_m_chargeFeeLabel;
    UILabel *_m_chargeFeeValueLabel;
    InternalFavorDescView *_m_favorDescView;
    UIButton *_m_doneButton;
    UILabel *_m_realMoneyLabel;
    UILabel *_m_realMoneyValueLabel;
    WCPayLotteryView *_m_lotteryView;
    double _m_lastElemBottomY;
    WCPayWebImageView *_backgroundImageView;
    double _m_doneButtonMarginUp;
    UIScrollView *_m_scrollView;
    UILabel *_m_originPriceLabel;
    UILabel *_m_originPriceValueLabel;
    WCPayLineSeparatorView *_m_addressRemarkView;
    UILabel *_noticeTitle;
    UILabel *_noticeDesc;
}

- (void).cxx_destruct;
@property(retain) UILabel *noticeDesc; // @synthesize noticeDesc=_noticeDesc;
@property(retain) UILabel *noticeTitle; // @synthesize noticeTitle=_noticeTitle;
@property(nonatomic) _Bool m_expendAddress; // @synthesize m_expendAddress=_m_expendAddress;
@property(retain, nonatomic) WCPayLineSeparatorView *m_addressRemarkView; // @synthesize m_addressRemarkView=_m_addressRemarkView;
@property(nonatomic) _Bool m_expendFavor; // @synthesize m_expendFavor=_m_expendFavor;
@property(retain, nonatomic) UILabel *m_originPriceValueLabel; // @synthesize m_originPriceValueLabel=_m_originPriceValueLabel;
@property(retain, nonatomic) UILabel *m_originPriceLabel; // @synthesize m_originPriceLabel=_m_originPriceLabel;
@property(retain, nonatomic) UIScrollView *m_scrollView; // @synthesize m_scrollView=_m_scrollView;
@property(nonatomic) double m_doneButtonMarginUp; // @synthesize m_doneButtonMarginUp=_m_doneButtonMarginUp;
@property(retain, nonatomic) WCPayWebImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) double m_lastElemBottomY; // @synthesize m_lastElemBottomY=_m_lastElemBottomY;
@property(retain, nonatomic) WCPayLotteryView *m_lotteryView; // @synthesize m_lotteryView=_m_lotteryView;
@property(retain, nonatomic) UILabel *m_realMoneyValueLabel; // @synthesize m_realMoneyValueLabel=_m_realMoneyValueLabel;
@property(retain, nonatomic) UILabel *m_realMoneyLabel; // @synthesize m_realMoneyLabel=_m_realMoneyLabel;
@property(retain, nonatomic) UIButton *m_doneButton; // @synthesize m_doneButton=_m_doneButton;
@property(retain, nonatomic) InternalFavorDescView *m_favorDescView; // @synthesize m_favorDescView=_m_favorDescView;
@property(retain, nonatomic) UILabel *m_chargeFeeValueLabel; // @synthesize m_chargeFeeValueLabel=_m_chargeFeeValueLabel;
@property(retain, nonatomic) UILabel *m_chargeFeeLabel; // @synthesize m_chargeFeeLabel=_m_chargeFeeLabel;
@property(retain, nonatomic) UILabel *m_senderValueLabel; // @synthesize m_senderValueLabel=_m_senderValueLabel;
@property(retain, nonatomic) UILabel *m_senderLabel; // @synthesize m_senderLabel=_m_senderLabel;
@property(retain, nonatomic) UILabel *m_receiveDescValueLabel; // @synthesize m_receiveDescValueLabel=_m_receiveDescValueLabel;
@property(retain, nonatomic) UILabel *m_receiveDescLabel; // @synthesize m_receiveDescLabel=_m_receiveDescLabel;
@property(retain, nonatomic) UIView *m_receiverHeadImageView; // @synthesize m_receiverHeadImageView=_m_receiverHeadImageView;
@property(retain, nonatomic) UILabel *m_receiverValueLabel; // @synthesize m_receiverValueLabel=_m_receiverValueLabel;
@property(retain, nonatomic) UILabel *m_receiverLabel; // @synthesize m_receiverLabel=_m_receiverLabel;
@property(retain, nonatomic) UIView *m_lineView; // @synthesize m_lineView=_m_lineView;
@property(retain, nonatomic) UIView *m_firstLineView; // @synthesize m_firstLineView=_m_firstLineView;
@property(retain, nonatomic) UILabel *m_moneyLabel; // @synthesize m_moneyLabel=_m_moneyLabel;
@property(retain, nonatomic) UILabel *m_feeLabel; // @synthesize m_feeLabel=_m_feeLabel;
@property(retain, nonatomic) UILabel *m_tipsLabel; // @synthesize m_tipsLabel=_m_tipsLabel;
@property(retain, nonatomic) UILabel *m_successLabel; // @synthesize m_successLabel=_m_successLabel;
@property(retain, nonatomic) UIImageView *m_WeChatPayIcon; // @synthesize m_WeChatPayIcon=_m_WeChatPayIcon;
@property(retain, nonatomic) WCPayControlData *m_data; // @synthesize m_data=_m_data;
@property(nonatomic) __weak id <WCPayTransferMoneyPaidSuccessViewV2Delegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onWCPayAddressRemarkViewCopy;
- (void)onWCPayAddressRemarkViewExpend;
- (void)onInternalFavorDescViewClick;
- (double)tipsLabelMarginUp;
- (void)onDoneButtonClick;
- (void)updateDoneButton;
- (void)updateFavorView;
- (void)updateChargeFeeValueLabel;
- (void)updateChargeFeeLabel;
- (void)updateSenderValueLabel;
- (void)updateSenderLabel;
- (void)updateReceiverDescValueLabel;
- (void)updateReceiveDescLabel;
- (void)adjustHeadImgAndReceiverValueVertical;
- (void)updateRealMoneyValueLabel;
- (void)updateRealMoneyLabel;
- (void)updateHeadImageView;
- (void)updateReceiverValueLabel;
- (id)receiverValue;
- (void)updateReceicerLabel;
- (void)updateLineView;
- (void)updateFirstLineView;
- (void)updateMoneyLabel;
- (id)moneyString;
- (void)updateTipsLabel;
- (void)updateSuccessLabel;
- (void)updateWeChatPayIcon;
- (void)updateExposureArea;
- (void)lotteryViewDidClickButton:(id)arg1;
- (void)lotteryViewDidFinishScratchOrShake:(id)arg1;
- (void)lotteryViewDidScratchOrShake:(id)arg1 drawType:(unsigned int)arg2;
- (void)layoutForNoLineView;
- (void)updateAddressRemarkView;
- (void)updateNotice;
- (void)updateLayout;
- (void)refreshViewWithData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 withData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

