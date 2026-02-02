//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WAWebLocalStorage : NSObject
{
}

+ (unsigned long long)ceilToKBWithByte:(unsigned long long)arg1;
+ (_Bool)getStorageSizeWithAppID:(id)arg1 currentSize:(unsigned long long *)arg2 error:(id *)arg3;
+ (_Bool)getStorageInfoWithAppID:(id)arg1 storageId:(int)arg2 forKeys:(id *)arg3 currentSize:(unsigned long long *)arg4 limitSize:(unsigned long long *)arg5 error:(id *)arg6;
+ (unsigned long long)maxItemLengthWithAppID:(id)arg1;
+ (unsigned long long)maxStorageLengthWithAppID:(id)arg1 storageId:(int)arg2;
+ (void)clearDataWithAppID:(id)arg1 storageId:(int)arg2;
+ (_Bool)removeDataWithKey:(id)arg1 storageId:(int)arg2 appID:(id)arg3 getError:(id *)arg4;
+ (_Bool)batchSetDataList:(id)arg1 dataTypeList:(id)arg2 withKeyList:(id)arg3 storageId:(int)arg4 appID:(id)arg5 getError:(id *)arg6;
+ (_Bool)setData:(id)arg1 dataType:(id)arg2 withKey:(id)arg3 storageId:(int)arg4 appID:(id)arg5 getError:(id *)arg6;
+ (void)batchGetDataList:(id *)arg1 dataTypeList:(id *)arg2 withKeyList:(id)arg3 storageId:(int)arg4 appID:(id)arg5;
+ (void)getData:(id *)arg1 dataType:(id *)arg2 withKey:(id)arg3 storageId:(int)arg4 appID:(id)arg5;
+ (id)getQueue;

@end

