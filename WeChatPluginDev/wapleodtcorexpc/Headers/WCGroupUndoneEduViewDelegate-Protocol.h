//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCGroupUndoneEduView;

@protocol WCGroupUndoneEduViewDelegate <NSObject>

@optional
- (void)onGUEConfirm:(WCGroupUndoneEduView *)arg1;
- (void)onGUEClose:(WCGroupUndoneEduView *)arg1;
@end

