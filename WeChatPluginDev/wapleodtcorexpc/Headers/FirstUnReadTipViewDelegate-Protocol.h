//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FirstUnReadTipView;

@protocol FirstUnReadTipViewDelegate <NSObject>

@optional
- (void)onTipViewClose:(FirstUnReadTipView *)arg1;
- (void)onTipViewClick:(FirstUnReadTipView *)arg1;
@end

