//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMPaddingView, UILabel;

@interface WCFinderLiveHomePageAggregationCardGoodsPromotingView : UIView
{
    MMPaddingView *_goodsImageView;
    UILabel *_goodsLabel;
    UILabel *_shopLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *shopLabel; // @synthesize shopLabel=_shopLabel;
@property(retain, nonatomic) UILabel *goodsLabel; // @synthesize goodsLabel=_goodsLabel;
@property(retain, nonatomic) MMPaddingView *goodsImageView; // @synthesize goodsImageView=_goodsImageView;
- (void)updateWithInfo:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

