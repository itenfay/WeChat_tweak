//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GroupNoticeItem, NSMutableArray, NSMutableSet, NSString;

@interface GroupNoticeUploadMgr
{
    GroupNoticeItem *_currentUploadItem;
    NSMutableSet *_uploadedDataList;
    NSMutableArray *_uploaderList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *uploaderList; // @synthesize uploaderList=_uploaderList;
@property(retain, nonatomic) NSMutableSet *uploadedDataList; // @synthesize uploadedDataList=_uploadedDataList;
@property(retain, nonatomic) GroupNoticeItem *currentUploadItem; // @synthesize currentUploadItem=_currentUploadItem;
- (void)notifyUploadItemSuccess:(_Bool)arg1;
- (void)onUploadGroupNoticeData:(id)arg1 finishedLength:(unsigned long long)arg2 totalLength:(unsigned long long)arg3;
- (void)onUploadGroupNoticeData:(id)arg1 retCode:(int)arg2;
- (void)checkUploaderList;
- (void)addDataToUploadList:(id)arg1 forItem:(id)arg2;
- (_Bool)tryFillUploadInfoFromUploadedList:(id)arg1;
- (_Bool)needUploadData:(id)arg1;
- (id)findUploaderByData:(id)arg1;
- (void)stopUploadData:(id)arg1;
- (void)uploadData:(id)arg1;
- (void)uploadItem:(id)arg1;
- (void)clean;
- (void)stopAllUpload;
- (_Bool)isUploading;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

