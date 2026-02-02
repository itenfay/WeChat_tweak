//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUIButton, MMUILabel, UIImageView, UIView;

@interface WCFinderPoiRecommendDishDetailTableViewCell : UITableViewCell
{
    _Bool _isLastCell;
    UIImageView *_imgView;
    MMUILabel *_nameLabel;
    MMUILabel *_priceLabel;
    MMUIButton *_likeButton;
    UIView *_separateLine;
}

+ (double)heightForDishDetail:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) MMUIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) MMUILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(nonatomic) _Bool isLastCell; // @synthesize isLastCell=_isLastCell;
- (void)updateLayout;
- (void)updateWithDishDetail:(id)arg1 isLastCell:(_Bool)arg2;
- (void)prepareForReuse;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

