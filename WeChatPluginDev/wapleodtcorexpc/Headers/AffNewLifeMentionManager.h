//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ConcurrentDictionary, NSMapTable;

@interface AffNewLifeMentionManager : NSObject
{
    struct weak_ptr<zidl::ZClientInvoker> client_invoker_;
    ConcurrentDictionary *initWithTaskIdConfigDirUinFinderUsernameClientVersionIsStandaloneIsDebugResetDataAdOpenBlockDict;
    NSMapTable *dataChangeEventMap;
    ConcurrentDictionary *insertBlockDict;
    ConcurrentDictionary *deleteByIdBlockDict;
    ConcurrentDictionary *updateByIdBlockDict;
    ConcurrentDictionary *getByIdBlockDict;
    ConcurrentDictionary *getBeforeTimeLimitBlockDict;
    ConcurrentDictionary *getAfterTimeCreateBlockDict;
    ConcurrentDictionary *getLastBufferBlockDict;
    ConcurrentDictionary *updateLastBufferBlockDict;
    ConcurrentDictionary *updateLastestMentionReadIdBlockDict;
    ConcurrentDictionary *getUnreadMentionListBlockDict;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)getUnreadMentionListAsync:(id)arg1 mentionType:(int)arg2 on:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getUnreadMentionListAsync:(id)arg1 mentionType:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateLastestMentionReadIdAsync:(id)arg1 mentionType:(int)arg2 id:(unsigned long long)arg3 on:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)updateLastestMentionReadIdAsync:(id)arg1 mentionType:(int)arg2 id:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateLastBufferAsync:(id)arg1 mentionType:(int)arg2 lastBuffer:(id)arg3 on:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)updateLastBufferAsync:(id)arg1 mentionType:(int)arg2 lastBuffer:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getLastBufferAsync:(id)arg1 mentionType:(int)arg2 on:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getLastBufferAsync:(id)arg1 mentionType:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getAfterTimeCreateAsync:(id)arg1 createTime:(int)arg2 id:(unsigned long long)arg3 on:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)getAfterTimeCreateAsync:(id)arg1 createTime:(int)arg2 id:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getBeforeTimeLimitAsync:(id)arg1 limit:(int)arg2 mentionType:(int)arg3 id:(unsigned long long)arg4 on:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)getBeforeTimeLimitAsync:(id)arg1 limit:(int)arg2 mentionType:(int)arg3 id:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)getByIdAsync:(id)arg1 id:(unsigned long long)arg2 on:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getByIdAsync:(id)arg1 id:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateByIdAsync:(id)arg1 mentionInfo:(id)arg2 id:(unsigned long long)arg3 on:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)updateByIdAsync:(id)arg1 mentionInfo:(id)arg2 id:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteByIdAsync:(id)arg1 id:(unsigned long long)arg2 on:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteByIdAsync:(id)arg1 id:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertAsync:(id)arg1 finderUsername:(id)arg2 on:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)insertAsync:(id)arg1 finderUsername:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unSubscribeDataChangeEvent:(id)arg1;
- (void)subscribeDataChangeEvent:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (void)subscribeDataChangeEvent:(id)arg1 on:(id)arg2 eventBlock:(CDUnknownBlockType)arg3;
- (void)initWithTaskIdConfigDirUinFinderUsernameClientVersionIsStandaloneIsDebugResetDataAdOpenAsync:(id)arg1 uin:(id)arg2 finderUsername:(id)arg3 clientVersion:(int)arg4 isStandalone:(_Bool)arg5 isDebug:(_Bool)arg6 resetData:(_Bool)arg7 adOpen:(_Bool)arg8 on:(id)arg9 completion:(CDUnknownBlockType)arg10;
- (void)initWithTaskIdConfigDirUinFinderUsernameClientVersionIsStandaloneIsDebugResetDataAdOpenAsync:(id)arg1 uin:(id)arg2 finderUsername:(id)arg3 clientVersion:(int)arg4 isStandalone:(_Bool)arg5 isDebug:(_Bool)arg6 resetData:(_Bool)arg7 adOpen:(_Bool)arg8 completion:(CDUnknownBlockType)arg9;
- (id)zidlObjToHolder;
- (id)initForZidlPrivate;
- (void)zidlBuild;
- (shared_ptr_91287a9c)getClientInvoker;
- (void)attachClientInvoker:(const void *)arg1;

@end

