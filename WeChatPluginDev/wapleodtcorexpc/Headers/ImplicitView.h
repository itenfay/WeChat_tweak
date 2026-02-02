//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class NSArray;
@protocol ImplicitViewDelegate;

@interface ImplicitView : UIImageView
{
    unsigned long long m_curFrameIndex;
    NSArray *m_frames;
    double m_nextTimeToFlashFrame;
    _Bool _hasStartAnimation;
    int _residueNumForRebound;
    id <ImplicitViewDelegate> _delegate;
    double _speedX;
    double _speedY;
    double _accelerationY;
    double _scaleSpeed;
    unsigned long long _beginPosition;
    long long _animationType;
}

- (void).cxx_destruct;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
@property(nonatomic) _Bool hasStartAnimation; // @synthesize hasStartAnimation=_hasStartAnimation;
@property(nonatomic) unsigned long long beginPosition; // @synthesize beginPosition=_beginPosition;
@property(nonatomic) double scaleSpeed; // @synthesize scaleSpeed=_scaleSpeed;
@property(nonatomic) double accelerationY; // @synthesize accelerationY=_accelerationY;
@property(nonatomic) double speedY; // @synthesize speedY=_speedY;
@property(nonatomic) double speedX; // @synthesize speedX=_speedX;
@property(nonatomic) int residueNumForRebound; // @synthesize residueNumForRebound=_residueNumForRebound;
@property(nonatomic) __weak id <ImplicitViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)flashFrameWithTimeInterval:(double)arg1;
- (void)updateFrameWithBottomBoundaryY:(double)arg1;
- (void)setImplicitFrames:(id)arg1;
- (void)onWillStartWithOrigin:(inout struct CGPoint *)arg1 bounds:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

