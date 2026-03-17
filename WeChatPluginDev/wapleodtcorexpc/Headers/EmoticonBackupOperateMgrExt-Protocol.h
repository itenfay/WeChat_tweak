//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AddEmoticonWrap, NSArray, NSString;

@protocol EmoticonBackupOperateMgrExt <NSObject>

@optional
- (void)onUploadEmoticonQueueChanged;
- (void)onMoveBackupEmoticonFailed:(NSArray *)arg1;
- (void)onMoveBackupEmoticonOK:(NSArray *)arg1;
- (void)onStickyBackupEmoticonFailed:(NSArray *)arg1;
- (void)onStickyBackupEmoticonOK:(NSArray *)arg1;
- (void)onAddBackupEmoticonFailed:(NSString *)arg1 reason:(unsigned long long)arg2 remoteErrMsg:(NSString *)arg3;
- (void)onAddBackupEmoticonOK:(NSString *)arg1 addEmoticonWrap:(AddEmoticonWrap *)arg2;
- (void)onAddBackupEmoticonPendingUpload:(NSString *)arg1;
- (void)onDeleteBackupEmoticonFailed:(NSArray *)arg1;
- (void)onDeleteBackupEmoticonOK:(NSArray *)arg1;
@end

