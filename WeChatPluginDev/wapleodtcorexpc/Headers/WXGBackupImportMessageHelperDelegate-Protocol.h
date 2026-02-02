//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WXGBackupImportMessageHelperDelegate <NSObject>
- (void)onBackupImportMessageCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onBackupImportMessageFinish;
- (void)onBackupImportMessagePrepareFinish;
- (void)onBackupImportMessageError;
- (void)onBackupImportMessageStart;
@end

