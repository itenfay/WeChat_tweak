//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QSSZipArchive : NSObject
{
    NSString *_path;
    void *_zip;
}

+ (id)_dateWithMSDOSFormat:(unsigned int)arg1;
+ (id)_gregorian;
+ (void)zipInfo:(CDStruct_91b80c38 *)arg1 setDate:(id)arg2;
+ (void)zipInfo:(CDStruct_91b80c38 *)arg1 setAttributesOfItemAtPath:(id)arg2;
+ (id)_filenameStringWithCString:(const char *)arg1 size:(unsigned short)arg2;
+ (_Bool)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2 keepParentDirectory:(_Bool)arg3 compressionLevel:(int)arg4 password:(id)arg5 AES:(_Bool)arg6 progressHandler:(CDUnknownBlockType)arg7;
+ (_Bool)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2 keepParentDirectory:(_Bool)arg3 withPassword:(id)arg4 andProgressHandler:(CDUnknownBlockType)arg5;
+ (_Bool)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2 keepParentDirectory:(_Bool)arg3 withPassword:(id)arg4;
+ (_Bool)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2 withPassword:(id)arg3;
+ (_Bool)createZipFileAtPath:(id)arg1 withFilesAtPaths:(id)arg2 withPassword:(id)arg3;
+ (_Bool)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2 keepParentDirectory:(_Bool)arg3;
+ (_Bool)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2;
+ (_Bool)createZipFileAtPath:(id)arg1 withFilesAtPaths:(id)arg2;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 preserveAttributes:(_Bool)arg3 overwrite:(_Bool)arg4 security:(_Bool)arg5 nestedZipLevel:(long long)arg6 password:(id)arg7 error:(id *)arg8 delegate:(id)arg9 progressHandler:(CDUnknownBlockType)arg10 completionHandler:(CDUnknownBlockType)arg11;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 preserveAttributes:(_Bool)arg3 overwrite:(_Bool)arg4 security:(_Bool)arg5 password:(id)arg6 error:(id *)arg7 delegate:(id)arg8 progressHandler:(CDUnknownBlockType)arg9 completionHandler:(CDUnknownBlockType)arg10;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 preserveAttributes:(_Bool)arg3 overwrite:(_Bool)arg4 security:(_Bool)arg5 password:(id)arg6 error:(id *)arg7 delegate:(id)arg8;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(_Bool)arg3 password:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(_Bool)arg3 password:(id)arg4 error:(id *)arg5 delegate:(id)arg6;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 delegate:(id)arg3;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(_Bool)arg3 password:(id)arg4 error:(id *)arg5;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2;
+ (_Bool)isPasswordValidForArchiveAtPath:(id)arg1 password:(id)arg2 error:(id *)arg3;
+ (_Bool)isFilePasswordProtectedAtPath:(id)arg1;
- (void).cxx_destruct;
- (_Bool)close;
- (_Bool)writeData:(id)arg1 filename:(id)arg2 compressionLevel:(int)arg3 password:(id)arg4 AES:(_Bool)arg5;
- (_Bool)writeData:(id)arg1 filename:(id)arg2 withPassword:(id)arg3;
- (_Bool)writeFileAtPath:(id)arg1 withFileName:(id)arg2 compressionLevel:(int)arg3 password:(id)arg4 AES:(_Bool)arg5;
- (_Bool)writeFileAtPath:(id)arg1 withFileName:(id)arg2 withPassword:(id)arg3;
- (_Bool)writeFile:(id)arg1 withPassword:(id)arg2;
- (_Bool)writeFolderAtPath:(id)arg1 withFolderName:(id)arg2 withPassword:(id)arg3;
- (_Bool)open;
- (id)initWithPath:(id)arg1;
- (id)init;

@end

