//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAttach, ForwardMessageLogicController, MMUIViewController, NSString;
@protocol MailAttachDelegate;

@interface MailAttachDetailLogicController
{
    CAttach *m_oAttach;
    unsigned int m_uiStartPos;
    unsigned int m_uiDataLen;
    unsigned int m_uiEventID;
    ForwardMessageLogicController *m_forwardLogic;
    MMUIViewController *m_fileDetailViewController;
    _Bool m_bDownloading;
    NSString *m_nsMailID;
    id <MailAttachDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MailAttachDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *m_nsMailID; // @synthesize m_nsMailID;
@property(retain, nonatomic) CAttach *m_oAttach; // @synthesize m_oAttach;
- (void)stopDownloadAppMsgByUser;
- (_Bool)configWithMinimizeData:(id)arg1;
- (id)getMinimizeTaskData;
- (_Bool)isMinimizeEnable;
- (id)getCurrentViewController;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)getMsgUiDownloadStatus;
- (id)getMusicLocalFileDataUnit;
- (id)GetFileName;
- (id)GetTmpFilePath;
- (id)GetFilePath;
- (unsigned long long)GetTempSize;
- (unsigned long long)GetFileSize;
- (unsigned int)GetPreviewType;
- (_Bool)canAddToFavorites;
- (_Bool)autoDownload;
- (_Bool)isDownloading;
- (id)generateFavoriteItem;
- (void)onForwardToContact:(id)arg1;
- (_Bool)OnPreviewFile:(unsigned int)arg1;
- (void)checkIsFileExistInSvr;
- (void)stopDownload;
- (void)startDownload;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

