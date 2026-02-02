//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MiniGameVideoShareHandler, NSMutableDictionary, NSString, WCTTable;

@interface MiniGameVideoService
{
    WCTTable *_miniGameVideoTable;
    NSMutableDictionary *_publishCallbackMap;
    NSMutableDictionary *_shareCacheMap;
    MiniGameVideoShareHandler *_shareHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MiniGameVideoShareHandler *shareHandler; // @synthesize shareHandler=_shareHandler;
@property(retain, nonatomic) NSMutableDictionary *shareCacheMap; // @synthesize shareCacheMap=_shareCacheMap;
@property(retain, nonatomic) NSMutableDictionary *publishCallbackMap; // @synthesize publishCallbackMap=_publishCallbackMap;
@property(retain, nonatomic) WCTTable *miniGameVideoTable; // @synthesize miniGameVideoTable=_miniGameVideoTable;
- (void)doMiniGameVideoReport:(id)arg1;
- (void)onPublishMiniGameVideoCancel:(id)arg1;
- (void)onPublishMiniGameVideoFaild:(id)arg1 errorMsg:(id)arg2;
- (void)onPublishMiniGameVideoSuccess:(id)arg1 needDelete:(_Bool)arg2;
- (void)reportLocalVideoToServerWithOpt:(int)arg1 andVideoIdList:(id)arg2;
- (void)reportAllLocalVideosToServer;
- (id)getGameCenterVideosPath;
- (id)getShareInfoByVideoPath:(id)arg1;
- (void)cacheShareInfoWithVideoFile:(id)arg1 shareUrl:(id)arg2 shareThumbUrl:(id)arg3;
- (id)getCurUserAllLocalMiniGameVideos;
- (id)getMiniGameVideoByVideoId:(id)arg1;
- (_Bool)deleteMiniGameVideoByVideoId:(id)arg1;
- (void)jumpMiniGameVideoManagePage;
- (_Bool)handleWebCallUploadVideoByVideoId:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)shareToGameCenterPublish:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)handleShareMiniGameVideo:(id)arg1 withParentVC:(id)arg2 shareType:(unsigned long long)arg3 callBack:(CDUnknownBlockType)arg4;
- (void)shareToFriendTimeline:(id)arg1 withParentVC:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)shareToFriend:(id)arg1 withParentVC:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)clearExpiredMiniGameVideos;
- (id)saveSingleVideoToGameCenterLocal:(id)arg1;
- (void)saveToGameCenterLocal:(id)arg1 maxNum:(int)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)onServiceTerminate;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

