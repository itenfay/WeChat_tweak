//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSCache, NSString;

@interface AnimateEmojiCacheMgr
{
    unsigned int _realCacheCout;
    unsigned int _realCacheFrameCount;
    NSString *_currentRoomID;
    unsigned long long _lastMsgTime;
    unsigned long long _lastLocalID;
    NSCache *_cache;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int realCacheFrameCount; // @synthesize realCacheFrameCount=_realCacheFrameCount;
@property(nonatomic) unsigned int realCacheCout; // @synthesize realCacheCout=_realCacheCout;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
@property(nonatomic) unsigned long long lastLocalID; // @synthesize lastLocalID=_lastLocalID;
@property(nonatomic) unsigned long long lastMsgTime; // @synthesize lastMsgTime=_lastMsgTime;
@property(copy, nonatomic) NSString *currentRoomID; // @synthesize currentRoomID=_currentRoomID;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)recordCacheChange:(id)arg1 incr:(_Bool)arg2;
- (_Bool)isSameRoomID:(id)arg1;
- (void)onAddHistoryLastMsg:(id)arg1 roomID:(id)arg2;
- (void)onAddMsg:(id)arg1 roomID:(id)arg2;
- (void)onEixtRoom:(id)arg1;
- (void)onEnterRoom:(id)arg1;
- (id)animatedImageOfDecodedFrames:(id)arg1;
- (id)getAnimatedImage:(id)arg1;
- (id)getFramesForAnimateEmojiNode:(id)arg1;
- (_Bool)shouldAutoPlayAnimateEmoji:(id)arg1 roomID:(id)arg2;
- (void)onUpdateAnimateEmojiCheckPoint:(id)arg1 contact:(id)arg2 fromHistory:(_Bool)arg3;
- (void)onEndAnimateEmojiCheckPoint:(id)arg1;
- (void)onStartAnimateEmojiCheckPoint:(id)arg1;
- (void)onServiceMemoryWarning;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

