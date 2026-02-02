//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BTRecoFlowBaseTableViewCell, GetRecommendFeedsResp_RecommendCardMsg, GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg;

@protocol BTRecoFlowBaseTableViewCellDelegate <NSObject>

@optional
- (void)recoFlowDeleteCell:(BTRecoFlowBaseTableViewCell *)arg1 cardMsg:(GetRecommendFeedsResp_RecommendCardMsg *)arg2;
- (void)recoFlowCell:(BTRecoFlowBaseTableViewCell *)arg1 didClickAggregationLabel:(GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg *)arg2;
- (void)recoFlowCell:(BTRecoFlowBaseTableViewCell *)arg1 didClickFeedbackBtn:(GetRecommendFeedsResp_RecommendCardMsg *)arg2;
- (void)recoFlowCellDidClickExpandMore:(BTRecoFlowBaseTableViewCell *)arg1;
@end

