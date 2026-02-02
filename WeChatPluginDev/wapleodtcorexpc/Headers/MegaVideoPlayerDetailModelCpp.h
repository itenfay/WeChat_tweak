//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MegaVideoPlayerDetailModelCpp
{
}

+ (id)createListModel:(int)arg1 feed:(id)arg2 channel:(id)arg3 commentScene:(int)arg4;
+ (id)createModel:(id)arg1 model:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)setNextListModel:(id)arg1;
- (id)nextListModel;
- (id)listModel;
- (id)playingListModel;
- (int)playingListType;
- (id)nextFeed;
- (id)nextFeedId;
- (void)setPlayingFeed:(id)arg1;
- (id)playingFeed;
- (id)playingFeedId;
- (id)currentChannelId;
- (id)currentChannel;
- (long long)currentPlayerId;
- (void)updateCurrentPlayerId:(long long)arg1;
- (void)setPlaySessionId:(id)arg1;
- (id)playSessionId;
- (int)commentScene;
- (id)genOpenParams;
- (void)setOpenParams:(id)arg1;
- (id)openParams;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

