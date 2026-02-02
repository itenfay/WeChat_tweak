//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer, NSMutableArray, UIScrollView, UIView;
@protocol MMMusicFlexEditBarSortHelperDelegate;

@interface MMMusicFlexEditBarSortHelper : NSObject
{
    UIScrollView *_scrollView;
    _Bool _bSortMode;
    UIView *_draggingRealCell;
    UIView *_draggingShadowCell;
    unsigned long long _initialShadowIndex;
    unsigned long long _curShadowIndex;
    NSMutableArray *_arrCellInfo;
    NSMutableArray *_arrSubView;
    MMTimer *_autoScrollTimer;
    double _autoScrollDiff;
    id <MMMusicFlexEditBarSortHelperDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMMusicFlexEditBarSortHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLongPressGes:(id)arg1;
- (id)genShadowViewWithRealView:(id)arg1;
- (void)sortFromCellIndex:(unsigned long long)arg1 toCellIndex:(unsigned long long)arg2;
- (void)onAutoScrollTimer;
- (void)autoScrollIfNeedWithLocation:(struct CGPoint)arg1;
- (void)checkResortWithLocation:(struct CGPoint)arg1;
- (void)doInitForSortWithLongPressLocation:(struct CGPoint)arg1;
- (id)findCellByLocation:(struct CGPoint)arg1;
- (id)arrSubView;
- (_Bool)bSortMode;
- (void)commonInit;
- (id)initWithScrollView:(id)arg1;

@end

