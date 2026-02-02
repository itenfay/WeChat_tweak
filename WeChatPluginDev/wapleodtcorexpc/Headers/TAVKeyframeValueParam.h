//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TAVVideoCompositionRenderInfo;
@protocol TAVKeyframeValue;

@interface TAVKeyframeValueParam : NSObject
{
    id <TAVKeyframeValue> _fromValue;
    id <TAVKeyframeValue> _toValue;
    double _tween;
    TAVVideoCompositionRenderInfo *_info;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TAVVideoCompositionRenderInfo *info; // @synthesize info=_info;
@property(nonatomic) double tween; // @synthesize tween=_tween;
@property(retain, nonatomic) id <TAVKeyframeValue> toValue; // @synthesize toValue=_toValue;
@property(retain, nonatomic) id <TAVKeyframeValue> fromValue; // @synthesize fromValue=_fromValue;

@end

