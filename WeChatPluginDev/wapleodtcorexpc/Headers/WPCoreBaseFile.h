//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSFileHandle, NSString;

@interface WPCoreBaseFile : NSObject
{
    NSFileHandle *m_fhFile;
    NSString *m_nsFilePath;
    unsigned int m_uiMode;
    _Bool m_bOpen;
}

+ (_Bool)AppendData:(id)arg1 toPath:(id)arg2;
+ (_Bool)RemoveFile:(id)arg1;
+ (_Bool)CopyFile:(id)arg1 To:(id)arg2;
+ (_Bool)RenameFile:(id)arg1 To:(id)arg2;
+ (void)EnsureCreateParentDir:(id)arg1;
+ (_Bool)CreateFile:(id)arg1;
+ (_Bool)CreatePath:(id)arg1;
+ (id)LoadDataFromPathEx:(id)arg1 Offset:(unsigned long long)arg2 MaxLen:(unsigned long long)arg3;
+ (long long)GetFileSize:(id)arg1;
+ (_Bool)FileExist:(id)arg1;
- (void).cxx_destruct;
- (_Bool)WriteLargeData:(id)arg1;
- (_Bool)WriteData:(id)arg1;
- (unsigned long long)SeekToEndOfFile;
- (_Bool)Open;
- (_Bool)Seek:(long long)arg1;
- (_Bool)IsOpen;
- (_Bool)SetFileInfo:(id)arg1 Mode:(unsigned int)arg2;
- (_Bool)ReadData:(id)arg1 Len:(unsigned long long)arg2;
- (void)Close;

@end

