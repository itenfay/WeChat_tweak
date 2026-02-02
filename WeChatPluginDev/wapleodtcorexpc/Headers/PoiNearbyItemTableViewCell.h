//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LbsRecommendPoiItem, MMUILabel, MMWebImageView, NSMutableArray, UIImageView;

@interface PoiNearbyItemTableViewCell
{
    LbsRecommendPoiItem *_poiItem;
    MMWebImageView *_iconView;
    MMUILabel *_titleLabel;
    MMUILabel *_subTitleLabel;
    MMUILabel *_descLabel;
    UIImageView *_remarkBKImage;
    MMUILabel *_personalRemarkLabel;
    NSMutableArray *_adIconViewList;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithLbsRecommendPoiItem:(id)arg1 withSize:(struct CGSize)arg2;

@end

