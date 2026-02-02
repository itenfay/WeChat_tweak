//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, UILabel;

@interface MMFinderLiveGoodsAskedForPromotingView : UIView
{
    MMWebImageView *_imageView;
    UILabel *_label;
}

+ (_Bool)willEmptyWithGoods:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
- (void)updateWithGoods:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

