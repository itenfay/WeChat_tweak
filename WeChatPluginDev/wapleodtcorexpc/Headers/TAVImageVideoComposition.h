//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TAVImageResource, TAVVideoConfiguration;

@interface TAVImageVideoComposition : NSObject
{
    TAVImageResource *_resource;
    TAVVideoConfiguration *_videoConfiguration;
    CDStruct_1b6d18a9 _startTime;
}

+ (id)imageVideoCompositionWithImage:(id)arg1 duration:(CDStruct_1b6d18a9)arg2;
- (void).cxx_destruct;
@property(nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) TAVVideoConfiguration *videoConfiguration; // @synthesize videoConfiguration=_videoConfiguration;
@property(retain, nonatomic) TAVImageResource *resource; // @synthesize resource=_resource;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)applyEffectToSourceImage:(id)arg1 renderInfo:(id)arg2;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
- (id)initWithResource:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

