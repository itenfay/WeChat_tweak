//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol IMigrationClientExt <NSObject>

@optional
- (void)onClientMigrationTransferSpeed:(float)arg1 leftTime:(unsigned int)arg2 sizeProgress:(float)arg3;
- (void)onClientMigrationCurrentTransferSpeed:(float)arg1;
- (void)onClientMigrationCurrentReceiveSize:(unsigned long long)arg1 totalSize:(unsigned long long)arg2;
- (void)onClientProcessCurrentProgress:(float)arg1;
- (void)onClientMigrationNotifySessionCurrent:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onClientMigrationNotifyProgressCurrent:(unsigned long long)arg1 totalProgress:(unsigned long long)arg2;
- (void)onClientMigrationAlertCode:(unsigned long long)arg1;
- (void)onClientMigrationNotifyCode:(unsigned long long)arg1;
- (void)onTerminateMigration;
- (void)onStartMigration;
@end

