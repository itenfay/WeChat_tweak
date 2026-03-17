//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ScaleControl : NSObject
{
    _Bool mTouchControlEnable;
    union _GLKMatrix4 mMatrix;
    struct CGPoint mTransPrevPoint;
    struct CGPoint mScalePrevPoint;
    int mTransPrevTouchNum;
    float mScalePrevVal;
    float mScaleVal;
    float mTransX;
    float mTransY;
    float mScaleTransX;
    float mScaleTransY;
    float mXBoundary;
    float mYBoundary;
    int mViewWidth;
    int mViewHeight;
}

@property(readonly, nonatomic) float currentScale;
- (void)handleGesturesOperation:(id)arg1;
- (void)setTouchControlFlag:(_Bool)arg1;
- (void)updateMatrix;
- (void)checkScale;
- (void)checkMatrix;
- (float)checkTransVal:(float)arg1 boundaryVal:(float)arg2;
- (float *)getMatrix;
- (void)setBoundaryVal:(float)arg1 YBoundaryVal:(float)arg2;
- (void)setViewSize:(int)arg1 viewHeight:(int)arg2;
- (void)reset;
- (id)init;

@end

