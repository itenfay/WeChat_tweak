//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface MMFinderLiveShopShelfAddPreviousLiveGoodsWarningContentView : UIView
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithPageInfo:(id)arg1;

@end

