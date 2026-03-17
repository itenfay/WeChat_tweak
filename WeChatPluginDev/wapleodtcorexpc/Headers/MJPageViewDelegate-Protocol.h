//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJPageView;

@protocol MJPageViewDelegate <NSObject>

@optional
- (void)pageView:(MJPageView *)arg1 didSelectTitleItemAtIndex:(long long)arg2;
- (void)pageView:(MJPageView *)arg1 didDisappearPageAtIndex:(long long)arg2;
- (void)pageView:(MJPageView *)arg1 didAppearPageAtIndex:(long long)arg2;
@end

