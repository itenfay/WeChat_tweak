//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MinimizeTaskStateView;

@protocol MinimizeTaskStateViewDelegate <NSObject>
- (void)onTaskStateViewEntryBtnLongPressed:(MinimizeTaskStateView *)arg1;
- (void)onTaskStateViewEntryBtnClicked:(MinimizeTaskStateView *)arg1;
- (void)onTaskStateViewDeleteBtnClicked:(MinimizeTaskStateView *)arg1;
@end

