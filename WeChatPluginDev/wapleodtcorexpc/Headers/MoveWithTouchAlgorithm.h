//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol MoveWithTouchAlgorithmDelegate;

@interface MoveWithTouchAlgorithm
{
    _Bool m_hasMoved;
    _Bool m_hasStart;
    _Bool _canMoveOutside;
    _Bool _allowAdsorbToWindow;
    _Bool _hasMoveLong;
    id <MoveWithTouchAlgorithmDelegate> m_delegate;
    double _edgeOffsetX;
    double _edgeOffsetTop;
    double _edgeOffsetBottom;
    double _longMoveMinDelta;
    long long _m_startOrientation;
    struct CGPoint m_startPoint;
    struct CGPoint m_maxMoveDistance;
    struct CGPoint m_startPosition;
    struct CGPoint _m_lastPosition;
    optional_865a0c94 _area;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasMoveLong; // @synthesize hasMoveLong=_hasMoveLong;
@property(nonatomic) long long m_startOrientation; // @synthesize m_startOrientation=_m_startOrientation;
@property(nonatomic) struct CGPoint m_lastPosition; // @synthesize m_lastPosition=_m_lastPosition;
@property(nonatomic) _Bool allowAdsorbToWindow; // @synthesize allowAdsorbToWindow=_allowAdsorbToWindow;
@property(nonatomic) optional_865a0c94 area; // @synthesize area=_area;
@property(nonatomic) _Bool canMoveOutside; // @synthesize canMoveOutside=_canMoveOutside;
@property(nonatomic) double longMoveMinDelta; // @synthesize longMoveMinDelta=_longMoveMinDelta;
@property(nonatomic) double edgeOffsetBottom; // @synthesize edgeOffsetBottom=_edgeOffsetBottom;
@property(nonatomic) double edgeOffsetTop; // @synthesize edgeOffsetTop=_edgeOffsetTop;
@property(nonatomic) double edgeOffsetX; // @synthesize edgeOffsetX=_edgeOffsetX;
@property(nonatomic) struct CGPoint m_startPosition; // @synthesize m_startPosition;
@property(nonatomic) struct CGPoint m_maxMoveDistance; // @synthesize m_maxMoveDistance;
@property(nonatomic) _Bool m_hasStart; // @synthesize m_hasStart;
@property(nonatomic) _Bool m_hasMoved; // @synthesize m_hasMoved;
@property(nonatomic) __weak id <MoveWithTouchAlgorithmDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) struct CGPoint m_startPoint; // @synthesize m_startPoint;
- (void)doFoldToBorder;
- (_Bool)tryFoldToWindowBorder;
- (void)adsorbToWindow;
- (void)calculateMaxDistance;
- (void)stopCalculate;
- (void)startCalculate;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setMoveWithTouchAlgorithmDelegate:(id)arg1;
- (id)init;

@end

