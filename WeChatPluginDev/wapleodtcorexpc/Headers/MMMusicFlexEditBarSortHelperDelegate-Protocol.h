//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicFlexEditBarSortHelper, UIView;

@protocol MMMusicFlexEditBarSortHelperDelegate <NSObject>
- (_Bool)editBarSortHelper:(MMMusicFlexEditBarSortHelper *)arg1 shouldHanldeGestureEndWithLocation:(struct CGPoint)arg2 cellIndex:(long long)arg3;
- (void)editBarSortHelper:(MMMusicFlexEditBarSortHelper *)arg1 didChangeLongPressLocation:(struct CGPoint)arg2 cellIndex:(long long)arg3;
- (void)onDidExitSortModeFromCellIndex:(unsigned long long)arg1 toCellIndex:(unsigned long long)arg2;
- (void)onDidEnterSortModeFromCellIndex:(unsigned long long)arg1;
- (void)onWillEnterSortModeWithLocationInSelf:(struct CGPoint)arg1 locationInSuper:(struct CGPoint)arg2 locateView:(UIView *)arg3;
- (_Bool)canEnterSortModeWithLocationInSelf:(struct CGPoint)arg1 locateView:(UIView *)arg2;
- (_Bool)canSortSubView:(UIView *)arg1;
@end

