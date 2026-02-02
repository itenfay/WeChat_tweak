//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, MMUITextField, MMUIView, NSString, UIImageView, UIView, WCFinderLiveStartLotteryGoodAddView, WCFinderLiveStartLotteryProductInfo;
@protocol WCFinderLiveStartLotteryGoodViewDelegate;

@interface WCFinderLiveStartLotteryGoodView
{
    _Bool _isOnlyShopProduct;
    _Bool _needFilterWhiteSpace;
    int _lotteryType;
    unsigned int _maxInputWordCount;
    MMUITextField *_textField;
    id <WCFinderLiveStartLotteryGoodViewDelegate> _delegate;
    WCFinderLiveStartLotteryProductInfo *_productInfo;
    MMUILabel *_titleLabel;
    UIView *_separaLine;
    UIImageView *_goodsImageView;
    MMUILabel *_goodsTitleLabel;
    MMUILabel *_goodsDetailLabel;
    MMUIButton *_actionButton;
    MMUIView *_changeView;
    WCFinderLiveStartLotteryGoodAddView *_addView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveStartLotteryGoodAddView *addView; // @synthesize addView=_addView;
@property(retain, nonatomic) MMUIView *changeView; // @synthesize changeView=_changeView;
@property(nonatomic) _Bool needFilterWhiteSpace; // @synthesize needFilterWhiteSpace=_needFilterWhiteSpace;
@property(nonatomic) unsigned int maxInputWordCount; // @synthesize maxInputWordCount=_maxInputWordCount;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUILabel *goodsDetailLabel; // @synthesize goodsDetailLabel=_goodsDetailLabel;
@property(retain, nonatomic) MMUILabel *goodsTitleLabel; // @synthesize goodsTitleLabel=_goodsTitleLabel;
@property(retain, nonatomic) UIImageView *goodsImageView; // @synthesize goodsImageView=_goodsImageView;
@property(retain, nonatomic) UIView *separaLine; // @synthesize separaLine=_separaLine;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCFinderLiveStartLotteryProductInfo *productInfo; // @synthesize productInfo=_productInfo;
@property(nonatomic) __weak id <WCFinderLiveStartLotteryGoodViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMUITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) int lotteryType; // @synthesize lotteryType=_lotteryType;
@property(nonatomic) _Bool isOnlyShopProduct; // @synthesize isOnlyShopProduct=_isOnlyShopProduct;
- (void)addViewClick:(id)arg1;
- (void)layoutUI;
- (void)createUI;
- (void)updateAddView;
- (void)chooseWithType:(int)arg1 isOnlyShopProduct:(_Bool)arg2;
- (void)cleanDescriptionInputItemViewText;
- (id)getLotteryDescriptionInputItemViewText;
- (void)onTextFieldChanged:(id)arg1;
- (void)actionButtonClick;
- (void)layoutSubviews;
- (void)updateLiveStartLotteryGoodView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

