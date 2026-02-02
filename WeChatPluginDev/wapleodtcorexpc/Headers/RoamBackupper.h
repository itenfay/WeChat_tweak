//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface RoamBackupper : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct RoamBackupperCppCover cpp_cover;
    struct weak_ptr<affroam::RoamBackupperDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (int)setPackageFlags:(id)arg1;
- (id)getPackageFlags;
- (void)mediaLoaded:(unsigned long long)arg1 error:(int)arg2;
- (void)loadMediaAsync:(id)arg1 msgSvrId:(unsigned long long)arg2 msgCreateTime:(unsigned long long)arg3 mediaId:(id)arg4 on:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)loadMediaAsync:(id)arg1 msgSvrId:(unsigned long long)arg2 msgCreateTime:(unsigned long long)arg3 mediaId:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)getMediaIdListAsync:(id)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getMediaIdListAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopAutoBackupTimer;
- (void)setupAutoBackupEvent:(id)arg1;
- (void)deleteBackupDataAsync:(id)arg1 deleteAll:(_Bool)arg2 on:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteBackupDataAsync:(id)arg1 deleteAll:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getBackedUpConversationListAsync:(unsigned long long)arg1 toTime:(unsigned long long)arg2 on:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getBackedUpConversationListAsync:(unsigned long long)arg1 toTime:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)newRestoreTask:(id)arg1;
- (id)newBackupTask:(id)arg1;
- (id)getPackage;
- (int)initialize:(unsigned long long)arg1;
- (id)init;
- (id)zidlObjToHolder;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_acec5b40)getDispatcher;

@end

