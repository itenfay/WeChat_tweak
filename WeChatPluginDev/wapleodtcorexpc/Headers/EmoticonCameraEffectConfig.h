//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CALayer, XEffectEffectManager;

@interface EmoticonCameraEffectConfig : NSObject
{
    XEffectEffectManager *_effectMgr;
    CALayer *_overlayLayer;
    struct CGRect _cropFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *overlayLayer; // @synthesize overlayLayer=_overlayLayer;
@property(retain, nonatomic) XEffectEffectManager *effectMgr; // @synthesize effectMgr=_effectMgr;
@property(nonatomic) struct CGRect cropFrame; // @synthesize cropFrame=_cropFrame;

@end

