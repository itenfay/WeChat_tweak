//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderTitleDescButtonActionSheet;

@protocol WCFinderTitleDescButtonActionSheetDelegate <NSObject>
- (void)titleDescButtonAcceptBtnFrom:(WCFinderTitleDescButtonActionSheet *)arg1;
- (void)titleDescButtonClickCancelBtnFrom:(WCFinderTitleDescButtonActionSheet *)arg1;
- (void)titleDescButtonClickRuleUrl:(NSString *)arg1 actionSheet:(WCFinderTitleDescButtonActionSheet *)arg2;
@end

