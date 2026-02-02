//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@protocol INetworkStatusMgrExt

@optional
- (void)onNetworkWeakChanged:(_Bool)arg1 currentRTT:(unsigned int)arg2;
- (void)onNetworkCheckFinished:(_Bool)arg1 baseNetOK:(_Bool)arg2 longLinkOK:(_Bool)arg3 kvString:(NSString *)arg4;
- (void)onNetworkStatusChange:(unsigned int)arg1;
@end

