//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MBNonFlattenedFileSystem
{
    NSString *mBizName;
    NSString *mPathPrefix;
}

- (void).cxx_destruct;
- (id)traversePath:(id)arg1;
- (_Bool)accept:(id)arg1;
- (_Bool)saveFile:(id)arg1 specifiedPath:(id)arg2 error:(id *)arg3;
- (_Bool)writeFile:(id)arg1 data:(id)arg2 isAppend:(_Bool)arg3 error:(id *)arg4;
- (id)readFile:(id)arg1 position:(long long)arg2 length:(long long)arg3 error:(id *)arg4;
- (_Bool)unzip:(id)arg1 targetDirectory:(id)arg2 native:(_Bool)arg3 error:(id *)arg4;
- (_Bool)unlink:(id)arg1 error:(id *)arg2;
- (id)stat:(id)arg1 recursive:(_Bool)arg2 error:(id *)arg3;
- (id)readDir:(id)arg1 error:(id *)arg2;
- (_Bool)rmdir:(id)arg1 recursive:(_Bool)arg2 native:(_Bool)arg3 error:(id *)arg4;
- (_Bool)mkdir:(id)arg1 recursive:(_Bool)arg2 error:(id *)arg3;
- (_Bool)access:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithPkgPath:(id)arg1 prefix:(id)arg2;

@end

