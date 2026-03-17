//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIImage;

@protocol IChatMigrationServerExt <NSObject>

@optional
- (void)onMigrationServerCloseEntryView;
- (void)onMigrationServerAlertCode:(unsigned long long)arg1;
- (void)onMigrationTransferSpeed:(float)arg1 leftTime:(unsigned int)arg2 sizeProgress:(float)arg3;
- (void)onMigrationCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onMigrationServerNotifyCode:(unsigned long long)arg1;
- (void)onMigrationServerGetQRCodeImg:(UIImage *)arg1;
@end

