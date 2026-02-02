//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GCInteractCellModel;

@protocol GCInteractCellDelegate <NSObject>
- (void)didTapHeadWithCellModel:(GCInteractCellModel *)arg1;
- (void)didClickJumpAllBtnWithCellModel:(GCInteractCellModel *)arg1;
- (void)didClickReplyBtnWithCellModel:(GCInteractCellModel *)arg1;
- (void)didClickVoteBtnWithCellModel:(GCInteractCellModel *)arg1;
- (void)didClickFollowBtnWithCellModel:(GCInteractCellModel *)arg1;
@end

