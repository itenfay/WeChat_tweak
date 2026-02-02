//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, NSArray, UIImageView, UILabel, WAWebViewBottomBannerViewModel, WAWebviewHighlightedBottomBannerView, WCTagsView;
@protocol WAWebviewBottomBannerViewDelegate;

@interface WAWebviewBottomBannerView : UIView
{
    WAWebViewBottomBannerViewModel *_viewModel;
    id <WAWebviewBottomBannerViewDelegate> _delegate;
    MMWebImageView *_iconImgView;
    UIView *_mmHeadImageView;
    UILabel *_titleLabel;
    UILabel *_titleTailLabel;
    UIImageView *_originalIcon;
    UIImageView *_leftCornerImgView;
    UIImageView *_rightCornerImgView;
    NSArray *_buttons;
    WCTagsView *_tagsView;
    WAWebviewHighlightedBottomBannerView *_highlightedBannerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAWebviewHighlightedBottomBannerView *highlightedBannerView; // @synthesize highlightedBannerView=_highlightedBannerView;
@property(retain, nonatomic) WCTagsView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UIImageView *rightCornerImgView; // @synthesize rightCornerImgView=_rightCornerImgView;
@property(retain, nonatomic) UIImageView *leftCornerImgView; // @synthesize leftCornerImgView=_leftCornerImgView;
@property(retain, nonatomic) UIImageView *originalIcon; // @synthesize originalIcon=_originalIcon;
@property(retain, nonatomic) UILabel *titleTailLabel; // @synthesize titleTailLabel=_titleTailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *mmHeadImageView; // @synthesize mmHeadImageView=_mmHeadImageView;
@property(retain, nonatomic) MMWebImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(nonatomic) __weak id <WAWebviewBottomBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAWebViewBottomBannerViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onHighlightedBottomBannerViewClicked;
- (void)onButtonClicked:(id)arg1;
- (void)generateButtons;
- (void)highlightBannerView:(_Bool)arg1;
- (void)reloadData;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

