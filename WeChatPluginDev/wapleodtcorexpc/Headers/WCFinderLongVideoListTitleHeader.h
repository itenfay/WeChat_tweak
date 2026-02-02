//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MMUIButton, UILabel, UIView, WCFinderLongVideoListTitleHeaderConfig;

@interface WCFinderLongVideoListTitleHeader : UICollectionReusableView
{
    UILabel *_titleLabel;
    UIView *_sepLine;
    MMUIButton *_rightArrowBtn;
    WCFinderLongVideoListTitleHeaderConfig *_config;
    struct CGSize _layoutSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLongVideoListTitleHeaderConfig *config; // @synthesize config=_config;
@property(nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property(retain, nonatomic) MMUIButton *rightArrowBtn; // @synthesize rightArrowBtn=_rightArrowBtn;
@property(retain, nonatomic) UIView *sepLine; // @synthesize sepLine=_sepLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateWithConfig:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

