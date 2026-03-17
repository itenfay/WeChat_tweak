//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@interface UIScrollView (WAPullRefreshWKScrollView)
+ (void)doSwizzlePullRefresh:(Class)arg1;
+ (void)preDoSwizzle;
+ (void)hookPullRefreshWKScrollView:(id)arg1;
@property(nonatomic) _Bool isForbidScrollViewScrollEnable;
@property(nonatomic) _Bool isForbidScrollViewBackgroundColor;
- (_Bool)isPullRefreshScrollView;
@property(nonatomic) _Bool isForbidScrollViewYZero;
- (void)pullRefresh_setBackgroundColor:(id)arg1;
- (void)pullRefresh_setScrollEnabled:(_Bool)arg1;
- (void)pullRefresh_setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)pullRefresh_setContentOffset:(struct CGPoint)arg1;
@end

