//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TenpaySecureCtrl;

@protocol TenpaySecureCtrlDelegate <NSObject>

@optional
- (void)tenpayCtrlShouldChange:(TenpaySecureCtrl *)arg1;
- (void)tenpayCtrlShouldReturn:(TenpaySecureCtrl *)arg1;
@end

