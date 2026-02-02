//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MBWxaPkgCacheMgr, NSString;

@interface MBWxaPkgFileSystem
{
    MBWxaPkgCacheMgr *pkgInfoCacheMgr;
    NSString *_mBizName;
    NSString *_mPath;
    NSString *_mPrefix;
    NSString *_mKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *mKey; // @synthesize mKey=_mKey;
@property(copy, nonatomic) NSString *mPrefix; // @synthesize mPrefix=_mPrefix;
@property(copy, nonatomic) NSString *mPath; // @synthesize mPath=_mPath;
@property(copy, nonatomic) NSString *mBizName; // @synthesize mBizName=_mBizName;
- (id)traversePath:(id)arg1;
- (_Bool)accept:(id)arg1;
- (_Bool)writeFile:(id)arg1 data:(id)arg2 isAppend:(_Bool)arg3 error:(id *)arg4;
- (id)readFile:(id)arg1 position:(long long)arg2 length:(long long)arg3 error:(id *)arg4;
- (_Bool)unlink:(id)arg1 error:(id *)arg2;
- (id)stat:(id)arg1 recursive:(_Bool)arg2 error:(id *)arg3;
- (id)readDir:(id)arg1 error:(id *)arg2;
- (_Bool)access:(id)arg1 error:(id *)arg2;
- (_Bool)loadPkg:(id)arg1;
- (void)dealloc;
- (id)initWithPkgPath:(id)arg1 bizName:(id)arg2 prefix:(id)arg3;

@end

