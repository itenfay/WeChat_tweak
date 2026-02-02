//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, CdnRecordMediaInfo, NSMutableArray;

@interface RoomHistoryDownloadCDNMgr : NSObject
{
    CMessageWrap *_curDownMsgWrap;
    CdnRecordMediaInfo *_curDownMediaInfo;
    NSMutableArray *_arrCDNDownloadInfo;
    NSMutableArray *_pendingMsgQueue;
}

- (void).cxx_destruct;
- (void)OnCdnDownload:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)DownloadFail:(int)arg1 Expired:(_Bool)arg2 DownloadInfo:(id)arg3;
- (void)DownLoadOK;
- (_Bool)IsInDownloadQueue:(id)arg1;
- (void)StopDownloadHistoryRecordMsg:(id)arg1;
- (id)genHistoryRecordRecordMediaInfo:(id)arg1 clientMsgID:(id)arg2;
- (void)AddDownloadTasksFromHistoryRecordMsg:(id)arg1;
- (void)CheckDownloadRecordData;
- (void)checkMsgQueue;
- (_Bool)StartDownloadHistoryRecordMsg:(id)arg1 prior:(_Bool)arg2;
- (id)init;

@end

