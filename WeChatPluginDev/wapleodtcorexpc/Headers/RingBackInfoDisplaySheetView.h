//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSString, RingToneContactSelectViewController, RingToneDetail, RingToneImageView, RingToneMixPlayer, RingTonePickTableViewCell, UIImageView, UIView;
@protocol RingBackInfoDisplaySheetViewDelegate;

@interface RingBackInfoDisplaySheetView
{
    _Bool _shouldShowUserStatus;
    _Bool _shouldShowFriendSettings;
    _Bool _isSelected;
    id <RingBackInfoDisplaySheetViewDelegate> _delegate;
    MMUIViewController *_viewController;
    long long _entranceType;
    NSString *_friendName;
    NSString *_userName;
    unsigned long long _feedEnterType;
    RingToneDetail *_ring;
    unsigned long long _scene;
    RingToneMixPlayer *_player;
    RingTonePickTableViewCell *_ringInfoCell;
    RingToneImageView *_musicCoverView;
    UIView *_musicInfoBottomView;
    RingToneContactSelectViewController *_selectVC;
    UIImageView *_selectImageView;
}

+ (id)genTextStatusJumpInfoRingtonePB:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
@property(nonatomic) __weak RingToneContactSelectViewController *selectVC; // @synthesize selectVC=_selectVC;
@property(retain, nonatomic) UIView *musicInfoBottomView; // @synthesize musicInfoBottomView=_musicInfoBottomView;
@property(retain, nonatomic) RingToneImageView *musicCoverView; // @synthesize musicCoverView=_musicCoverView;
@property(retain, nonatomic) RingTonePickTableViewCell *ringInfoCell; // @synthesize ringInfoCell=_ringInfoCell;
@property(retain, nonatomic) RingToneMixPlayer *player; // @synthesize player=_player;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) RingToneDetail *ring; // @synthesize ring=_ring;
@property(nonatomic) unsigned long long feedEnterType; // @synthesize feedEnterType=_feedEnterType;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *friendName; // @synthesize friendName=_friendName;
@property(nonatomic) _Bool shouldShowFriendSettings; // @synthesize shouldShowFriendSettings=_shouldShowFriendSettings;
@property(nonatomic) _Bool shouldShowUserStatus; // @synthesize shouldShowUserStatus=_shouldShowUserStatus;
@property(nonatomic) long long entranceType; // @synthesize entranceType=_entranceType;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <RingBackInfoDisplaySheetViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectFriendContact:(id)arg1;
- (void)onSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)sendTextState;
- (void)onVoipWindowDidAppear;
- (void)onVoipWindowDisappear;
- (void)onTapJumpFinder:(id)arg1;
- (void)onTapPlayRingTone:(id)arg1 isToPlay:(_Bool)arg2;
- (id)curViewController;
- (void)pageSheetWillAppear;
- (void)onTapJumpToFinder;
- (void)onTapSettingRing;
- (void)reloadContent;
- (void)onSelectButtonClick;
- (void)addUserStateView;
- (void)setRingForFriends;
- (void)addSetRingForFriendsBtn;
- (void)addSettingButtonWithTitle:(id)arg1;
- (void)addMusicInfoView;
- (void)addSpaceView:(double)arg1;
- (void)addCustomTitle:(id)arg1;
- (void)addGuideInfoLabel;
- (void)setCommonStyleUIWithTitle:(id)arg1;
- (void)setHasUsedRingStyleUI;
- (void)setVOIPContactStyleUI;
- (void)stopRing;
- (void)playRing;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)pageSheetWillDisappear;
- (void)customArrangeViews;
- (void)dealloc;
- (void)report24158Data:(unsigned long long)arg1 friendName:(id)arg2 userName:(id)arg3;
- (id)initWithFinderItem:(id)arg1 type:(long long)arg2 userName:(id)arg3;
- (id)initWithRingToneDetail:(id)arg1 scene:(unsigned long long)arg2 userName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

