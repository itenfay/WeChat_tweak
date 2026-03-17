//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TPDynamicStatisticParams, TPGeneralPlayFlowParams;

@protocol ITPPlayerInfoGetter <NSObject>
- (TPDynamicStatisticParams *)getDynamicStatisticParams:(_Bool)arg1;
- (TPGeneralPlayFlowParams *)getGeneralPlayFlowParams;
@end

