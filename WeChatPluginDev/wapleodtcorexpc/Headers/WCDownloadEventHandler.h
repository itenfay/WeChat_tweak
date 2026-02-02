//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCDownloadEventHandler
{
}

- (void)OnProtocolConnectFail:(id)arg1;
- (void)OnProtocolResponse:(id)arg1 shouldContinue:(_Bool *)arg2;
- (_Bool)decodeShouldLockForWidth:(int)arg1 height:(int)arg2;
- (void)logMd5WithRaw:(id)arg1 rawLen:(unsigned long long)arg2 decryptMd5:(id)arg3 rgbaMd5:(id)arg4 urlStr:(id)arg5 decodeTips:(id)arg6;
- (id)calMd5ForBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (int)getIDReportSceneKeyOffset:(id)arg1;
- (void)monitorWebpPic:(_Bool)arg1 keyVector:(void *)arg2;
- (void)monitorReport:(id)arg1 connectFail:(_Bool)arg2 keyVector:(void *)arg3;

@end

