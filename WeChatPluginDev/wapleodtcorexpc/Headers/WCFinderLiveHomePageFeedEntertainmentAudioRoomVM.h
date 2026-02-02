//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveAudioRoomBackgroundImageInfo, NSArray, NSString, WCFinderLiveHomePageFeedEntertainmentAudioRoomTalkingState;
@protocol WCFinderLiveHomePageFeedEntertainmentAudioRoomVMDelegate;

@interface WCFinderLiveHomePageFeedEntertainmentAudioRoomVM
{
    NSArray *_teamupList;
    NSArray *_notificationList;
    MMFinderLiveAudioRoomBackgroundImageInfo *_bgImageInfo;
    WCFinderLiveHomePageFeedEntertainmentAudioRoomTalkingState *_talkingStatus;
    NSString *_headImgUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl=_headImgUrl;
@property(retain, nonatomic) WCFinderLiveHomePageFeedEntertainmentAudioRoomTalkingState *talkingStatus; // @synthesize talkingStatus=_talkingStatus;
@property(retain, nonatomic) MMFinderLiveAudioRoomBackgroundImageInfo *bgImageInfo; // @synthesize bgImageInfo=_bgImageInfo;
@property(retain, nonatomic) NSArray *notificationList; // @synthesize notificationList=_notificationList;
@property(retain, nonatomic) NSArray *teamupList; // @synthesize teamupList=_teamupList;
- (void)onFeedEntertainmentCardUpdate:(unsigned long long)arg1 previewInfo:(id)arg2;
- (void)onFinderLiveAudioRoomBackgroundImageInfoUpdated:(id)arg1 originalUrlString:(id)arg2;
- (void)clearTalkingStatus;
- (void)updateOriginInfoItemList;
- (void)recvAnchorSeiInfo:(id)arg1;
- (void)loadBackgroundImageWithAvatarImage:(id)arg1 displayUrl:(id)arg2;
- (void)updatePreviewInfo:(id)arg1;
@property(readonly, nonatomic) NSString *title;
- (id)initWithModel:(id)arg1 scene:(int)arg2 sessionExtraKey:(id)arg3 containerId:(unsigned long long)arg4 ctx:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <WCFinderLiveHomePageFeedEntertainmentAudioRoomVMDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

