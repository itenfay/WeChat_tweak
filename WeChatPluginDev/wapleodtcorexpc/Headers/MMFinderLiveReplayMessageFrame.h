//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveMicInfo, LiveRoomImg, NSMutableArray;

@interface MMFinderLiveReplayMessageFrame : NSObject
{
    _Bool _isMicInfoKeyframe;
    _Bool _isLiveRoomImagesKeyframe;
    NSMutableArray *_commentItems;
    FinderLiveMicInfo *_liveMicInfo;
    LiveRoomImg *_liveRoomImages;
    NSMutableArray *_rewardMessages;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *rewardMessages; // @synthesize rewardMessages=_rewardMessages;
@property(retain, nonatomic) LiveRoomImg *liveRoomImages; // @synthesize liveRoomImages=_liveRoomImages;
@property(retain, nonatomic) FinderLiveMicInfo *liveMicInfo; // @synthesize liveMicInfo=_liveMicInfo;
@property(nonatomic) _Bool isLiveRoomImagesKeyframe; // @synthesize isLiveRoomImagesKeyframe=_isLiveRoomImagesKeyframe;
@property(nonatomic) _Bool isMicInfoKeyframe; // @synthesize isMicInfoKeyframe=_isMicInfoKeyframe;
@property(retain, nonatomic) NSMutableArray *commentItems; // @synthesize commentItems=_commentItems;
- (id)computeLiveRoomImagesWithReferenceLiveRoomImages:(id)arg1 differencingAppMsgList:(id)arg2;
- (_Bool)handleOpposingAudienceDisconnectingWithSessionId:(id)arg1 forLiveMicPkInfo:(id)arg2;
- (_Bool)handleOpposingAudienceDisconnectingWithSessionId:(id)arg1 forLiveMicInfo:(id)arg2;
- (_Bool)handleOpposingAudienceConnectingList:(id)arg1 forLiveMicPkInfo:(id)arg2;
- (_Bool)handleOpposingAudienceConnectingInfo:(id)arg1 forLiveMicInfo:(id)arg2;
- (_Bool)handleOpposingAnchorLiveRoomImagesChange:(id)arg1 forLiveMicInfo:(id)arg2;
- (_Bool)handleNewAnchorMicDisconnectingInfo:(id)arg1 forLiveMicInfo:(id)arg2;
- (_Bool)handleNewAnchorMicConnectingInfo:(id)arg1 forLiveMicInfo:(id)arg2;
- (_Bool)handleAnchorConnectingInfo:(id)arg1 forLiveMicInfo:(id)arg2 sessionId:(id)arg3;
- (_Bool)handleAudienceDisconnectingMessage:(id)arg1 forLiveMicInfo:(id)arg2;
- (_Bool)handleAudienceConnectingMessage:(id)arg1 forLiveMicInfo:(id)arg2;
- (id)cloneOfFinderLiveMicPkInfo:(id)arg1;
- (id)cloneOfLiveMicInfo:(id)arg1;
- (id)computeLiveMicInfoWithReferenceLiveMicInfo:(id)arg1 getLiveMsgResp:(id)arg2;
- (void)initializeRewardMessagesWithMessageResponse:(id)arg1;
- (void)filterCommentDataItems:(id)arg1;
- (void)initializeCommentItemsWithFrameItem:(id)arg1 liveTaskId:(id)arg2;
- (id)cloneWithCommentItemsPrepended:(id)arg1;
- (id)fillerFrameFromCurrentKeyframe;
- (void)mergeWithFrame:(id)arg1;
- (void)appendCommentItemsWithMessageFrame:(id)arg1;
- (id)initWithFrameItem:(id)arg1 liveTaskId:(id)arg2 referenceLiveMicInfo:(id)arg3 referenceLiveRoomImages:(id)arg4;

@end

