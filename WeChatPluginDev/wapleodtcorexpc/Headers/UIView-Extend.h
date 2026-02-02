//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface UIView (Extend)
+ (_Bool)isView:(id)arg1 superViewOfView:(id)arg2;
+ (id)rootDesc;
- (_Bool)isSubViewOf:(id)arg1;
- (id)findViewWithTag:(long long)arg1;
- (id)getSubViewAccessibilityRecursive;
- (id)colorOfPoint:(struct CGPoint)arg1;
- (id)ancestorOrSelfWithClass:(Class)arg1;
- (id)descendantOrSelfWithClass:(Class)arg1;
- (void)removeAllGestureRecognizer;
- (void)recursiveEnumerateSubviewsUsingBlock:(CDUnknownBlockType)arg1;
- (id)subviewsWithClass:(Class)arg1;
- (void)subviewsWithClass:(Class)arg1 insertIntoArray:(id)arg2;
- (id)viewWithClass:(Class)arg1;
- (void)removeSubViewWithClass:(Class)arg1;
- (void)removeSubViewWithTag:(unsigned int)arg1;
- (void)removeAllSubViews;
- (void)autoresizingWithStrechFullSize;
- (void)autoresizingWithVerticalCenter;
- (void)autoresizingWithHorizontalCenter;
- (id)rootDesc;
@end

