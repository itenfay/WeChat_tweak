//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MBFlattenedFileSystem
{
}

- (void)readFilesOfDirectoryAtPath:(id)arg1 localIDPrefix:(id)arg2 array:(id)arg3;
- (id)readHomeDir:(id)arg1;
- (_Bool)accept:(id)arg1;
- (_Bool)saveFile:(id)arg1 specifiedPath:(id)arg2 error:(id *)arg3;
- (_Bool)writeFile:(id)arg1 data:(id)arg2 isAppend:(_Bool)arg3 error:(id *)arg4;
- (_Bool)unzip:(id)arg1 targetDirectory:(id)arg2 native:(_Bool)arg3 error:(id *)arg4;
- (_Bool)unlink:(id)arg1 error:(id *)arg2;
- (id)readDir:(id)arg1 error:(id *)arg2;
- (void)dealloc;

@end

