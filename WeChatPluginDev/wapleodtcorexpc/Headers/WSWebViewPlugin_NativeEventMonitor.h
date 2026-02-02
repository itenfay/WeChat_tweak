//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface WSWebViewPlugin_NativeEventMonitor
{
    MISSING_TYPE *enableSendwebviewAppear;
}

- (void)notifySearchInputChangeWithQuery:(id)arg1;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (id)init;
- (void)observeMusicPlayStatus;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onStatusChanged:(int)arg3;
- (void)observeTingPlayStatus;
- (void)monitorTakeSnapshot;
- (void)webPageSheetWillDismiss:(id)arg1;

@end

