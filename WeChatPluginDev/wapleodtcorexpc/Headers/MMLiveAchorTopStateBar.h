//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimerLabel, MMUILabel, NSString, UIImageView;
@protocol MMLiveAchorTopStateBarDelegate;

@interface MMLiveAchorTopStateBar
{
    UIImageView *_networkStateImageView;
    UIImageView *_likedImageView;
    MMUILabel *_likedCountLabel;
    id <MMLiveAchorTopStateBarDelegate> _delegate;
    CDUnknownBlockType _widthChangeCallback;
    unsigned long long _liveId;
    NSString *_roomId;
    long long _roleType;
    long long _currentNetWorkState;
    unsigned long long _likeCount;
    MMTimerLabel *_timerLabel;
}

+ (id)networkImageForState:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) MMUILabel *likedCountLabel; // @synthesize likedCountLabel=_likedCountLabel;
@property(readonly, nonatomic) UIImageView *likedImageView; // @synthesize likedImageView=_likedImageView;
@property(retain, nonatomic) MMTimerLabel *timerLabel; // @synthesize timerLabel=_timerLabel;
@property(readonly, nonatomic) UIImageView *networkStateImageView; // @synthesize networkStateImageView=_networkStateImageView;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) long long currentNetWorkState; // @synthesize currentNetWorkState=_currentNetWorkState;
@property(nonatomic) long long roleType; // @synthesize roleType=_roleType;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(copy, nonatomic) CDUnknownBlockType widthChangeCallback; // @synthesize widthChangeCallback=_widthChangeCallback;
@property(nonatomic) __weak id <MMLiveAchorTopStateBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLiveProgressUpdated:(unsigned int)arg1;
- (void)onLiveResumed;
- (void)onLivePaused;
- (double)getLikedCountLabelRight;
- (void)onEnterLive;
- (void)updateLikeCount:(unsigned long long)arg1;
- (void)onLiveQualityUpdated:(id)arg1;
- (void)layoutLikedCountLabel;
- (void)layoutLikedImageView;
- (void)layoutTimerLabel;
- (void)layoutNetworkStateImageView;
- (void)updateSubViewsHidden:(_Bool)arg1;
- (void)layoutUI;
- (void)forceLayoutForOrientationChanged;
- (void)layoutSubviews;

@end

