//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TXBeautyManager : NSObject
{
    struct weak_ptr<liteav::manager::BeautyManagerProxy> _beautyManager;
}

+ (unsigned int)convertStyle:(long long)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setBeautyLowComplexity:(_Bool)arg1;
- (void)setMotionMute:(_Bool)arg1;
- (void)selectMotionTemplate:(id)arg1;
- (void)setMotionTmpl:(id)arg1 inDir:(id)arg2;
- (int)setFaceBeautyLevel:(float)arg1;
- (int)setLipsThicknessLevel:(float)arg1;
- (int)setNosePositionLevel:(float)arg1;
- (int)setNoseWingLevel:(float)arg1;
- (int)setMouthShapeLevel:(float)arg1;
- (int)setEyeAngleLevel:(float)arg1;
- (int)setEyeDistanceLevel:(float)arg1;
- (int)setForeheadLevel:(float)arg1;
- (int)setSmileLinesRemoveLevel:(float)arg1;
- (int)setPounchRemoveLevel:(float)arg1;
- (int)setWrinkleRemoveLevel:(float)arg1;
- (int)setToothWhitenLevel:(float)arg1;
- (int)setEyeLightenLevel:(float)arg1;
- (int)setNoseSlimLevel:(float)arg1;
- (int)setFaceNarrowLevel:(float)arg1;
- (int)setFaceShortLevel:(float)arg1;
- (int)setChinLevel:(float)arg1;
- (int)setFaceVLevel:(float)arg1;
- (int)setFaceSlimLevel:(float)arg1;
- (int)setEyeScaleLevel:(float)arg1;
- (int)setGreenScreenFile:(id)arg1;
- (void)setFilterStrength:(float)arg1;
- (void)setFilter:(id)arg1;
- (void)setRuddyLevel:(float)arg1;
- (void)enableSharpnessEnhancement:(_Bool)arg1;
- (void)setWhitenessLevel:(float)arg1;
- (void)setBeautyLevel:(float)arg1;
- (void)setBeautyStyle:(long long)arg1;
- (void)setInternelBeautyManager:(shared_ptr_a0f684fb)arg1;

@end

