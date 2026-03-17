//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class LVMinimizeContainerView, UIButton;

@protocol LVMinimizeContainerViewDelegate <NSObject>
- (void)minimizeContainerViewClicked:(LVMinimizeContainerView *)arg1;
- (void)minimizeContainerView:(LVMinimizeContainerView *)arg1 closeClicked:(UIButton *)arg2;
- (void)minimizeContainerView:(LVMinimizeContainerView *)arg1 playPauseClicked:(UIButton *)arg2;
@end

