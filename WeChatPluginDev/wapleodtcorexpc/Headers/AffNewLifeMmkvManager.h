//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface AffNewLifeMmkvManager : NSObject
{
    struct weak_ptr<zidl::ZClientInvoker> client_invoker_;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)getBoolSync:(id)arg1 key:(id)arg2 defValue:(_Bool)arg3;
- (_Bool)setBoolSync:(id)arg1 key:(id)arg2 value:(_Bool)arg3;
- (unsigned long long)getLongSync:(id)arg1 key:(id)arg2 defValue:(unsigned long long)arg3;
- (_Bool)setLongSync:(id)arg1 key:(id)arg2 value:(unsigned long long)arg3;
- (int)getInt32Sync:(id)arg1 key:(id)arg2 defValue:(int)arg3;
- (_Bool)setInt32Sync:(id)arg1 key:(id)arg2 value:(int)arg3;
- (id)getStringSync:(id)arg1 key:(id)arg2 defValue:(id)arg3;
- (_Bool)setStringSync:(id)arg1 key:(id)arg2 value:(id)arg3;
- (unsigned long long)getPrepareAttr:(id)arg1 defValue:(unsigned long long)arg2;
- (_Bool)savePrepareAttr:(id)arg1 flag:(unsigned long long)arg2;
- (id)getNewLifeConfig;
- (_Bool)updateNewLifeConfig:(id)arg1;
- (id)zidlObjToHolder;
- (id)initForZidlPrivate;
- (void)zidlBuild;
- (shared_ptr_91287a9c)getClientInvoker;
- (void)attachClientInvoker:(const void *)arg1;

@end

