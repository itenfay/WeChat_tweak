//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@interface UIScrollView (WAContainerWKScrollView)
+ (void)doSwizzle:(Class)arg1;
+ (_Bool)isWKChildScrollViewHooked:(id)arg1;
+ (void)hookWKChildScrollView;
+ (Class)wkChildScrollViewClass;
- (void)sendTongCengChangedWKScrollView;
- (void)container_didMoveToSuperview;
- (void)container_didMoveToWindow;
- (void)container_setScrollEnabled:(_Bool)arg1;
- (void)container_setDelegate:(id)arg1;
- (void)container_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)containerScrollViewLogic;
- (void)setContainerScrollViewLogic:(id)arg1;
- (id)bindContainerScrollViewLogic;
@property(nonatomic) _Bool lockScrollEnable;
@end

