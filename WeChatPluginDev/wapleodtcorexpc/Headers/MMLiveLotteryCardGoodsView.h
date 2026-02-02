//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveLotteryInfo, MMUILabel, MMUIView, UIImageView, UITapGestureRecognizer;

@interface MMLiveLotteryCardGoodsView
{
    CDUnknownBlockType _cardGoodsViewBlock;
    UIImageView *_goodsImageView;
    MMUIView *_goodsTitleView;
    MMUILabel *_goodsTitleLabel;
    UITapGestureRecognizer *_tapRecognizer;
    MMFinderLiveLotteryInfo *_lotteryInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveLotteryInfo *lotteryInfo; // @synthesize lotteryInfo=_lotteryInfo;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) MMUILabel *goodsTitleLabel; // @synthesize goodsTitleLabel=_goodsTitleLabel;
@property(retain, nonatomic) MMUIView *goodsTitleView; // @synthesize goodsTitleView=_goodsTitleView;
@property(retain, nonatomic) UIImageView *goodsImageView; // @synthesize goodsImageView=_goodsImageView;
@property(copy, nonatomic) CDUnknownBlockType cardGoodsViewBlock; // @synthesize cardGoodsViewBlock=_cardGoodsViewBlock;
- (void)updateWithLotteryInfo:(id)arg1;
- (void)layoutUI;
- (void)createUI;
- (void)cardGoodsViewClick;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

