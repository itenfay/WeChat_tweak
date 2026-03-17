//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSData, NSString;
@protocol MegaVideoFeedFlowModel, MegaVideoPlayerDetailModelListener;

@protocol MegaVideoPlayerDetailModel <NSObject, UnitRCBaseProtocol>
- (void)removeListener:(id <MegaVideoPlayerDetailModelListener>)arg1;
- (void)addListener:(id <MegaVideoPlayerDetailModelListener>)arg1;
- (void)setNextListModel:(id <MegaVideoFeedFlowModel>)arg1;
- (id <MegaVideoFeedFlowModel>)nextListModel;
- (id <MegaVideoFeedFlowModel>)listModel;
- (id <MegaVideoFeedFlowModel>)playingListModel;
- (int)playingListType;
- (NSData *)nextFeed;
- (NSString *)nextFeedId;
- (void)setPlayingFeed:(NSData *)arg1;
- (NSData *)playingFeed;
- (NSString *)playingFeedId;
- (NSString *)currentChannelId;
- (NSData *)currentChannel;
- (long long)currentPlayerId;
- (void)updateCurrentPlayerId:(long long)arg1;
- (void)setPlaySessionId:(NSString *)arg1;
- (NSString *)playSessionId;
- (int)commentScene;
- (NSData *)genOpenParams;
- (void)setOpenParams:(NSData *)arg1;
- (NSData *)openParams;
@end

