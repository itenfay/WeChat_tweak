//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UIView;

@interface MMFinderLiveStickerTextTemplateItemCell : UICollectionViewCell
{
    UIView *_containerView;
    UIImageView *_thumbnailView;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (void)updateWithTemplateItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

