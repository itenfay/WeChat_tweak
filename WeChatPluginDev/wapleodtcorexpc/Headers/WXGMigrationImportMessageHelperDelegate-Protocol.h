//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WXGMigrationImportMessageHelperDelegate <NSObject>
- (void)onMigrationImportMessageCurrentCount:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
- (void)onMigrationImportMessageCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onMigrationImportMessageFinish;
- (void)onMigrationImportSucessPrepare;
- (void)onMigrationImportMessageError;
- (void)onMigrationStartOldVersionImportMessage;
- (void)onMigrationStartImportMessage;
@end

