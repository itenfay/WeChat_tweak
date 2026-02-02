//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, QBASINetworkQueue;
@protocol OS_dispatch_queue;

@interface QBCommonFile : NSObject
{
    NSMutableDictionary *_fileListInfoDic;
    NSMutableDictionary *_fileObserverInfo;
    QBASINetworkQueue *_networkQueue;
    long long _fileCountForDownload;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)md5WithModuleName:(id)arg1;
+ (_Bool)shouldDownloadFiles;
+ (void)listenOnUpdateForFile:(id)arg1 withNotificationName:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
+ (void)downloadFilesWithModuleName:(id)arg1;
+ (id)sharedInstance;
@property(retain) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) long long fileCountForDownload; // @synthesize fileCountForDownload=_fileCountForDownload;
@property(retain) QBASINetworkQueue *networkQueue; // @synthesize networkQueue=_networkQueue;
@property(retain, nonatomic) NSMutableDictionary *fileObserverInfo; // @synthesize fileObserverInfo=_fileObserverInfo;
@property(retain, nonatomic) NSMutableDictionary *fileListInfoDic; // @synthesize fileListInfoDic=_fileListInfoDic;
- (void).cxx_destruct;
- (void)commonFileGetFailed:(id)arg1;
- (void)commonFileGetComplete:(id)arg1;
- (void)notifyTheObserverWithFileName:(id)arg1;
- (void)filesDownloadDidFinished;
- (id)md5ForData:(id)arg1;
- (void)removeSnapshotWithFileName:(id)arg1;
- (void)downloadCommonFiles;
- (_Bool)saveFileInfoSnapshot:(id)arg1;
- (id)fileInfoSnapshot;
- (id)filePathWithName:(id)arg1;
- (id)fileInfoArrayWithModuleName:(id)arg1;
- (void)saveCommonFilesWithRsp:(id)arg1;
- (_Bool)saveFileListInfo;
- (id)init;

@end

