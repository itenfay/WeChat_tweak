//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLockCircle, MMLockOverlayView, NSMutableArray, NSMutableDictionary;
@protocol MMPatternLockViewDelegate;

@interface MMPatternLockView : UIView
{
    id <MMPatternLockViewDelegate> _delegate;
    MMLockCircle *_selectedCell;
    MMLockOverlayView *_overLay;
    long long _oldCellIndex;
    long long _currentCellIndex;
    NSMutableDictionary *_drawnLines;
    NSMutableArray *_finalLines;
    NSMutableArray *_cellsInOrder;
}

+ (double)heightOfLockView;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *cellsInOrder; // @synthesize cellsInOrder=_cellsInOrder;
@property(retain, nonatomic) NSMutableArray *finalLines; // @synthesize finalLines=_finalLines;
@property(retain, nonatomic) NSMutableDictionary *drawnLines; // @synthesize drawnLines=_drawnLines;
@property(nonatomic) long long currentCellIndex; // @synthesize currentCellIndex=_currentCellIndex;
@property(nonatomic) long long oldCellIndex; // @synthesize oldCellIndex=_oldCellIndex;
@property(retain, nonatomic) MMLockOverlayView *overLay; // @synthesize overLay=_overLay;
@property(retain, nonatomic) MMLockCircle *selectedCell; // @synthesize selectedCell=_selectedCell;
@property(nonatomic) __weak id <MMPatternLockViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)highlightSelectCell:(id)arg1;
- (void)handleCircleSkip;
- (void)handlePanAtPoint:(struct CGPoint)arg1;
- (void)gestured:(id)arg1;
- (void)addGestureRecognizer;
- (void)endPattern;
- (id)uniqueLineIdForLineJoiningPoint:(long long)arg1 AndPoint:(long long)arg2;
- (id)cellAtIndex:(long long)arg1;
- (long long)indexForCell:(id)arg1;
- (long long)indexForPoint:(struct CGPoint)arg1;
- (void)onPwdCorrect;
- (void)onPwdError;
- (void)initData;
- (void)resetView;
- (void)calculateCirclePosition;
- (void)setUpTheView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

