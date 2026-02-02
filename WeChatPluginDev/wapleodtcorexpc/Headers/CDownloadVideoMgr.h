//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, NSMutableArray;

@interface CDownloadVideoMgr : NSObject
{
    NSMutableArray *m_arrDownloadList;
    NSMutableArray *m_arrDownloadStatList;
    CMessageWrap *m_wrapCurDownloadMsg;
    unsigned int m_uiCurDownloadEventID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *m_wrapCurDownloadMsg; // @synthesize m_wrapCurDownloadMsg;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnDownloadPartOK:(id)arg1 messageWrap:(id)arg2;
- (_Bool)CheckDownloadPart:(id)arg1 messageWrap:(id)arg2;
- (void)OnDownloadPartFail:(id)arg1 RetCode:(int)arg2;
- (id)getDownloadingMesageWrap:(id)arg1;
- (void)StopDownloadByChatName:(id)arg1;
- (void)StopDownload:(id)arg1 MsgWrap:(id)arg2;
- (void)interStopDownload:(id)arg1;
- (void)StartDownload:(id)arg1 MsgWrap:(id)arg2;
- (id)GetMsg:(id)arg1;
- (_Bool)IsMsgInDownloadQueue:(id)arg1;
- (void)downloadVideo:(id)arg1;
- (_Bool)createDownloadEvent:(id)arg1;
- (void)Stop;
- (void)StopCurrentDownload;
- (void)resetCurrentDownloadStatus;
- (unsigned int)getFileSize:(id)arg1;
- (_Bool)saveData:(id)arg1 file:(id)arg2;
- (id)getFilePath:(id)arg1;
- (void)updateMessageWrapDownload:(id)arg1 offset:(unsigned int)arg2;
- (void)logStatInfo:(id)arg1 retCode:(int)arg2;
- (void)updateMessageWrap:(id)arg1 downloadStatus:(unsigned int)arg2;
- (id)GetStatInfo:(id)arg1;
- (void)DelMsgInDownloadQueue:(id)arg1;
- (void)dealloc;
- (id)init;

@end

