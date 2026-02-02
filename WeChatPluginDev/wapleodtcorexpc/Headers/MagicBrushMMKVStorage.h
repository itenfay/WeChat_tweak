//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MemoryMappedKV, NSString;

@interface MagicBrushMMKVStorage : NSObject
{
    NSString *_mBizName;
    MemoryMappedKV *_mMemoryMappedKV;
    unsigned long long _mMaxStorageSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long mMaxStorageSize; // @synthesize mMaxStorageSize=_mMaxStorageSize;
@property(retain, nonatomic) MemoryMappedKV *mMemoryMappedKV; // @synthesize mMemoryMappedKV=_mMemoryMappedKV;
@property(copy, nonatomic) NSString *mBizName; // @synthesize mBizName=_mBizName;
- (id)splitValue:(id)arg1;
- (long long)getTotalDataSize;
- (void)setTotalDataSize:(id)arg1 size:(long long)arg2;
- (long long)appendTotalDataSize:(long long)arg1;
- (long long)getQuota;
- (_Bool)willReachQuota:(long long)arg1;
- (long long)getDataSize:(id)arg1;
- (long long)calculateDataSize:(id)arg1 data:(id)arg2;
- (id)setInner:(id)arg1 data:(id)arg2 dataType:(id)arg3 dataSize:(long long)arg4 checkQuota:(_Bool)arg5;
- (void)clear;
- (id)remove:(id)arg1;
- (id)set:(id)arg1 data:(id)arg2 dataType:(id)arg3;
- (id)get:(id)arg1;
- (id)getAllKeys;
- (id)initWithBizName:(id)arg1 bizName:(id)arg2 prefix:(id)arg3;

@end

