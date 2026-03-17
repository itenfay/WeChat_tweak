//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSString;

@protocol IBETempNotiMgrExt <NSObject>
- (void)onDeleteTempNotiMsg:(long long)arg1 username:(NSString *)arg2 svrId:(long long)arg3;
- (void)onEditTempNotiMsg:(CMessageWrap *)arg1;
- (void)onInsertTempNotiMsg:(CMessageWrap *)arg1;
@end

