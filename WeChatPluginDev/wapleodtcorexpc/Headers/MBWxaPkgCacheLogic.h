//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface MBWxaPkgCacheLogic : NSObject
{
    NSMutableDictionary *_dicCacheFileInfo;
    NSMutableSet *_setUnpackedPkgFilePath;
    long long _unpackTime;
    NSMutableDictionary *_dicCacheFileAccessedTimeRecord;
}

- (void).cxx_destruct;
- (long long)getAccessedTimeWithFullUrl:(id)arg1;
- (void)setAccessedTimeToCurrentTimeWithFullUrl:(id)arg1;
- (long long)getUnpackTime;
- (_Bool)isString:(id)arg1 inArray:(id)arg2;
- (id)contentsOfDirectoryWithFullUrl:(id)arg1 error:(id *)arg2;
- (id)getMBCacheFileInfoWithFullUrl:(id)arg1;
- (void)clearAllPkgInfo;
- (_Bool)unpackPkgFromPath:(id)arg1 bizName:(id)arg2;
- (_Bool)unpackPkgWithFilePath:(id)arg1 unpackLib:(void *)arg2;
- (void)dealloc;
- (id)init;

@end

