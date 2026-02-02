//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView, WCAdDynamicFeedElementInfo;

@protocol WCAdDynamicFeedEmptyLayoutViewDelegate <NSObject>

@optional
- (void)onDynamicFeedLayoutClicked:(WCAdDynamicFeedElementInfo *)arg1 viewTag:(long long)arg2 index:(unsigned long long)arg3 originView:(UIView *)arg4;
- (void)onDynamicFeedLayoutClicked:(WCAdDynamicFeedElementInfo *)arg1 viewTag:(long long)arg2;
@end

