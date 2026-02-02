//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FTSIntelligentMsgSearchTask;

@protocol FTSIntelligentMsgSearchTaskDelegate <NSObject>
- (void)onIntelligentMsgSearchTaskResultChanged:(_Bool)arg1 taskObj:(FTSIntelligentMsgSearchTask *)arg2;
@end

