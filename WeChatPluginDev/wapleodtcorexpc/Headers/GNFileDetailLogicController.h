//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, GroupNoticeItem, GroupNoticeItemDataField, NSString;

@interface GNFileDetailLogicController
{
    GroupNoticeItem *m_downloadItem;
    GroupNoticeItem *_item;
    GroupNoticeItemDataField *_data;
    ForwardMessageLogicController *_forwardMsgLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ForwardMessageLogicController *forwardMsgLogic; // @synthesize forwardMsgLogic=_forwardMsgLogic;
@property(retain, nonatomic) GroupNoticeItemDataField *data; // @synthesize data=_data;
@property(retain, nonatomic) GroupNoticeItem *item; // @synthesize item=_item;
- (void)onForwardToContact:(id)arg1;
- (id)getCurrentViewController;
- (void)onGroupNoticeDownloadItem:(id)arg1 retCode:(int)arg2;
- (void)onGroupNoticeDownloadData:(id)arg1 retCode:(int)arg2;
- (void)onGroupNoticeDownloadData:(id)arg1 finishedLength:(unsigned long long)arg2 totalLength:(unsigned long long)arg3;
- (void)stopDownload;
- (_Bool)isDownloading;
- (void)startDownload;
- (_Bool)OnPreviewFile:(unsigned int)arg1;
- (id)getMusicLocalFileDataUnit;
- (unsigned long long)GetFileSize;
- (id)GetFilePath;
- (unsigned int)GetPreviewType;
- (id)GetFileName;
- (id)initWithItem:(id)arg1 fileData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

