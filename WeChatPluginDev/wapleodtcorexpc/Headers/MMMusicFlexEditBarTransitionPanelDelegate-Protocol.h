//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicFlexEditBarTransitionPanel, MMMusicVideoTransitionModel;

@protocol MMMusicFlexEditBarTransitionPanelDelegate <NSObject>
- (void)mvFlexEditBarTransitionPanel:(MMMusicFlexEditBarTransitionPanel *)arg1 didTransitionPanelCellClicked:(MMMusicVideoTransitionModel *)arg2;
- (void)mvFlexEditBarTransitionPanel:(MMMusicFlexEditBarTransitionPanel *)arg1 didReplayBtnClicked:(MMMusicVideoTransitionModel *)arg2;
- (void)mvFlexEditBarTransitionPanel:(MMMusicFlexEditBarTransitionPanel *)arg1 didDoneBtnClicked:(MMMusicVideoTransitionModel *)arg2;
- (void)mvFlexEditBarTransitionPanel:(MMMusicFlexEditBarTransitionPanel *)arg1 didCancelBtnClicked:(MMMusicVideoTransitionModel *)arg2;
- (void)mvFlexEditBarTransitionPanel:(MMMusicFlexEditBarTransitionPanel *)arg1 didBlankAreaClicked:(MMMusicVideoTransitionModel *)arg2;
- (void)mvFlexEditBarTransitionPanel:(MMMusicFlexEditBarTransitionPanel *)arg1 didLoadCompleteWithCurTransitionModel:(MMMusicVideoTransitionModel *)arg2;
@end

