//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WXGBackupLogicDelegate <NSObject>

@optional
- (void)onFirstPacketOK:(_Bool)arg1;
- (void)onBackupTransferSpeed:(float)arg1 leftTime:(unsigned int)arg2 sizeProgress:(float)arg3;
- (void)onProgressCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onBackupLogicAlert:(unsigned long long)arg1;
- (void)onBackupLogicNotify:(unsigned long long)arg1;
@end

