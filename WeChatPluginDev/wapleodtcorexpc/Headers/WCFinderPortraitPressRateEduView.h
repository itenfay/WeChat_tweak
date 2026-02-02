//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WCFinderPortraitPressRateEduView : UIView
{
    UILabel *_tipsLabel;
    UIImageView *_tipsImgView;
    struct CGSize _layoutSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property(retain, nonatomic) UIImageView *tipsImgView; // @synthesize tipsImgView=_tipsImgView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setupUI;
- (void)animateToHideWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateToShow;
- (id)initWithFrame:(struct CGRect)arg1;

@end

