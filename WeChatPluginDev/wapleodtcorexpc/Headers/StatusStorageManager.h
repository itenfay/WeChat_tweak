//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ConcurrentDictionary, NSMapTable;

@interface StatusStorageManager : NSObject
{
    struct weak_ptr<zidl::ZClientInvoker> client_invoker_;
    ConcurrentDictionary *testBlockDict;
    ConcurrentDictionary *cleanExpireDBBlockDict;
    NSMapTable *statusInfoChangeEventMap;
    NSMapTable *statusCommentChangeEventMap;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)unSubscribeStatusCommentChangeEvent:(id)arg1;
- (void)subscribeStatusCommentChangeEvent:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (void)subscribeStatusCommentChangeEvent:(id)arg1 on:(id)arg2 eventBlock:(CDUnknownBlockType)arg3;
- (void)unSubscribeStatusInfoChangeEvent:(id)arg1;
- (void)subscribeStatusInfoChangeEvent:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (void)subscribeStatusInfoChangeEvent:(id)arg1 on:(id)arg2 eventBlock:(CDUnknownBlockType)arg3;
- (int)getKV:(id)arg1 defValue:(int)arg2;
- (_Bool)setKV:(id)arg1 value:(int)arg2;
- (id)updateStatusPrivateData:(id)arg1 privateInfoData:(id)arg2;
- (id)updateStatusInteractData:(id)arg1 interactData:(id)arg2;
- (id)deleteTempStatusInfo:(id)arg1 createTime:(long long)arg2 sequence:(int)arg3;
- (id)deleteStatusInfoWithUsername:(id)arg1 sequence:(int)arg2;
- (id)deleteStatusInfoWithId:(id)arg1 sequence:(int)arg2;
- (id)selectStatusInfo:(id)arg1;
- (id)selectStatusInfoWithId:(id)arg1;
- (id)selectStatusInfoWithUsername:(id)arg1 offset:(int)arg2 count:(int)arg3 timeMsLimit:(long long)arg4;
- (id)insertOrReplaceInfo:(id)arg1;
- (void)cleanExpireDBAsync:(long long)arg1 deleteFlag:(_Bool)arg2 keepSelf:(_Bool)arg3 on:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)cleanExpireDBAsync:(long long)arg1 deleteFlag:(_Bool)arg2 keepSelf:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateConfig:(id)arg1;
- (id)getAllCacheStatsInfo;
- (void)constructStatusInfoCache;
- (void)initWithRootDirUserNameClientVersionIsDebug:(id)arg1 userName:(id)arg2 clientVersion:(int)arg3 isDebug:(_Bool)arg4;
- (void)testAsync:(id)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)testAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)zidlObjToHolder;
- (id)initForZidlPrivate;
- (void)zidlBuild;
- (shared_ptr_91287a9c)getClientInvoker;
- (void)attachClientInvoker:(const void *)arg1;

@end

