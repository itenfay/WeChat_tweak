//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TenpayPasswordCtrl;

@protocol TenpayPasswordCtrlDelegate <NSObject>

@optional
- (void)passwordCtrlDidEndEditing:(TenpayPasswordCtrl *)arg1;
- (void)passwordCtrlDidBeginEditing:(TenpayPasswordCtrl *)arg1;
- (void)passwordCtrlShouldChange:(TenpayPasswordCtrl *)arg1;
@end

