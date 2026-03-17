//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class MMSessionInfo, MainFrameCellData, NSIndexPath, NSString;

@protocol MainSessionEditingLogicDelegate <MMUIViewControllerDelegate>
- (void)onLogicOpenSession:(MMSessionInfo *)arg1;
- (void)onLogicDeleteSessionByUsername:(NSString *)arg1;
- (void)onLogicHideSession:(MMSessionInfo *)arg1;
- (long long)logicGetCountForSection:(long long)arg1;
- (void)logicUpdateSession:(MMSessionInfo *)arg1;
- (MainFrameCellData *)logicGetCellDataAtIndexPath:(NSIndexPath *)arg1;
- (MMSessionInfo *)logicGetSessionAtIndexPath:(NSIndexPath *)arg1;
@end

