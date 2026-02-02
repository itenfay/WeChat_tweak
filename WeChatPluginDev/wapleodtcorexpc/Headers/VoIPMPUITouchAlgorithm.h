//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol VoIPMPUITouchAlgorithmDelegate;

@interface VoIPMPUITouchAlgorithm
{
    _Bool m_hasMoved;
    _Bool m_hasStart;
    _Bool _canMoveOutside;
    _Bool _allowAdsorbToWindow;
    _Bool _shouldScaleMinWhenFold;
    _Bool _isScaling;
    _Bool _hasMoveLong;
    id <VoIPMPUITouchAlgorithmDelegate> m_delegate;
    double _edgeOffsetX;
    double _edgeOffsetTop;
    double _edgeOffsetBottom;
    double _longMoveMinDelta;
    double _foldPositionRemainingWidth;
    unsigned long long _foldType;
    double _maxScale;
    double _minScale;
    double _minWhenFoldScale;
    long long _m_startOrientation;
    double _initialDistance;
    struct CGPoint m_startPoint;
    struct CGPoint m_maxMoveDistance;
    struct CGPoint m_startPosition;
    struct CGSize _originSize;
    struct CGPoint _m_lastPosition;
    struct CGSize _willFoldSize;
    struct CGRect _beganToScaleFrame;
    optional_865a0c94 _area;
}

+ (double)distanceBetweenPoint:(struct CGPoint)arg1 andPoint:(struct CGPoint)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize willFoldSize; // @synthesize willFoldSize=_willFoldSize;
@property(nonatomic) struct CGRect beganToScaleFrame; // @synthesize beganToScaleFrame=_beganToScaleFrame;
@property(nonatomic) double initialDistance; // @synthesize initialDistance=_initialDistance;
@property(nonatomic) _Bool hasMoveLong; // @synthesize hasMoveLong=_hasMoveLong;
@property(nonatomic) long long m_startOrientation; // @synthesize m_startOrientation=_m_startOrientation;
@property(nonatomic) struct CGPoint m_lastPosition; // @synthesize m_lastPosition=_m_lastPosition;
@property(nonatomic) _Bool isScaling; // @synthesize isScaling=_isScaling;
@property(nonatomic) _Bool shouldScaleMinWhenFold; // @synthesize shouldScaleMinWhenFold=_shouldScaleMinWhenFold;
@property(nonatomic) double minWhenFoldScale; // @synthesize minWhenFoldScale=_minWhenFoldScale;
@property(nonatomic) double minScale; // @synthesize minScale=_minScale;
@property(nonatomic) double maxScale; // @synthesize maxScale=_maxScale;
@property(nonatomic) struct CGSize originSize; // @synthesize originSize=_originSize;
@property(nonatomic) unsigned long long foldType; // @synthesize foldType=_foldType;
@property(nonatomic) double foldPositionRemainingWidth; // @synthesize foldPositionRemainingWidth=_foldPositionRemainingWidth;
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
@property(nonatomic) __weak id <VoIPMPUITouchAlgorithmDelegate> m_delegate; // @synthesize m_delegate;
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
- (void)setupScaleVars:(id)arg1;
- (void)setVoIPMPUITouchAlgorithmDelegate:(id)arg1;
- (id)init;

@end

