//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface GPUImageHSBFilter
{
    float matrix[4][4];
}

- (void)_updateColorMatrix;
- (void)adjustBrightness:(float)arg1;
- (void)adjustSaturation:(float)arg1;
- (void)rotateHue:(float)arg1;
- (void)reset;
- (id)init;

@end

