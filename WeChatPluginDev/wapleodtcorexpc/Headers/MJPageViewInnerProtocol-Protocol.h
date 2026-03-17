//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJPageView;
@protocol MJPageViewItemProtocol;

@protocol MJPageViewInnerProtocol <NSObject>
- (void)contentViewDidScrolled:(double)arg1;
- (void)item:(id <MJPageViewItemProtocol>)arg1 changeSelectedToIndex:(long long)arg2 animated:(_Bool)arg3;
- (MJPageView *)pageView;
@end

