//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BaseMessageViewModel, CMessageWrap, NSMutableArray, NSString;

@protocol MsgLoaderLogicDelegate <NSObject>
- (NSMutableArray *)getDownMsgFromLocalId:(unsigned int)arg1 createTime:(unsigned int)arg2 sequence:(unsigned int)arg3 limit:(unsigned int)arg4;
- (unsigned int)getDownLastLocalID;
- (unsigned int)getDownLastSequence;
- (unsigned int)getDownLastCreateTime;
- (NSMutableArray *)getMsgFromLocalId:(unsigned int)arg1 createTime:(unsigned int)arg2 sequence:(unsigned int)arg3 limit:(unsigned int)arg4;
- (unsigned int)getLastLocalID;
- (unsigned int)getLastSequence;
- (unsigned int)getLastCreateTime;
- (NSString *)getChatName;
- (BaseMessageViewModel *)createViewModelWithMsgWrap:(CMessageWrap *)arg1;
@end

