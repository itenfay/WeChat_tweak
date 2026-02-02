//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSString;

@protocol OpenUploadMgrDelegate <NSObject>

@optional
- (void)onUploadAppMsgModMsgByBitSet:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2 BitSet:(unsigned int)arg3;
@end

