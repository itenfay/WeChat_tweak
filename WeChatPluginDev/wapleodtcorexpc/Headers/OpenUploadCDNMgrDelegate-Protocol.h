//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSString;

@protocol OpenUploadCDNMgrDelegate <NSObject>

@optional
- (void)OnUploadMsgDataFail:(CMessageWrap *)arg1;
- (void)OnUploadMsgDataSuccess:(CMessageWrap *)arg1;
- (void)onUploadCDNAppMsgModMsgByBitSet:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2 BitSet:(unsigned int)arg3;
@end

