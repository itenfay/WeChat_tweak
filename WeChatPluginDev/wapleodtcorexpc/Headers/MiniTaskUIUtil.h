//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MiniTaskUIUtil : NSObject
{
}

+ (struct CGRect)calculateExpandedFrame:(struct CGRect)arg1 left:(double)arg2 right:(double)arg3 top:(double)arg4 bottom:(double)arg5;
+ (_Bool)isCGRectApproximatelyEqual:(struct CGRect)arg1 toRect:(struct CGRect)arg2;
+ (id)genFakeSnapshotShadowViewWithFrame:(struct CGRect)arg1;
+ (id)colorForPageSpacingInPresentAnimiation;
+ (id)colorForFakeMaskViewInPresentAnimation;
+ (id)colorForFakeMaskView;
+ (id)genCircleViewWithWidth:(double)arg1 isFill:(_Bool)arg2;
+ (id)combineViewSnapshotImage:(id)arg1 withTabBarSnapshot:(id)arg2 withAutoGenFakeNavBar:(_Bool)arg3;
+ (id)combineViewSnapshotImage:(id)arg1 withTabBarSnapshot:(id)arg2;

@end

