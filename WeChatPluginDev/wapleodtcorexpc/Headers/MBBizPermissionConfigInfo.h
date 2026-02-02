//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MBBizPermissionConfigInfo : NSObject
{
    unsigned int _maxNetWorkConcurrent;
    unsigned int _defaultTimeOut;
    unsigned long long _maxStorageSize;
    unsigned long long _maxNetWorkFileSizeLimit;
    unsigned long long _maxTempFileTotalSize;
    unsigned long long _maxTempFileSize;
    unsigned long long _minTempFileSize;
    unsigned long long _maxUsrFileSize;
}

@property(nonatomic) unsigned long long maxUsrFileSize; // @synthesize maxUsrFileSize=_maxUsrFileSize;
@property(nonatomic) unsigned long long minTempFileSize; // @synthesize minTempFileSize=_minTempFileSize;
@property(nonatomic) unsigned long long maxTempFileSize; // @synthesize maxTempFileSize=_maxTempFileSize;
@property(nonatomic) unsigned long long maxTempFileTotalSize; // @synthesize maxTempFileTotalSize=_maxTempFileTotalSize;
@property(nonatomic) unsigned int defaultTimeOut; // @synthesize defaultTimeOut=_defaultTimeOut;
@property(nonatomic) unsigned int maxNetWorkConcurrent; // @synthesize maxNetWorkConcurrent=_maxNetWorkConcurrent;
@property(nonatomic) unsigned long long maxNetWorkFileSizeLimit; // @synthesize maxNetWorkFileSizeLimit=_maxNetWorkFileSizeLimit;
@property(nonatomic) unsigned long long maxStorageSize; // @synthesize maxStorageSize=_maxStorageSize;
- (void)loadPermissionConfig:(id)arg1;
- (id)initWithDic:(id)arg1;

@end

