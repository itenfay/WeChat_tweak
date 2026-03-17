//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap;

@protocol BypSendEmotionMessageMgrDelegate <NSObject>

@optional
- (void)onBypEmotionMsgModByBitSet:(unsigned int)arg1 msgWrap:(CMessageWrap *)arg2;
@end

