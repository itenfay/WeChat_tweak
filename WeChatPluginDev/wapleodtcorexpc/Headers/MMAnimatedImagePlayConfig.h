//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol MMAnimatedImagePlayObserver;

@interface MMAnimatedImagePlayConfig : NSObject
{
    _Bool _needCache;
    _Bool _asyncLoadFirstFrame;
    unsigned int _animationRepeatCount;
    double _maxCacheWidth;
    unsigned long long _playMode;
    unsigned long long _playEndBehavior;
    id <MMAnimatedImagePlayObserver> _observer;
}

+ (id)defaultConfig;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MMAnimatedImagePlayObserver> observer; // @synthesize observer=_observer;
@property(nonatomic) unsigned long long playEndBehavior; // @synthesize playEndBehavior=_playEndBehavior;
@property(nonatomic) unsigned int animationRepeatCount; // @synthesize animationRepeatCount=_animationRepeatCount;
@property(nonatomic) unsigned long long playMode; // @synthesize playMode=_playMode;
@property(nonatomic) _Bool asyncLoadFirstFrame; // @synthesize asyncLoadFirstFrame=_asyncLoadFirstFrame;
@property(nonatomic) double maxCacheWidth; // @synthesize maxCacheWidth=_maxCacheWidth;
@property(nonatomic) _Bool needCache; // @synthesize needCache=_needCache;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

