//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class InfiniteLoopContainerView, MMTimer, NSString, RichTextView, UIView, WCFinderAuthInfoIconView, WCFinderFeedImageCDNView, WCFinderHeadImageView, WCFinderLiveHomePageEntertainmentAudioRoomTeamupListView, WCFinderLiveHomePageFeedEntertainmentAudioRoomVM;
@protocol WCFinderLiveHomePageEntertainmentAudioRoomCellDelegate;

@interface WCFinderLiveHomePageEntertainmentAudioRoomCell
{
    id <WCFinderLiveHomePageEntertainmentAudioRoomCellDelegate> _delegate;
    WCFinderLiveHomePageFeedEntertainmentAudioRoomVM *_feedVM;
    WCFinderLiveHomePageEntertainmentAudioRoomTeamupListView *_avatarListView;
    RichTextView *_titleLabel;
    UIView *_authContainer;
    WCFinderHeadImageView *_avatorImageView;
    RichTextView *_nicknameTV;
    WCFinderAuthInfoIconView *_authInfoIconView;
    WCFinderFeedImageCDNView *_bgBlurImageView;
    InfiniteLoopContainerView *_notificationListView;
    MMTimer *_timer;
}

+ (double)cellHeightInWidth:(double)arg1;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) InfiniteLoopContainerView *notificationListView; // @synthesize notificationListView=_notificationListView;
@property(retain, nonatomic) WCFinderFeedImageCDNView *bgBlurImageView; // @synthesize bgBlurImageView=_bgBlurImageView;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(retain, nonatomic) RichTextView *nicknameTV; // @synthesize nicknameTV=_nicknameTV;
@property(retain, nonatomic) WCFinderHeadImageView *avatorImageView; // @synthesize avatorImageView=_avatorImageView;
@property(retain, nonatomic) UIView *authContainer; // @synthesize authContainer=_authContainer;
@property(retain, nonatomic) RichTextView *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCFinderLiveHomePageEntertainmentAudioRoomTeamupListView *avatarListView; // @synthesize avatarListView=_avatarListView;
@property(retain, nonatomic) WCFinderLiveHomePageFeedEntertainmentAudioRoomVM *feedVM; // @synthesize feedVM=_feedVM;
@property(nonatomic) __weak id <WCFinderLiveHomePageEntertainmentAudioRoomCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTeamUpListClickUnoccupiedSeat;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)arg1 image:(id)arg2 urlString:(id)arg3;
- (void)onPlayEventRecvAnchorSEIInfo:(id)arg1;
- (id)containerView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInContainerView:(id)arg1;
- (void)onEntertainmentAudioRoomListStatusFlagUpdate:(id)arg1;
- (void)onEntertainmentAudioRoomTalkingStatusUpdated;
- (void)onEntertainmentAudioRoomBackgroundImageUpdated;
- (void)onEntertainmentAudioRoomStateUpdated;
- (void)prepareForMorphTransition;
- (void)changeToNextPage;
- (void)startTimer;
- (void)stopTimer;
- (void)didEndDisplay;
- (void)willDisplay;
- (void)layoutUI;
- (void)relayoutNickname;
- (id)generateAvatarInfoList;
- (void)onAuthorViewDidClick;
- (void)stop;
- (void)playWithSound:(_Bool)arg1;
- (void)updateState;
- (void)updateWithFeedVM:(id)arg1;
- (void)prepareForReuse;
- (void)onConnectMicButtonClicked;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

