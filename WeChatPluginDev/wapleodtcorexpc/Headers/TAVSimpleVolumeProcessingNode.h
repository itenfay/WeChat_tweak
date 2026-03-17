//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TAVSimpleVolumeProcessingNode : NSObject
{
    float _volume;
}

@property(nonatomic) float volume; // @synthesize volume=_volume;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)applyEffectToBufferListInOut:(struct AudioBufferList *)arg1 renderInfo:(id)arg2;
- (id)initWithVolume:(float)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

