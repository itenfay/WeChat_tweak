//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TBDistributerParameter;
@protocol TBRegionChangeDistributorDelegate;

@interface TBRegionChangeDistributor : NSObject
{
    _Bool _animated;
    _Bool _byGestured;
    _Bool _isChanging;
    id <TBRegionChangeDistributorDelegate> _delegate;
    long long _zoomCount;
    long long _centerCount;
    long long _rotationCount;
    long long _overlookingCount;
    long long _centerOffsetCount;
    TBDistributerParameter *_zoomParameter;
    TBDistributerParameter *_centerParameter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TBDistributerParameter *centerParameter; // @synthesize centerParameter=_centerParameter;
@property(retain, nonatomic) TBDistributerParameter *zoomParameter; // @synthesize zoomParameter=_zoomParameter;
@property(nonatomic) _Bool isChanging; // @synthesize isChanging=_isChanging;
@property(nonatomic) long long centerOffsetCount; // @synthesize centerOffsetCount=_centerOffsetCount;
@property(nonatomic) long long overlookingCount; // @synthesize overlookingCount=_overlookingCount;
@property(nonatomic) long long rotationCount; // @synthesize rotationCount=_rotationCount;
@property(nonatomic) long long centerCount; // @synthesize centerCount=_centerCount;
@property(nonatomic) long long zoomCount; // @synthesize zoomCount=_zoomCount;
@property(nonatomic) _Bool byGestured; // @synthesize byGestured=_byGestured;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) __weak id <TBRegionChangeDistributorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)reset;
- (void)completeOption:(unsigned long long)arg1;
- (void)registerOption:(unsigned long long)arg1 animated:(_Bool)arg2 byGesture:(_Bool)arg3;
@property(readonly, nonatomic) _Bool isDuringChange;
- (void)notifyDidZoomAnimated:(_Bool)arg1 byGesture:(_Bool)arg2;
- (void)notifyWillZoomAnimated:(_Bool)arg1 byGesture:(_Bool)arg2;
- (void)notifyDidMoveAnimated:(_Bool)arg1 byGesture:(_Bool)arg2;
- (void)notifyWillMoveAnimated:(_Bool)arg1 byGesture:(_Bool)arg2;
- (void)notifyRegionDidChangeAnimated:(_Bool)arg1 byGesture:(_Bool)arg2;
- (void)notifyRegionWillChangeAnimated:(_Bool)arg1 byGesture:(_Bool)arg2;
- (_Bool)matchStatic;

@end

