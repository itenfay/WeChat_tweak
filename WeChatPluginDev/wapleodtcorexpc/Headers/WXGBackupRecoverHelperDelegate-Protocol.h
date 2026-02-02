//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, PacketBackupDataPush, PacketBackupDataTag, PacketFilterResponse;

@protocol WXGBackupRecoverHelperDelegate <NSObject>
- (_Bool)onPhoneDiskNotEnouge;
- (void)onFilterRequestEnd:(PacketFilterResponse *)arg1 filterSize:(unsigned long long)arg2;
- (void)onRequestSessionProcessEndWithResponse:(NSArray *)arg1;
- (void)onDataTagProcessEnd:(PacketBackupDataTag *)arg1;
- (void)onData:(PacketBackupDataPush *)arg1 writeToFileFinish:(_Bool)arg2;
@end

