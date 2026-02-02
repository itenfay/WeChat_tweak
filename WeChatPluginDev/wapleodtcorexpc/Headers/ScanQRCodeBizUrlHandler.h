//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayPayAuthNativeCgi;

@interface ScanQRCodeBizUrlHandler
{
    unsigned int _m_sourceType;
    NSString *_m_sourceInfo;
    WCPayPayAuthNativeCgi *_m_payNativeCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayPayAuthNativeCgi *m_payNativeCgi; // @synthesize m_payNativeCgi=_m_payNativeCgi;
@property(retain, nonatomic) NSString *m_sourceInfo; // @synthesize m_sourceInfo=_m_sourceInfo;
@property(nonatomic) unsigned int m_sourceType; // @synthesize m_sourceType=_m_sourceType;
- (BOOL)QRCodeType;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onWCPayPayAuthNativeCgiWithResp:(id)arg1;
- (id)matchingPrefix;
- (void)call:(id)arg1;
- (void)handleUrl:(id)arg1;
- (void)reportCount;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

