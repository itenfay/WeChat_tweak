//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WSTabInfo;

@protocol WSWebRecommendTabsViewDelegate <NSObject>
- (void)onChangeTabViewSize;
- (void)handleTabSelected:(long long)arg1 tabItemInfo:(WSTabInfo *)arg2 reason:(unsigned long long)arg3;
@end

