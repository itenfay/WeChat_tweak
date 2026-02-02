//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAJSEventHandler_connectWifi
{
}

- (unsigned int)getErrNoWithErrorCode:(int)arg1;
- (id)wifiInstance;
- (void)onWifiConfigDone:(int)arg1 errMsg:(id)arg2;
- (void)dealloc;
- (void)connectWifiWithParam:(id)arg1;
- (void)handleJSEvent:(id)arg1;

@end

