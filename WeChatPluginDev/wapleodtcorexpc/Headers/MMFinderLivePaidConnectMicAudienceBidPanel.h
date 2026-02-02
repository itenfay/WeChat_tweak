//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveWecoinLabelView, MMUIButton, UIButton;

@interface MMFinderLivePaidConnectMicAudienceBidPanel
{
    CDUnknownBlockType _onConfirmBidCallback;
    unsigned long long _minPrice;
    unsigned long long _stepPrice;
    unsigned long long _curPrice;
    MMFinderLiveWecoinLabelView *_wecoinView;
    MMUIButton *_plusButton;
    MMUIButton *_minusButton;
    UIButton *_bidButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *bidButton; // @synthesize bidButton=_bidButton;
@property(retain, nonatomic) MMUIButton *minusButton; // @synthesize minusButton=_minusButton;
@property(retain, nonatomic) MMUIButton *plusButton; // @synthesize plusButton=_plusButton;
@property(retain, nonatomic) MMFinderLiveWecoinLabelView *wecoinView; // @synthesize wecoinView=_wecoinView;
@property(nonatomic) unsigned long long curPrice; // @synthesize curPrice=_curPrice;
@property(nonatomic) unsigned long long stepPrice; // @synthesize stepPrice=_stepPrice;
@property(nonatomic) unsigned long long minPrice; // @synthesize minPrice=_minPrice;
@property(copy, nonatomic) CDUnknownBlockType onConfirmBidCallback; // @synthesize onConfirmBidCallback=_onConfirmBidCallback;
- (void)layoutSubviews;
- (void)onTapBid;
- (void)onPlus;
- (void)onMinus;
- (void)setupPageSheetConfig;
- (id)genOperationButtonWithIcon:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)initViews;
- (id)initWithMinPrice:(unsigned long long)arg1 incrementStepPrice:(unsigned long long)arg2;

@end

