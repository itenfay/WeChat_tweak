//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface VoIPAPNSPushSyncService
{
}

- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;
- (void)cook;
- (void)handleInfosCacheFromAppGroup;
- (void)handleCancelInfosCacheFromAppGroup;
- (void)handleInviteInfosCacheFromAppGroup;
- (void)handleCacheFromAppGroup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

