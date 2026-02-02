//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableDictionary;

@protocol IChatLogDataMgrExt <NSObject>

@optional
- (void)onChatLogCalculateBackupChatLogFilter:(NSMutableDictionary *)arg1 totalSize:(unsigned long long)arg2;
- (void)onChatLogCalculateBackupChatLogEnd:(unsigned long long)arg1;
- (void)onChatLogDataLoad:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onChatLogDataMgrCleanSize:(unsigned long long)arg1;
- (void)onChatLogDataDeleteProgress:(unsigned long long)arg1 totalSize:(unsigned long long)arg2;
- (void)onChatLogDataReloadItem;
- (void)onChatLogDataLoadFinished;
@end

