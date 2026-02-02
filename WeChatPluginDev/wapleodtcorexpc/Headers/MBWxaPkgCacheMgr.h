//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MBWxaPkgCacheLogic;

@interface MBWxaPkgCacheMgr : NSObject
{
    MBWxaPkgCacheLogic *pkgInfoCacheLogic;
}

- (void).cxx_destruct;
- (id)getLocalCacheDataWithFullUrl:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3 error:(id *)arg4 prefix:(id)arg5 suffix:(id)arg6;
- (id)getLocalCacheDataWithFullUrl:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3 error:(id *)arg4;
- (id)getLocalCacheDataWithFullUrl:(id)arg1 prefix:(id)arg2 suffix:(id)arg3;
- (id)getLocalCacheDataWithFullUrl:(id)arg1;
- (_Bool)hasLocalCacheDataWithFullUrl:(id)arg1;
- (struct stat)statWithFullUrl:(id)arg1 error:(id *)arg2;
- (id)contentsOfDirectoryWithFullUrl:(id)arg1 error:(id *)arg2;
- (_Bool)loadPkg:(id)arg1 bizName:(id)arg2;
- (void)dealloc;
- (id)initWithPkgPath:(id)arg1 bizName:(id)arg2;

@end

