//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCPLabel, MMLiveRewardGiftCoinButton, MMUIButton, NSString, UIImageView, UILabel, UIView;

@interface MMFinderLiveGenericPayConfirmSheetView
{
    _Bool _hasClickActionButton;
    _Bool _isFromFeed;
    CDUnknownBlockType _cancelClickBlock;
    CDUnknownBlockType _actionClickBlock;
    double _contentHeight;
    UIView *_contentView;
    MMUIButton *_closeButton;
    MMLiveRewardGiftCoinButton *_coinButton;
    UILabel *_tipLabel;
    UIImageView *_wecoinIconView;
    MMCPLabel *_wecoinIconLabel;
    UILabel *_moneyLabel;
    MMUIButton *_actionButton;
    long long _price;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFromFeed; // @synthesize isFromFeed=_isFromFeed;
@property(nonatomic) long long price; // @synthesize price=_price;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(retain, nonatomic) MMCPLabel *wecoinIconLabel; // @synthesize wecoinIconLabel=_wecoinIconLabel;
@property(retain, nonatomic) UIImageView *wecoinIconView; // @synthesize wecoinIconView=_wecoinIconView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) MMLiveRewardGiftCoinButton *coinButton; // @synthesize coinButton=_coinButton;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(copy, nonatomic) CDUnknownBlockType actionClickBlock; // @synthesize actionClickBlock=_actionClickBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelClickBlock; // @synthesize cancelClickBlock=_cancelClickBlock;
@property(nonatomic) _Bool hasClickActionButton; // @synthesize hasClickActionButton=_hasClickActionButton;
- (void)customInitMoneyLabel:(id)arg1;
- (void)customInitTipLabel:(id)arg1;
- (void)customInitActionButton:(id)arg1;
- (void)onClickActionButton;
- (void)pageSheetWillDisappear;
- (void)buyCoinCancel:(id)arg1;
- (void)buyCoinFail:(id)arg1;
- (void)buyCoinSuccess:(id)arg1;
- (void)needBuyCoin;
- (void)onBuyCoin;
- (void)rightButtonAction;
- (void)leftButtonAction;
- (double)contentViewHeight;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)fetchWecoinBalance;
- (void)createUI;
- (void)layoutUI;
- (void)setNeedsLayout;
- (void)onWecoinBalanceUpdated:(long long)arg1;
- (void)updateContentHeight;
- (void)updateContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

