//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSValue, UIImage;
@protocol TXCCustomVideoProcessDelegate, TXIVideoBindable;

@protocol TXIVideoPreprocessInterface <NSObject>
- (void)enableRoiEncoding:(_Bool)arg1;
- (void)setRoiConfig:(NSArray *)arg1 shouldSkipRoiRegionTransform:(_Bool)arg2;
- (void)setWatermark:(UIImage *)arg1 atRect:(struct CGRect)arg2;
- (void)setImageFilterLeftImage:(UIImage *)arg1 leftStrength:(float)arg2 rightImage:(UIImage *)arg3 rightStrength:(float)arg4 leftRatio:(float)arg5;
- (void)setImageFilterStrength:(float)arg1;
- (void)setImageFilterImage:(UIImage *)arg1;
- (void)setEnableSharpnessEnhancement:(_Bool)arg1;
- (void)setRuddinessLevel:(float)arg1;
- (void)setWhitenessLevel:(float)arg1;
- (void)setBeautyLevel:(float)arg1;
- (void)setBeautifyStyle:(unsigned long long)arg1;
- (void)setCustomPreprocess:(id <TXCCustomVideoProcessDelegate>)arg1 pixelFormat:(unsigned long long)arg2 bufferType:(unsigned long long)arg3;
- (void)setEncoderFeatures:(unsigned long long)arg1;
- (void)setOutputFormat:(unsigned long long)arg1;
- (void)setGSensorMode:(unsigned long long)arg1 homeOrientation:(int)arg2;
- (void)enableOutputMirror:(_Bool)arg1;
- (void)setOutputRotation:(unsigned long long)arg1;
- (void)setOutputResolution:(struct CGSize)arg1;
- (void)setCustomPreprocessResolution:(NSValue *)arg1;
- (void)setCustomRenderer:(id <TXIVideoBindable>)arg1;
- (void)setLocalRenderer:(id <TXIVideoBindable>)arg1;
@end

