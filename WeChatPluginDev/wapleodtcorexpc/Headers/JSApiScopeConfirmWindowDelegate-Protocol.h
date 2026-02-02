//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class JSApiScopeConfirmWindow, NSArray;

@protocol JSApiScopeConfirmWindowDelegate <NSObject>
- (void)onScopeWindowCancel:(JSApiScopeConfirmWindow *)arg1;
- (void)onScopeWindowConfirm:(JSApiScopeConfirmWindow *)arg1 withScope:(NSArray *)arg2;
@end

