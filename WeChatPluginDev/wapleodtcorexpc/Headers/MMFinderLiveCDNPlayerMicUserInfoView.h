//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveConnectMicUsersInfo, NSArray, NSMutableArray, NSMutableDictionary, UIImage, UIImageView;

@interface MMFinderLiveCDNPlayerMicUserInfoView : UIView
{
    _Bool _anchorIsAudioMode;
    _Bool _hideAudioMicUserAvatar;
    _Bool _enableMasking;
    UIImage *_anchorCoverImage;
    MMFinderLiveConnectMicUsersInfo *_micUsersInfo;
    NSArray *_userInfoList;
    NSMutableDictionary *_userViewDic;
    UIImageView *_coverViewInMicMode;
    UIView *_videoContainerView;
    UIView *_micUserBackContainerView;
    NSMutableArray *_unoccupiedSeatViewList;
    NSMutableArray *_cachedUnoccupiedSeatViewList;
    struct CGSize _lastViewSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *cachedUnoccupiedSeatViewList; // @synthesize cachedUnoccupiedSeatViewList=_cachedUnoccupiedSeatViewList;
@property(retain, nonatomic) NSMutableArray *unoccupiedSeatViewList; // @synthesize unoccupiedSeatViewList=_unoccupiedSeatViewList;
@property(nonatomic) struct CGSize lastViewSize; // @synthesize lastViewSize=_lastViewSize;
@property(nonatomic) __weak UIView *micUserBackContainerView; // @synthesize micUserBackContainerView=_micUserBackContainerView;
@property(nonatomic) __weak UIView *videoContainerView; // @synthesize videoContainerView=_videoContainerView;
@property(retain, nonatomic) UIImageView *coverViewInMicMode; // @synthesize coverViewInMicMode=_coverViewInMicMode;
@property(retain, nonatomic) NSMutableDictionary *userViewDic; // @synthesize userViewDic=_userViewDic;
@property(retain, nonatomic) NSArray *userInfoList; // @synthesize userInfoList=_userInfoList;
@property(retain, nonatomic) MMFinderLiveConnectMicUsersInfo *micUsersInfo; // @synthesize micUsersInfo=_micUsersInfo;
@property(nonatomic) _Bool enableMasking; // @synthesize enableMasking=_enableMasking;
@property(nonatomic) _Bool hideAudioMicUserAvatar; // @synthesize hideAudioMicUserAvatar=_hideAudioMicUserAvatar;
@property(nonatomic) _Bool anchorIsAudioMode; // @synthesize anchorIsAudioMode=_anchorIsAudioMode;
@property(retain, nonatomic) UIImage *anchorCoverImage; // @synthesize anchorCoverImage=_anchorCoverImage;
- (void)updateMicFocusModeAllAudioMicUserAvatarAlpha:(double)arg1;
- (void)updateVideoContainerView:(id)arg1 andBackContainerView:(id)arg2;
- (void)updateConnectMicOtherAnchorCoverViewAppearance:(id)arg1;
- (void)clearAndHide;
- (void)clearCurrentUnoccupiedSeatViewList;
- (void)updateUnoccupiedSeatViews;
- (void)showWithConnectMicUsersInfo:(id)arg1;
- (void)layoutMaskLayerToCoverView:(id)arg1;
- (void)configureMicFocusCdnViewMasks;
- (void)checkAndCreateCoverViewInMicMode;
- (void)layoutUI;
- (struct CGRect)getUserViewFrameWithUserInfo:(id)arg1;
- (void)layoutCoverViewInMicMode;
- (void)updateConnectMicUserViews;
- (void)clearUserViewDicAndViews;
- (void)layoutSubviews;

@end

