//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMKalmanFilter;

@interface WCEditPanGestureKalmanFilter
{
    MMKalmanFilter *_xFilter;
    MMKalmanFilter *_yFilter;
    struct CGPoint _lastPoint;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint lastPoint; // @synthesize lastPoint=_lastPoint;
@property(retain, nonatomic) MMKalmanFilter *yFilter; // @synthesize yFilter=_yFilter;
@property(retain, nonatomic) MMKalmanFilter *xFilter; // @synthesize xFilter=_xFilter;
- (void)clearData;
- (struct CGPoint)filterWithMeasurePoint:(struct CGPoint)arg1;
- (id)genKalmanFilter;
- (id)init;

@end

