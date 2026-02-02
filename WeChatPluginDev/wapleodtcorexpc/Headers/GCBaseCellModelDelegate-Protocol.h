//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GCBaseCellModel, UILongPressGestureRecognizer;

@protocol GCBaseCellModelDelegate <NSObject>

@optional
- (void)handleReportWithCellModel:(GCBaseCellModel *)arg1;
- (void)handleLongPress:(UILongPressGestureRecognizer *)arg1 cellModel:(GCBaseCellModel *)arg2;
@end

