//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, OrderedDictionary, PreloadMsgInfoGenerator;
@protocol MsgLoaderLogicDelegate, OS_dispatch_queue;

@interface BaseMsgLoaderLogic : NSObject
{
    int m_queryCount;
    int m_hitPreloadCount;
    int m_hitDownPreloadCount;
    struct _opaque_pthread_mutex_t m_dataLock;
    id <MsgLoaderLogicDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_preloadQueue;
    OrderedDictionary *_preloadMsgInfos;
    PreloadMsgInfoGenerator *_preloadGenerator;
    NSObject<OS_dispatch_queue> *_downPreloadQueue;
    OrderedDictionary *_downPreloadMsgInfos;
    PreloadMsgInfoGenerator *_downPreloadGenerator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PreloadMsgInfoGenerator *downPreloadGenerator; // @synthesize downPreloadGenerator=_downPreloadGenerator;
@property(retain, nonatomic) OrderedDictionary *downPreloadMsgInfos; // @synthesize downPreloadMsgInfos=_downPreloadMsgInfos;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *downPreloadQueue; // @synthesize downPreloadQueue=_downPreloadQueue;
@property(retain, nonatomic) PreloadMsgInfoGenerator *preloadGenerator; // @synthesize preloadGenerator=_preloadGenerator;
@property(retain, nonatomic) OrderedDictionary *preloadMsgInfos; // @synthesize preloadMsgInfos=_preloadMsgInfos;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *preloadQueue; // @synthesize preloadQueue=_preloadQueue;
@property(nonatomic) __weak id <MsgLoaderLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)onExitBaseMsgSession:(id)arg1;
- (void)onEnterBaseMsgSession:(id)arg1;
- (void)removeDownPreloadMsgInfosBeforeLocalId:(unsigned int)arg1 createTime:(unsigned int)arg2 sequence:(unsigned int)arg3;
- (void)insertDownPreloadMsgInfo:(id)arg1 viewModel:(id)arg2;
- (void)generateNewDownPreloadMsgInfosInMainThreadFromMessageArray:(id)arg1;
- (id)generateNewDownPreloadMsgInfosFromMessageArray:(id)arg1;
- (void)downPreloadWithMessageArray:(id)arg1;
- (id)getNextDownPreloadInfoWithLocalId:(unsigned int)arg1 createTime:(unsigned int)arg2 sequence:(unsigned int)arg3;
- (void)removePreloadMsgInfosAfterLocalId:(unsigned int)arg1 createTime:(unsigned int)arg2 sequence:(unsigned int)arg3;
- (void)insertPreloadMsgInfo:(id)arg1 viewModel:(id)arg2;
- (void)generateNewPreloadMsgInfosInMainThreadFromMessageArray:(id)arg1;
- (id)generateNewPreloadMsgInfosFromMessageArray:(id)arg1;
- (void)preloadWithMessageArray:(id)arg1;
- (id)getNextPreloadInfoWithLocalId:(unsigned int)arg1 createTime:(unsigned int)arg2 sequence:(unsigned int)arg3;
- (void)clearCache;
- (void)downPreload;
- (void)preload;
- (id)getViewModelWithMsgWrap:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

