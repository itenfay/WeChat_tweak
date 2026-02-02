//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TAVVideoTransitionRenderInfo;
@protocol TAVVideoTransition;

@interface TAVVideoCompositionTransitionInfo : NSObject
{
    id <TAVVideoTransition> _transition;
    TAVVideoTransitionRenderInfo *_renderInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TAVVideoTransitionRenderInfo *renderInfo; // @synthesize renderInfo=_renderInfo;
@property(retain, nonatomic) id <TAVVideoTransition> transition; // @synthesize transition=_transition;

@end

