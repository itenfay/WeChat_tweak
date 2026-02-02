//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveIconButton, UIImageView, UILabel, WCFinderFeedContentVM;
@protocol WCFinderPanelRingToneGuideViewDelegate;

@interface WCFinderPanelRingToneGuideView : UIView
{
    id <WCFinderPanelRingToneGuideViewDelegate> _delegate;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    MMLiveIconButton *_actionButton;
    WCFinderFeedContentVM *_contentVM;
}

+ (double)defaultHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) MMLiveIconButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <WCFinderPanelRingToneGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFeedOriginalSoundInfoChanged:(id)arg1;
- (void)onGlobalRingModified:(id)arg1 opType:(unsigned long long)arg2;
- (void)onClickActionButton;
- (void)layoutSubviews;
- (void)updateWithContentVM:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

