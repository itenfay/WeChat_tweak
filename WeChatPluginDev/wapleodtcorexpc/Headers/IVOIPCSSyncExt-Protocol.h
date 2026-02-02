//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, VoipMultiRelayData;

@protocol IVOIPCSSyncExt

@optional
- (void)OnCSVoipNotify:(NSData *)arg1;
- (void)OnGotRemoteControlStatus:(unsigned int)arg1;
- (void)OnGotRemoteRelayData:(NSData *)arg1;
- (void)OnGotRemoteConnectData:(VoipMultiRelayData *)arg1;
- (void)OnGotRemoteStatus:(unsigned int)arg1;
- (void)OnSyncError:(int)arg1;
@end

