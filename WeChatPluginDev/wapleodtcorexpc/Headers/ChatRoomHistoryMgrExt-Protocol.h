//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSArray;

@protocol ChatRoomHistoryMgrExt <NSObject>

@optional
- (void)onHistoryMsgLoadFail:(CMessageWrap *)arg1;
- (void)onHistoryMsgLoadSuccess:(CMessageWrap *)arg1 attachHistoryMsg:(NSArray *)arg2;
@end

