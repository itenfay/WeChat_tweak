//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView, WCSearchBar;

@protocol WCSearchTransitionViewSource <NSObject>
- (UIView *)getContentView;
- (UIView *)getNavBackgroundView;
- (WCSearchBar *)getSearchBar;
@end

