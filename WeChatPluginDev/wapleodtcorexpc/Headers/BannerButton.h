//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel;

@interface BannerButton : UIButton
{
    UIImageView *_arrowImageView;
    UILabel *_customTitleLabel;
    UIImageView *_headImageView;
    double _contentMarginLeft;
}

- (void).cxx_destruct;
@property(nonatomic) double contentMarginLeft; // @synthesize contentMarginLeft=_contentMarginLeft;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UILabel *customTitleLabel; // @synthesize customTitleLabel=_customTitleLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
- (void)setEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)setTitleText:(id)arg1;
- (void)setTitleIconImage:(id)arg1;
- (void)setRightArrowImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

