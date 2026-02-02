//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMGPUMotionCheck
{
    int motionCheckControlUniform;
    int motionCheckSwitchUniform;
    float noiseLevelUniform;
    int texelWidthLocation;
    int texelHeightLocation;
}

- (void)setTextureRes:(int)arg1 Height:(int)arg2;
- (void)setNoiseLevel:(float)arg1;
- (void)setMotionCheckControl:(int)arg1;
- (id)init;

@end

