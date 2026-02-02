//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CustomRoamDiskCallback, NSArray, NSData, NSString;

@protocol CustomRoamDiskBase <NSObject>

@optional
- (void)fileStreamReadAsync:(unsigned long long)arg1 context:(NSString *)arg2 readSize:(unsigned long long)arg3;
- (void)fileStreamReadBeginAsync:(unsigned long long)arg1 remotePath:(NSString *)arg2 readSize:(unsigned long long)arg3;
- (void)fileStreamWriteEndAsync:(unsigned long long)arg1 context:(NSString *)arg2 buf:(NSData *)arg3;
- (void)fileStreamWriteAsync:(unsigned long long)arg1 context:(NSString *)arg2 buf:(NSData *)arg3;
- (void)fileStreamWriteBeginAsync:(unsigned long long)arg1 remotePath:(NSString *)arg2;
- (void)fileStreamWriteOnceAsync:(unsigned long long)arg1 remotePath:(NSString *)arg2 buf:(NSData *)arg3;
- (void)downloadFileAsync:(unsigned long long)arg1 invokeId:(unsigned long long)arg2 remotePath:(NSString *)arg3 localPath:(NSString *)arg4;
- (void)uploadFileAsync:(unsigned long long)arg1 invokeId:(unsigned long long)arg2 localPath:(NSString *)arg3 remotePath:(NSString *)arg4;
- (void)deleteDirAsync:(unsigned long long)arg1 dirPath:(NSString *)arg2;
- (void)createDirAsync:(unsigned long long)arg1 dirPath:(NSString *)arg2;
- (void)deleteFileListAsync:(unsigned long long)arg1 filePathList:(NSArray *)arg2;
- (void)deleteFileAsync:(unsigned long long)arg1 filePath:(NSString *)arg2;
- (void)getDirsSizeAsync:(unsigned long long)arg1 dirPaths:(NSArray *)arg2;
- (void)getFileInfoAsync:(unsigned long long)arg1 filePath:(NSString *)arg2;
- (void)getFileInfoListAsync:(unsigned long long)arg1 parentPath:(NSString *)arg2 recursiveDepth:(int)arg3;
- (void)getRoamDiskInfoAsync:(unsigned long long)arg1;
- (void)uninitAsync:(unsigned long long)arg1;
- (void)initializeAsync:(unsigned long long)arg1 commonInfo:(NSData *)arg2 specialInfoPb:(NSData *)arg3;
- (void)setCallback:(CustomRoamDiskCallback *)arg1;
@end

