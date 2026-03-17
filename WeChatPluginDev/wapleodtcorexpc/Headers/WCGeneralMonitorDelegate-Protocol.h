//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, UIView;

@protocol WCGeneralMonitorDelegate <NSObject>

@optional
- (void)monitorView:(UIView *)arg1 unExposedCells:(NSArray *)arg2;
- (void)monitorView:(UIView *)arg1 unExposedItems:(NSArray *)arg2;
- (void)monitorView:(UIView *)arg1 newExposedCells:(NSArray *)arg2;
- (void)monitorView:(UIView *)arg1 newExposedIds:(NSArray *)arg2;
- (void)monitorView:(UIView *)arg1 newExposedItems:(NSArray *)arg2 lastExposedItems:(NSArray *)arg3;
@end

