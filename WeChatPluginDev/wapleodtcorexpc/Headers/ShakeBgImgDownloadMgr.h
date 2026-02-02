//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, ShakeInfo;

@interface ShakeBgImgDownloadMgr
{
    ShakeInfo *m_oShakeInfo;
    unsigned int m_uiCurDownloadID;
    unsigned int m_uiCurTotalLen;
    unsigned int m_uiCurEventID;
    unsigned int m_uiCurDownloadCount;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ShakeInfo *m_oShakeInfo; // @synthesize m_oShakeInfo;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)DownloadBgImg:(unsigned int)arg1 TotalLen:(unsigned int)arg2;
- (void)CreateDownloadEvent;
- (void)AddShakeTimes:(unsigned int)arg1;
- (unsigned int)GetShakeBgImgID;
- (unsigned int)GetShakeTimes;
- (void)SaveShakeInfo;
- (void)LoadShakeInfo;
- (void)dealloc;
- (id)init;
- (void)ResetDownloadInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

