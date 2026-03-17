//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, UIView;

@protocol WCFinderFeedFlowViewMonitorDelegate <NSObject>

@optional
- (void)monitorView:(UIView *)arg1 newExposedItems:(NSArray *)arg2 lastExposedItems:(NSArray *)arg3;
@end

