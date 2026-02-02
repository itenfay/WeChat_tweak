//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderLiveCardHighlightTag, MMFinderLiveFeedHighlightTagBackgroundGradientView, MMLiveColorfulLabel, MMWebImageView, NSString;

@interface MMFinderLiveFeedHighlightTagView : UIView
{
    double _maxWidth;
    UIView *_containerView;
    UIView *_blurView;
    MMWebImageView *_bgImgView;
    MMWebImageView *_iconImgView;
    MMLiveColorfulLabel *_textLabel;
    FinderLiveCardHighlightTag *_highlightTag;
    MMFinderLiveFeedHighlightTagBackgroundGradientView *_bgGradientView;
    struct CGSize _loadImgSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveFeedHighlightTagBackgroundGradientView *bgGradientView; // @synthesize bgGradientView=_bgGradientView;
@property(retain, nonatomic) FinderLiveCardHighlightTag *highlightTag; // @synthesize highlightTag=_highlightTag;
@property(retain, nonatomic) MMLiveColorfulLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) MMWebImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) MMWebImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) struct CGSize loadImgSize; // @synthesize loadImgSize=_loadImgSize;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (void)onLoadImageOK:(id)arg1;
- (_Bool)showIcon;
- (_Bool)useImgMode;
- (void)updateWithHighlightTag:(id)arg1;
- (void)initViews;
- (double)widthToFit:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

