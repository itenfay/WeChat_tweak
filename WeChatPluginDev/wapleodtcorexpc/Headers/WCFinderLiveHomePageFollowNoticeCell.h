//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView, NSString, UILabel, UIView, WCFinderHeadImageView, WCFinderLiveGenericFeedVM;

@interface WCFinderLiveHomePageFollowNoticeCell
{
    MMWebImageView *_liveImageView;
    UIView *_containerView;
    UILabel *_markLabel;
    WCFinderHeadImageView *_headImageView;
    MMUILabel *_nickNameLabel;
    UIView *_headImageBorderView;
    UILabel *_noticeTimeLabel;
    WCFinderLiveGenericFeedVM *_feedVM;
}

+ (double)cellWidth;
+ (double)cellHeightInWidth:(double)arg1 styleInfo:(id)arg2;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveGenericFeedVM *feedVM; // @synthesize feedVM=_feedVM;
@property(retain, nonatomic) UILabel *noticeTimeLabel; // @synthesize noticeTimeLabel=_noticeTimeLabel;
@property(retain, nonatomic) UIView *headImageBorderView; // @synthesize headImageBorderView=_headImageBorderView;
@property(retain, nonatomic) MMUILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UILabel *markLabel; // @synthesize markLabel=_markLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) MMWebImageView *liveImageView; // @synthesize liveImageView=_liveImageView;
- (id)getNoticeStringWithTs:(unsigned int)arg1;
- (id)getQuickNoticeStringWithTs:(unsigned int)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)updateWithFeedVM:(id)arg1;
- (void)prepareForReuse;
- (void)updateStyle;
- (void)initViewsIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

