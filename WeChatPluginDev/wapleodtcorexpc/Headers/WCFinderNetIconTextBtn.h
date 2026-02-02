//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, UILabel;

@interface WCFinderNetIconTextBtn : UIView
{
    CDUnknownBlockType _tapBlock;
    MMWebImageView *_iconImageView;
    UILabel *_titleLabel;
    double _leftRightMargin;
}

- (void).cxx_destruct;
@property(nonatomic) double leftRightMargin; // @synthesize leftRightMargin=_leftRightMargin;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
- (id)getTitleContent;
- (void)layoutAllSubviews;
- (void)updateWithIconLightURL:(id)arg1 iconDarkUrl:(id)arg2 title:(id)arg3;
- (void)updateWithIconURL:(id)arg1 title:(id)arg2;
- (void)onClickAction;
- (void)updateLeftRightMargin:(double)arg1;
- (void)updateTitleTextColor:(id)arg1;
- (void)changeToShadowMode:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

