//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WXGMigrationClientLogicDelegate <NSObject>
- (void)onClientLogicTransferSpeed:(float)arg1 leftTime:(unsigned int)arg2 sizeProgress:(float)arg3;
- (void)onClientLogicCurrentTransferSpeed:(float)arg1;
- (void)onClientProcessCurrentProgress:(float)arg1;
- (void)onClientProcessCurrentCount:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
- (void)onClientProcessCurrentReceiveSize:(unsigned long long)arg1 totalSize:(unsigned long long)arg2;
- (void)onClientFirstPacketOK:(_Bool)arg1;
- (void)onClientLogicAlertCode:(unsigned long long)arg1;
- (void)onClientLogicNotifyCode:(unsigned long long)arg1;
@end

