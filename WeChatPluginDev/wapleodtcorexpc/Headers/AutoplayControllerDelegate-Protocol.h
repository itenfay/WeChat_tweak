//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSArray;

@protocol AutoplayControllerDelegate <NSObject>
- (void)autoPlayMsg:(CMessageWrap *)arg1;
- (CMessageWrap *)GetFirstUnreadMsg;
- (NSArray *)GetDownMsgFromID:(unsigned int)arg1 Limit:(int)arg2 LeftCount:(unsigned int *)arg3;

@optional
- (_Bool)shouldStopAutoPlayUnRead;
@end

