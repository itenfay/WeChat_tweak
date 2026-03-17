//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WXGMigrationServerLogicDelegate <NSObject>

@optional
- (void)onServerLogicTransferSpeed:(float)arg1 leftTime:(unsigned int)arg2 sizeProgress:(float)arg3;
- (void)onServerLogicCurrentProcessingSession:(unsigned long long)arg1 totalSessionCount:(unsigned long long)arg2;
- (void)onServerLogicAlertCode:(unsigned long long)arg1;
- (void)onServerLogicNotifyCode:(unsigned long long)arg1;
@end

