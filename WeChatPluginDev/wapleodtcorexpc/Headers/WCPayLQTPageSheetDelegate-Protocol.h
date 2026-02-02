//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ButtomJumpInfo, ComonPromptInfo, WCPayLQTPageSheet;

@protocol WCPayLQTPageSheetDelegate <NSObject>
- (void)onClickPageSheetLefeCloseBtn:(WCPayLQTPageSheet *)arg1;
- (void)onClickPageSheet:(WCPayLQTPageSheet *)arg1 jumpInfo:(ButtomJumpInfo *)arg2;
- (void)onClickPageSheet:(WCPayLQTPageSheet *)arg1 promptInfo:(ComonPromptInfo *)arg2;
@end

