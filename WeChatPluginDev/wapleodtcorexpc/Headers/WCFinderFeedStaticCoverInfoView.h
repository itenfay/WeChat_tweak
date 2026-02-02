//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, UILabel;

@interface WCFinderFeedStaticCoverInfoView : UIView
{
    double _maxWidth;
    MMWebImageView *_rightIconWebImageView;
    UILabel *_rightInfoLabel;
    UILabel *_leftInfoLabel;
    UIView *_separateLine;
    UIView *_stickyTopContainerView;
}

+ (struct CGSize)getDefaultIconImageSize;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *stickyTopContainerView; // @synthesize stickyTopContainerView=_stickyTopContainerView;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UILabel *leftInfoLabel; // @synthesize leftInfoLabel=_leftInfoLabel;
@property(retain, nonatomic) UILabel *rightInfoLabel; // @synthesize rightInfoLabel=_rightInfoLabel;
@property(retain, nonatomic) MMWebImageView *rightIconWebImageView; // @synthesize rightIconWebImageView=_rightIconWebImageView;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
- (id)getLeftInfoLabelText;
- (id)getRightInfoLabelText;
- (id)getRightIconImage;
- (void)adjustMarginWithNoneIconLayout:(double)arg1 iconLayout:(double)arg2 iconLeftMargin:(double)arg3 leftInfoLabelLeftMargin:(double)arg4;
- (void)adjustMargin;
- (void)setIconHidden:(_Bool)arg1;
- (void)setTextColor:(id)arg1;
- (void)updateContentWithLeftText:(id)arg1 rightImageUrl:(id)arg2 hiddenSeparateLine:(_Bool)arg3 leftTextFont:(id)arg4;
- (void)updateContentWithLeftText:(id)arg1 rightImage:(id)arg2 rightText:(id)arg3 isShowStickyTop:(_Bool)arg4 hiddenSeparateLine:(_Bool)arg5;
- (void)updateContentWithLeftText:(id)arg1 rightImage:(id)arg2 rightText:(id)arg3 isShowStickyTop:(_Bool)arg4 leftTextFont:(id)arg5;
- (void)updateContentWithLeftText:(id)arg1 rightImage:(id)arg2 rightText:(id)arg3 isShowStickyTop:(_Bool)arg4;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

