//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol MultiDeviceManageLogicDelegate;

@interface MultiDeviceManageLogic : NSObject
{
    id <MultiDeviceManageLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MultiDeviceManageLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLogoutWebFailed;
- (void)onLogoutWeb;
- (void)onExtDeviceOnlineStatusChanged;
- (void)onOnlineInfoUpdated;
- (void)jumpToHelpURLWithManageInfo:(id)arg1;
- (void)startLogoutWithManageInfo:(id)arg1 isUserOpen:(_Bool)arg2;
- (void)setLock:(_Bool)arg1 withManageInfo:(id)arg2;
- (void)setMute:(_Bool)arg1;
- (void)jumpToFileTransfer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

