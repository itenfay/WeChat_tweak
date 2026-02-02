//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, VoipMultiRelayConnData, VoipMultiRelayData;

@protocol IVOIPSyncExt

@optional
- (void)OnGotRemoteControlStatus:(unsigned int)arg1;
- (void)OnGotRemoteRelayData:(NSData *)arg1;
- (void)OnGotRemoteNewConnData:(VoipMultiRelayConnData *)arg1;
- (void)OnGotRemoteConnectData:(VoipMultiRelayData *)arg1;
- (void)OnGotRemoteStatus:(unsigned int)arg1 DataFlag:(unsigned int)arg2;
- (void)OnSyncError:(int)arg1;
@end

