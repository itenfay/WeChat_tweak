//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, RichTextView, UIImageView, UILabel, UIPageControl, UIView, WCFinderFeedContentVM, WCFinderFeedImageCDNView;

@interface WCFinderStreamCollectionViewCell : UICollectionViewCell
{
    _Bool _isShowStatus;
    RichTextView *_descLabel;
    WCFinderFeedImageCDNView *_imageView;
    WCFinderFeedContentVM *_contentVM;
    UIView *_statusBar;
    UIImageView *_likeIconView;
    UILabel *_likeNumLabel;
    UIView *_blurBGView;
    UIImageView *_privateTipsView;
    UIView *_privateSperatorLine;
    UIImageView *_stickyTopIconView;
    UIPageControl *_pageCtrl;
    UIView *_oMaskView;
    UILabel *_maskTipsLabel;
    unsigned long long _showInfoType;
}

+ (id)descLabelFont;
+ (double)streamCellHeightWith:(id)arg1 width:(double)arg2 isShowStatus:(_Bool)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long showInfoType; // @synthesize showInfoType=_showInfoType;
@property(retain, nonatomic) UILabel *maskTipsLabel; // @synthesize maskTipsLabel=_maskTipsLabel;
@property(retain, nonatomic) UIView *oMaskView; // @synthesize oMaskView=_oMaskView;
@property(retain, nonatomic) UIPageControl *pageCtrl; // @synthesize pageCtrl=_pageCtrl;
@property(retain, nonatomic) UIImageView *stickyTopIconView; // @synthesize stickyTopIconView=_stickyTopIconView;
@property(retain, nonatomic) UIView *privateSperatorLine; // @synthesize privateSperatorLine=_privateSperatorLine;
@property(retain, nonatomic) UIImageView *privateTipsView; // @synthesize privateTipsView=_privateTipsView;
@property(retain, nonatomic) UIView *blurBGView; // @synthesize blurBGView=_blurBGView;
@property(nonatomic) _Bool isShowStatus; // @synthesize isShowStatus=_isShowStatus;
@property(retain, nonatomic) UILabel *likeNumLabel; // @synthesize likeNumLabel=_likeNumLabel;
@property(retain, nonatomic) UIImageView *likeIconView; // @synthesize likeIconView=_likeIconView;
@property(nonatomic) __weak UIView *statusBar; // @synthesize statusBar=_statusBar;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) WCFinderFeedImageCDNView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) RichTextView *descLabel; // @synthesize descLabel=_descLabel;
- (void)onFeedLiveOnlineCountChange:(long long)arg1 participantWording:(id)arg2;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)updateBlurView;
- (void)onFeedContentStickyTopStatueChanged:(id)arg1;
- (void)onFeedContentPrivateStateChange:(_Bool)arg1;
- (void)onFeedContent:(id)arg1 privateStateChange:(_Bool)arg2;
- (void)onFeedContent:(id)arg1 commentDataChanged:(id)arg2;
- (_Bool)stickyTopIconViewIsHidden;
- (void)setStickTopIconDisplay:(_Bool)arg1;
- (_Bool)displayPrivateIcon;
- (_Bool)displayStickTopIcon;
- (void)adjustLikeBlurMargin;
- (void)updateImage:(id)arg1;
- (void)updateInfoBubbleContentWith:(id)arg1 showInfoType:(unsigned long long)arg2;
- (void)updateContentWith:(id)arg1 showInfoType:(unsigned long long)arg2 hasMask:(_Bool)arg3;
- (void)initSubview;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

