//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;
@protocol WCFinderLiveHomePageEntertainmentAudioRoomTeamupListViewDelegate;

@interface WCFinderLiveHomePageEntertainmentAudioRoomTeamupListView : UIView
{
    id <WCFinderLiveHomePageEntertainmentAudioRoomTeamupListViewDelegate> _delegate;
    NSMutableArray *_avatarList;
    double _avatarMargin;
    struct CGSize _avatarSize;
}

+ (unsigned long long)maxTeamListCount;
- (void).cxx_destruct;
@property(nonatomic) double avatarMargin; // @synthesize avatarMargin=_avatarMargin;
@property(nonatomic) struct CGSize avatarSize; // @synthesize avatarSize=_avatarSize;
@property(retain, nonatomic) NSMutableArray *avatarList; // @synthesize avatarList=_avatarList;
@property(nonatomic) __weak id <WCFinderLiveHomePageEntertainmentAudioRoomTeamupListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *showingList;
@property(readonly, nonatomic) unsigned long long lines;
- (void)calculateAvatarSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateWithInfoList:(id)arg1;
- (void)updateTalkingStatus:(id)arg1;
- (void)updateListCameraOn:(id)arg1;
- (void)updateAudioWaveColor:(id)arg1;
- (void)initViews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

