//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TingQQMembershipView, UIButton;

@protocol TingQQMembershipViewDelegate <NSObject>
- (void)tingQQMembershipView:(TingQQMembershipView *)arg1 wecoinButtonClicked:(UIButton *)arg2;
- (void)tingQQMembershipView:(TingQQMembershipView *)arg1 confirmButtonClicked:(UIButton *)arg2;
@end

