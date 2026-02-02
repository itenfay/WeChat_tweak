//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class NSArray;

@protocol MsgDataSaveLogicDelegate <MMUIViewControllerDelegate>

@optional
- (void)onMsgDataSaveLogicEnd:(_Bool)arg1 expiredMsgs:(NSArray *)arg2;
@end

