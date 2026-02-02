//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSFileHandle, NSString;

@interface CBaseFile : NSObject
{
    NSFileHandle *m_fhFile;
    NSString *m_nsFilePath;
    unsigned int m_uiMode;
    _Bool m_bOpen;
}

+ (void)tryRemoveDirectoryProtection:(id)arg1;
+ (_Bool)tryRemoveFileProtection:(id)arg1;
+ (_Bool)tryResetFileProtection:(id)arg1;
+ (id)GetDataSHA256:(id)arg1;
+ (id)GetFileSHA256:(id)arg1;
+ (id)GetDataSHA1:(id)arg1;
+ (id)GetFileSHA1:(id)arg1;
+ (id)GetDataMD5:(id)arg1;
+ (id)GetFileMD5:(id)arg1;
+ (_Bool)IsFile:(id)arg1 newerThanFile:(id)arg2;
+ (id)GetFileCreateTime:(id)arg1;
+ (_Bool)SysAppendData:(id)arg1 toPath:(id)arg2;
+ (_Bool)SysOverWriteDataToPath:(id)arg1 Data:(id)arg2;
+ (_Bool)OverWriteDataToPath:(id)arg1 Data:(id)arg2;
+ (_Bool)AppendData:(id)arg1 toPath:(id)arg2;
+ (_Bool)WriteDataToPath:(id)arg1 Offset:(unsigned long long)arg2 Data:(id)arg3;
+ (id)LoadDataFromPathEx:(id)arg1 Offset:(unsigned long long)arg2 MaxLen:(unsigned int)arg3;
+ (id)LoadDataFromPath:(id)arg1 Offset:(unsigned long long)arg2 Len:(unsigned int)arg3;
+ (_Bool)CreateSymbolLink:(id)arg1 LinkName:(id)arg2;
+ (void)ClearPath:(id)arg1 WithOut:(id)arg2;
+ (void)SyncClearPath:(id)arg1;
+ (void)ClearPath:(id)arg1;
+ (_Bool)RemoveFile:(id)arg1;
+ (_Bool)LoadSubFolders:(id)arg1 SubFiles:(id)arg2 fromFolderPath:(id)arg3;
+ (id)SubFilesName:(id)arg1;
+ (id)SubFilesRecursively:(id)arg1;
+ (id)SubFoldersName:(id)arg1;
+ (long long)FolderSizeAtPath:(const char *)arg1;
+ (long long)GetFileSize:(id)arg1;
+ (long long)GetFileLastTimeOfAccessModifyChangeBirth:(id)arg1;
+ (long long)GetFileModifyTime:(id)arg1;
+ (_Bool)FileExist:(id)arg1;
+ (_Bool)HardLinkFile:(id)arg1 To:(id)arg2;
+ (_Bool)File:(id)arg1 inodeSameWith:(id)arg2;
+ (_Bool)FileIsHardLink:(id)arg1;
+ (_Bool)CopyFile:(id)arg1 To:(id)arg2;
+ (_Bool)SafeRenameFiles:(id)arg1 error:(id *)arg2;
+ (_Bool)SafeRenameFiles:(id)arg1;
+ (_Bool)SwapFile:(id)arg1 withFile:(id)arg2;
+ (_Bool)RenameFile:(id)arg1 To:(id)arg2;
+ (void)EnsureCreateParentDir:(id)arg1;
+ (_Bool)CreatePath:(id)arg1;
+ (_Bool)CreateFile:(id)arg1;
+ (int)BlockSizeForIO;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSFileHandle *m_fhFile; // @synthesize m_fhFile;
@property(retain, nonatomic) NSString *m_nsFilePath; // @synthesize m_nsFilePath;
- (_Bool)WriteLargeData:(id)arg1;
- (_Bool)WriteData:(id)arg1;
- (_Bool)ReadData:(id *)arg1 Len:(unsigned int)arg2;
- (unsigned long long)SeekToEndOfFile;
- (_Bool)Seek:(long long)arg1;
- (_Bool)SetFileSize:(long long)arg1;
- (void)Close;
- (_Bool)OpenWithFd:(int)arg1;
- (_Bool)Open;
- (_Bool)IsOpen;
- (_Bool)SetFileInfo:(id)arg1 Mode:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

@end

