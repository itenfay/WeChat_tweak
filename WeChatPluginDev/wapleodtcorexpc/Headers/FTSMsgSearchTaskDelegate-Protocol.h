//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FTSMsgSearchTask;

@protocol FTSMsgSearchTaskDelegate <NSObject>
- (void)onMsgSearchTaskResultChanged:(_Bool)arg1 taskObj:(FTSMsgSearchTask *)arg2;
@end

