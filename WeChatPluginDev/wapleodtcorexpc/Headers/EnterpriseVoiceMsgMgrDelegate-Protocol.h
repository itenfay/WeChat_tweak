//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap;

@protocol EnterpriseVoiceMsgMgrDelegate <NSObject>

@optional
- (void)onReceiveVoiceMsgStatusChanged:(CMessageWrap *)arg1;
- (void)onSendVoiceMsgStatusChanged:(CMessageWrap *)arg1;
- (void)onRecordVoiceMsgSucc:(CMessageWrap *)arg1;
@end

