//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCRecursiveRunTask, NSMutableSet, NSString;

@interface GCGroupServer
{
    int _roomStatusLongPollingSeq;
    GCRecursiveRunTask *_updateGroupTask;
    NSMutableSet *_myChatRoomNameSet;
    NSString *_lastVersion;
    NSString *_getMoreChatRoomFilter;
    NSString *_previousMoreChatRoomFilter;
    CDUnknownBlockType _roomStatusUpdateBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType roomStatusUpdateBlock; // @synthesize roomStatusUpdateBlock=_roomStatusUpdateBlock;
@property(nonatomic) int roomStatusLongPollingSeq; // @synthesize roomStatusLongPollingSeq=_roomStatusLongPollingSeq;
@property(retain, nonatomic) NSString *previousMoreChatRoomFilter; // @synthesize previousMoreChatRoomFilter=_previousMoreChatRoomFilter;
@property(retain, nonatomic) NSString *getMoreChatRoomFilter; // @synthesize getMoreChatRoomFilter=_getMoreChatRoomFilter;
@property(retain, nonatomic) NSString *lastVersion; // @synthesize lastVersion=_lastVersion;
@property(retain, nonatomic) NSMutableSet *myChatRoomNameSet; // @synthesize myChatRoomNameSet=_myChatRoomNameSet;
@property(retain, nonatomic) GCRecursiveRunTask *updateGroupTask; // @synthesize updateGroupTask=_updateGroupTask;
- (void)onExitRoom;
- (id)recommCellModelFromChatRecInfo:(id)arg1;
- (void)fakeMoreGetMoreChatRoomResponse:(id)arg1;
- (void)getMoreChatRoom:(CDUnknownBlockType)arg1;
- (void)getCanJoinGroupWithLocation:(id)arg1 complectionBlock:(CDUnknownBlockType)arg2;
- (void)getFirstEnterInfoRequest:(id)arg1 complectionBlock:(CDUnknownBlockType)arg2;
- (void)didExitChatRoom:(id)arg1;
- (void)didJoinNewRoom:(id)arg1;
- (void)onRoomStatueUpdate:(id)arg1 delaySeconds:(double *)arg2;
- (void)requestRoomStatusWithTask:(id)arg1;
- (void)getAndUpdateMyChatRoomStatus:(CDUnknownBlockType)arg1;
- (id)init;

@end

