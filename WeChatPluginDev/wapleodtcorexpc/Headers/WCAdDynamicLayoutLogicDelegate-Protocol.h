//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView, WCAdDynamicFeedElementInfo, WCAdDynamicFeedViewExtraClickJumpInfo;

@protocol WCAdDynamicLayoutLogicDelegate <NSObject>

@optional
- (void)onDynamicLayoutClickWithExtraClickType:(long long)arg1 jumpInfo:(WCAdDynamicFeedViewExtraClickJumpInfo *)arg2;
- (void)onDynamicLayoutClickEvent:(WCAdDynamicFeedElementInfo *)arg1 viewTag:(long long)arg2 index:(unsigned long long)arg3 originView:(UIView *)arg4;
@end

