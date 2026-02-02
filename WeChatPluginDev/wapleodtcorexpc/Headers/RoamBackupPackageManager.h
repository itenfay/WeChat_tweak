//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface RoamBackupPackageManager : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct RoamBackupPackageManagerCppCover cpp_cover;
    struct weak_ptr<affroam::RoamBackupPackageManagerDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)deletePackagesAsync:(id)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deletePackagesAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updatePackagesAsync:(id)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updatePackagesAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getPackageById:(unsigned long long)arg1;
- (void)getAllPackagesAsync:(_Bool)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getAllPackagesAsync:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createPackagesAsync:(id)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createPackagesAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)zidlObjToHolder;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_8c935b55)getDispatcher;

@end

