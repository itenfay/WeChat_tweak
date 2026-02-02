//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderLiveNoticeListInfo, MMFinderLiveContentVM, RichTextView, UILabel, WCFinderHeadImageView, WCFinderLiveLivingItemView;
@protocol WCFinderLiveLivingViewDelegate;

@interface WCFinderLiveLivingView : UIView
{
    id <WCFinderLiveLivingViewDelegate> _delegate;
    MMFinderLiveContentVM *_contentVM;
    FinderLiveNoticeListInfo *_noticeListInfo;
    unsigned long long _scene;
    WCFinderLiveLivingItemView *_mainItemView;
    UIView *_anchorHeadBackView;
    WCFinderHeadImageView *_anchorHeadImageView;
    UIView *_nowLiveView;
    UILabel *_nowLiveLabel;
    UILabel *_startTimeLabel;
    RichTextView *_introductionTextView;
    WCFinderLiveLivingItemView *_moreNoticesItemView;
    UILabel *_moreNoticesLabel;
    struct CGSize _cacheSize;
}

+ (id)descColorInScene:(unsigned long long)arg1;
+ (id)titleFontInScene:(unsigned long long)arg1;
+ (_Bool)showsMoreNoticesWithNoticeList:(id)arg1;
+ (double)heightWithContentVM:(id)arg1 noticeListInfo:(id)arg2 width:(double)arg3 scene:(unsigned long long)arg4;
+ (double)detailViewMarginRight;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize cacheSize; // @synthesize cacheSize=_cacheSize;
@property(retain, nonatomic) UILabel *moreNoticesLabel; // @synthesize moreNoticesLabel=_moreNoticesLabel;
@property(retain, nonatomic) WCFinderLiveLivingItemView *moreNoticesItemView; // @synthesize moreNoticesItemView=_moreNoticesItemView;
@property(retain, nonatomic) RichTextView *introductionTextView; // @synthesize introductionTextView=_introductionTextView;
@property(retain, nonatomic) UILabel *startTimeLabel; // @synthesize startTimeLabel=_startTimeLabel;
@property(retain, nonatomic) UILabel *nowLiveLabel; // @synthesize nowLiveLabel=_nowLiveLabel;
@property(retain, nonatomic) UIView *nowLiveView; // @synthesize nowLiveView=_nowLiveView;
@property(retain, nonatomic) WCFinderHeadImageView *anchorHeadImageView; // @synthesize anchorHeadImageView=_anchorHeadImageView;
@property(retain, nonatomic) UIView *anchorHeadBackView; // @synthesize anchorHeadBackView=_anchorHeadBackView;
@property(retain, nonatomic) WCFinderLiveLivingItemView *mainItemView; // @synthesize mainItemView=_mainItemView;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) FinderLiveNoticeListInfo *noticeListInfo; // @synthesize noticeListInfo=_noticeListInfo;
@property(retain, nonatomic) MMFinderLiveContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) __weak id <WCFinderLiveLivingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)cardAccessibilityLabel;
- (void)updateCardAccessibility;
- (void)updateWithContentVM:(id)arg1 noticeListInfo:(id)arg2 scene:(unsigned long long)arg3;
- (void)onMoreNoticesButtonClicked:(id)arg1;
- (void)onMainItemClicked:(id)arg1;
- (void)initMoreNoticesLabel;
- (void)initMoreNoticesItemView;
- (void)initIntroductionTextView;
- (void)initStartTimeLabel;
- (void)initNowLiveView;
- (void)initAnchorHeadImageView;
- (void)initMainItemView;
- (void)layoutUI;
- (void)initUI;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

