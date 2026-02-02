//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface AffNewLifeExtraInfoManager : NSObject
{
    struct weak_ptr<zidl::ZClientInvoker> client_invoker_;
    NSMapTable *fetchJumpInfoCompleteEventMap;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getLocalJumpInfo:(id)arg1 scene:(int)arg2;
- (void)unSubscribeFetchJumpInfoCompleteEvent:(id)arg1;
- (void)subscribeFetchJumpInfoCompleteEvent:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (void)subscribeFetchJumpInfoCompleteEvent:(id)arg1 on:(id)arg2 eventBlock:(CDUnknownBlockType)arg3;
- (void)saveLocalExtraInfo:(id)arg1 feedId:(id)arg2 scene:(int)arg3;
- (void)fetchExtraInfo:(id)arg1;
- (id)zidlObjToHolder;
- (id)initForZidlPrivate;
- (void)zidlBuild;
- (shared_ptr_91287a9c)getClientInvoker;
- (void)attachClientInvoker:(const void *)arg1;

@end

