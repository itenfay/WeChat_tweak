//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, NSString, NoticeItem, TimeoutNumber, UIButton, UIImageView, WCPayControlData, WCPayNoticeItemView;
@protocol WCPayWalletEntryHeaderViewDelegate;

@interface WCPayWalletEntryHeaderView : UIView
{
    _Bool _showBalanceValue;
    _Bool _hideBalanceValue;
    id <WCPayWalletEntryHeaderViewDelegate> _delegate;
    WCPayControlData *_data;
    NoticeItem *_bannerData;
    unsigned long long _walletEntranceBalanceSwitchState;
    unsigned long long _wallet_balance;
    WCPayNoticeItemView *_bannerView;
    UIView *_brandbkgView;
    UIView *_offlinePayEntryView;
    UIImageView *_offlinePayIconImgView;
    MMUILabel *_offlinePayNameLabel;
    UIButton *_offlinePayHintBtn;
    UIView *_balanceEntryView;
    UIImageView *_balanceIconImgView;
    MMUILabel *_balanceNameLabel;
    UIButton *_balanceHintBtn;
    TimeoutNumber *_timeoutNumber;
    MMUILabel *_balanceMoneyLabel;
    UIImageView *_reddotForOfflinePay;
    UIImageView *_reddotForBalance;
}

+ (double)getHeaderContentHeight;
+ (double)getHeaderViewHeightWithBannerData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *reddotForBalance; // @synthesize reddotForBalance=_reddotForBalance;
@property(retain, nonatomic) UIImageView *reddotForOfflinePay; // @synthesize reddotForOfflinePay=_reddotForOfflinePay;
@property(retain, nonatomic) MMUILabel *balanceMoneyLabel; // @synthesize balanceMoneyLabel=_balanceMoneyLabel;
@property(retain, nonatomic) TimeoutNumber *timeoutNumber; // @synthesize timeoutNumber=_timeoutNumber;
@property(retain, nonatomic) UIButton *balanceHintBtn; // @synthesize balanceHintBtn=_balanceHintBtn;
@property(retain, nonatomic) MMUILabel *balanceNameLabel; // @synthesize balanceNameLabel=_balanceNameLabel;
@property(retain, nonatomic) UIImageView *balanceIconImgView; // @synthesize balanceIconImgView=_balanceIconImgView;
@property(retain, nonatomic) UIView *balanceEntryView; // @synthesize balanceEntryView=_balanceEntryView;
@property(retain, nonatomic) UIButton *offlinePayHintBtn; // @synthesize offlinePayHintBtn=_offlinePayHintBtn;
@property(retain, nonatomic) MMUILabel *offlinePayNameLabel; // @synthesize offlinePayNameLabel=_offlinePayNameLabel;
@property(retain, nonatomic) UIImageView *offlinePayIconImgView; // @synthesize offlinePayIconImgView=_offlinePayIconImgView;
@property(retain, nonatomic) UIView *offlinePayEntryView; // @synthesize offlinePayEntryView=_offlinePayEntryView;
@property(retain, nonatomic) UIView *brandbkgView; // @synthesize brandbkgView=_brandbkgView;
@property(retain, nonatomic) WCPayNoticeItemView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) unsigned long long wallet_balance; // @synthesize wallet_balance=_wallet_balance;
@property(nonatomic) unsigned long long walletEntranceBalanceSwitchState; // @synthesize walletEntranceBalanceSwitchState=_walletEntranceBalanceSwitchState;
@property(nonatomic) _Bool hideBalanceValue; // @synthesize hideBalanceValue=_hideBalanceValue;
@property(nonatomic) _Bool showBalanceValue; // @synthesize showBalanceValue=_showBalanceValue;
@property(retain, nonatomic) NoticeItem *bannerData; // @synthesize bannerData=_bannerData;
@property(retain, nonatomic) WCPayControlData *data; // @synthesize data=_data;
@property(nonatomic) __weak id <WCPayWalletEntryHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)balanceEntryBtnClick;
- (void)offlinePayEntryBtnClick;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (double)headerEntryItemHeight;
- (double)caculateHeaderEntryItemWidth;
- (void)handleUpdateWalletBalance;
- (void)setupBalanceMoneyLabel;
- (void)setupTimeoutNumber;
- (void)updateBalanceEntryView;
- (void)updateOfflinePayEntryView;
- (void)updateBrandBkgView:(double)arg1;
- (void)updateBannerView;
- (void)refreshView;
- (void)updateBalanceAndRefreshView;
- (void)startTimeoutNumberTimeout;
- (void)setupTimeoutNumberNoAnimationDelay;
- (void)refreshBannerData:(id)arg1;
- (id)getControlData;
- (void)refreshControlData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

