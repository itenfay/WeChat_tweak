//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveGestureWeVisionRenderParams;

@interface MMFinderLiveGestureWeVisionRenderTask : NSObject
{
    _Bool _started;
    long long _renderScriptId;
    long long _animationResourceId;
    MMFinderLiveGestureWeVisionRenderParams *_parameters;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveGestureWeVisionRenderParams *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(nonatomic) long long animationResourceId; // @synthesize animationResourceId=_animationResourceId;
@property(nonatomic) long long renderScriptId; // @synthesize renderScriptId=_renderScriptId;

@end

