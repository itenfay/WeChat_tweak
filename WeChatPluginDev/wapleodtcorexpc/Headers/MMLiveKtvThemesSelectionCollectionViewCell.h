//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMLiveKtvThemeItem, MMWebImageView, UIView;

@interface MMLiveKtvThemesSelectionCollectionViewCell : UICollectionViewCell
{
    MMLiveKtvThemeItem *_theme;
    MMWebImageView *_thumbnailImageView;
    UIView *_selectionBorderView;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *selectionBorderView; // @synthesize selectionBorderView=_selectionBorderView;
@property(retain, nonatomic) MMWebImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) MMLiveKtvThemeItem *theme; // @synthesize theme=_theme;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

