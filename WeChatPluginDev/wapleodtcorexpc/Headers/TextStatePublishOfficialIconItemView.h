//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUILabel, MMWebImageView, TextStatePublishOfficialIconItem;

@interface TextStatePublishOfficialIconItemView : UICollectionViewCell
{
    TextStatePublishOfficialIconItem *_iconItem;
    MMWebImageView *_iconImageView;
    MMUILabel *_descriptionLabel;
}

+ (double)minItemHeight;
+ (double)itemWidth;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) TextStatePublishOfficialIconItem *iconItem; // @synthesize iconItem=_iconItem;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

