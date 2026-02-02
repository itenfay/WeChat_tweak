//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MinimizeTaskData, UIView;

@protocol MinimizeTaskContainerInfoDelegate <NSObject>

@optional
- (UIView *)taskSnapshotView;
- (void)onContainerViewMoved:(struct CGPoint)arg1;
- (void)minimizeWindowWillHide:(_Bool)arg1;
- (void)minimizeWindowWillShow:(_Bool)arg1;
- (_Bool)shouldBlockMinimizeWindowDisplayForTask:(MinimizeTaskData *)arg1;
@end

