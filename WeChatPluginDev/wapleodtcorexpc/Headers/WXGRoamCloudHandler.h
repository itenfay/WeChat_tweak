//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CKContainer, CKDatabase, NSString;
@protocol WXGRoamCloudHandlerDelegate;

@interface WXGRoamCloudHandler : NSObject
{
    CKContainer *_container;
    CKDatabase *_database;
    id <WXGRoamCloudHandlerDelegate> _delegate;
    NSString *_ilinkUserId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *ilinkUserId; // @synthesize ilinkUserId=_ilinkUserId;
@property(nonatomic) __weak id <WXGRoamCloudHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)handlerRemotePath:(id)arg1;
- (id)mergePath:(id)arg1 withFileName:(id)arg2;
- (void)saveRecordInner:(id)arg1 invokeID:(unsigned long long)arg2 localPath:(id)arg3;
- (void)uploadFileInner:(unsigned long long)arg1 localPath:(id)arg2 pathInfo:(id)arg3 zoneID:(id)arg4;
- (void)getFileListInnerRecord:(unsigned long long)arg1 pathInfo:(id)arg2 cursor:(id)arg3 results:(id)arg4 parentPath:(id)arg5;
- (void)getFileListInnerZone:(unsigned long long)arg1 pathInfo:(id)arg2 cursor:(id)arg3 results:(id)arg4 parentPath:(id)arg5;
- (void)cloudDeleteFileList:(unsigned long long)arg1 remotePathList:(id)arg2;
- (void)cloudDeleteFile:(unsigned long long)arg1 remotePath:(id)arg2;
- (void)cloudDownloadFile:(unsigned long long)arg1 remotePath:(id)arg2 localPath:(id)arg3;
- (void)cloudUploadFile:(unsigned long long)arg1 remotePath:(id)arg2 localPath:(id)arg3;
- (void)cloudGetFileList:(unsigned long long)arg1 parentPath:(id)arg2 recursive:(_Bool)arg3;
- (void)cloudGetFileInfo:(unsigned long long)arg1 remotePath:(id)arg2;
- (id)init;

@end

