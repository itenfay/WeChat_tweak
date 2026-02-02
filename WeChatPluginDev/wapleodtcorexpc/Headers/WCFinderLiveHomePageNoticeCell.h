//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveIconButton, MMWebImageView, NSString, UIImageView, UILabel, UIView, WCFinderAuthInfoIconView, WCFinderHeadImageView, WCFinderLiveFeedGenericCoverReportInfo, WCFinderLiveGenericFeedVM;
@protocol WCFinderLiveHomePageNoticeCellDelegate;

@interface WCFinderLiveHomePageNoticeCell
{
    int _commentScene;
    id <WCFinderLiveHomePageNoticeCellDelegate> _delegate;
    MMWebImageView *_coverImageView;
    UIImageView *_logoView;
    UILabel *_noticeTitleLabel;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_nicknameLabel;
    WCFinderAuthInfoIconView *_authInfoIconView;
    UILabel *_noticeTimeLabel;
    UILabel *_noticeDescLabel;
    MMLiveIconButton *_actionButton;
    UIView *_coverMaskView;
    WCFinderLiveGenericFeedVM *_feedVM;
    unsigned long long _containerId;
    WCFinderLiveFeedGenericCoverReportInfo *_coverReportInfo;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveFeedGenericCoverReportInfo *coverReportInfo; // @synthesize coverReportInfo=_coverReportInfo;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned long long containerId; // @synthesize containerId=_containerId;
@property(retain, nonatomic) WCFinderLiveGenericFeedVM *feedVM; // @synthesize feedVM=_feedVM;
@property(retain, nonatomic) UIView *coverMaskView; // @synthesize coverMaskView=_coverMaskView;
@property(retain, nonatomic) MMLiveIconButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *noticeDescLabel; // @synthesize noticeDescLabel=_noticeDescLabel;
@property(retain, nonatomic) UILabel *noticeTimeLabel; // @synthesize noticeTimeLabel=_noticeTimeLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UILabel *noticeTitleLabel; // @synthesize noticeTitleLabel=_noticeTitleLabel;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) __weak id <WCFinderLiveHomePageNoticeCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resetCoverReportInfo;
- (id)getCoverReportInfo;
- (void)onLoadImageOK:(id)arg1;
- (void)onFeedNoticeCardCheckPresentConcertTicket;
- (void)onFeedNoticeCardStatusUpdate;
- (void)presentConcertTicketForNoticeInfo:(id)arg1 byViewController:(id)arg2;
- (void)updateActionButtonForConcert;
- (void)updateActionButton;
- (void)onActionButtonClicked:(id)arg1;
- (void)layoutUI;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)showLogo;
- (void)initViews;
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

