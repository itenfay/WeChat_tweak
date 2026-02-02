//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSURL;
@protocol WXGRoamCustomDiskBaseLogicDelegate;

@interface WXGRoamCustomDiskBaseLogic : NSObject
{
    id <WXGRoamCustomDiskBaseLogicDelegate> _delegate;
    NSURL *_curURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *curURL; // @synthesize curURL=_curURL;
@property(nonatomic) __weak id <WXGRoamCustomDiskBaseLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)uploadFileInner:(unsigned long long)arg1 processId:(long long)arg2 localPath:(id)arg3 remotePath:(id)arg4;
- (void)downloadFileInner:(unsigned long long)arg1 processId:(long long)arg2 remotePath:(id)arg3 localPath:(id)arg4;
- (void)fileStreamReadBeginInner:(unsigned long long)arg1 remotePath:(id)arg2 readSize:(unsigned long long)arg3;
- (void)fileStreamReadInner:(unsigned long long)arg1 context:(id)arg2 readSize:(unsigned long long)arg3;
- (void)createDirInner:(unsigned long long)arg1 dirPath:(id)arg2;
- (void)getDirsSizeAsync:(unsigned long long)arg1 dirPaths:(id)arg2;
- (void)getRoamDiskInfoInner:(unsigned long long)arg1;
- (void)getFileInfoListInner:(unsigned long long)arg1 parentPath:(id)arg2 recursiveDepth:(int)arg3;
- (void)getFileInfoInner:(unsigned long long)arg1 filePath:(id)arg2;
- (void)fileStreamWriteOnceInner:(unsigned long long)arg1 remotePath:(id)arg2 buf:(id)arg3;
- (void)fileStreamWriteInner:(unsigned long long)arg1 context:(id)arg2 buf:(id)arg3;
- (void)fileStreamWriteEndInner:(unsigned long long)arg1 context:(id)arg2 buf:(id)arg3;
- (void)fileStreamWriteBeginInner:(unsigned long long)arg1 remotePath:(id)arg2;
- (void)deleteFileListInner:(unsigned long long)arg1 filePathList:(id)arg2;
- (void)deleteFileInner:(unsigned long long)arg1 filePath:(id)arg2;
- (void)deleteDirInner:(unsigned long long)arg1 dirPath:(id)arg2;

@end

