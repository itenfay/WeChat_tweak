//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BTFeedbackPanel, NSArray, NSObject;

@protocol BTFeedbackPanelDelegate <NSObject>
- (void)feedbackPanel:(BTFeedbackPanel *)arg1 didClose:(NSObject *)arg2 selectedReasonArr:(NSArray *)arg3 exposedReasonArr:(NSArray *)arg4;
- (void)feedbackPanel:(BTFeedbackPanel *)arg1 didClickConfirmBtn:(NSObject *)arg2 selectedReasonArr:(NSArray *)arg3 exposedReasonArr:(NSArray *)arg4;
@end

