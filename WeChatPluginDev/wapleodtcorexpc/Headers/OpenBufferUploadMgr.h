//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, OpenBufferUploadInfo;

@interface OpenBufferUploadMgr
{
    unsigned int m_uiCurEventID;
    NSMutableArray *m_queUpload;
    OpenBufferUploadInfo *m_oCurUploadInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OpenBufferUploadInfo *m_oCurUploadInfo; // @synthesize m_oCurUploadInfo;
@property(retain, nonatomic) NSMutableArray *m_queUpload; // @synthesize m_queUpload;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)popInfoItem:(id)arg1;
- (void)UploadOK:(_Bool)arg1;
- (void)UploadFail:(unsigned int)arg1;
- (_Bool)CreateUploadAppAttach;
- (_Bool)CreateUploadEvent;
- (void)CheckQueue;
- (void)StartUpload:(id)arg1 ClientAppDataId:(id)arg2 UploadBufferData:(id)arg3 Scene:(unsigned int)arg4;
- (void)ClearEventID;
- (void)dealloc;
- (id)init;

@end

