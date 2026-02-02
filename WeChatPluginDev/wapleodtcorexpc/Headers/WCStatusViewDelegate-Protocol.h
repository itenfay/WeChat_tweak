//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TextStateBaseCardContentView, TextStateModel;

@protocol WCStatusViewDelegate <NSObject>

@optional
- (void)onWCStatusViewShowGroup:(TextStateModel *)arg1 view:(TextStateBaseCardContentView *)arg2;
@end

