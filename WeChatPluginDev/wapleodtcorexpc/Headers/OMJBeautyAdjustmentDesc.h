//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJBeautyAdjustmentDesc : NSObject
{
    _Bool _isBeautyEnabled;
    float _skinSmoothness;
    float _twowayBrightRate;
    float _faceSlimness;
    float _eyeEnhancement;
    float _eyeBrightness;
    float _headShrinkage;
    float _cheekShrinkage;
    float _cheekboneShrinkage;
    float _jawShrinkage;
    float _noseShrinkage;
    float _darkCircleReduction;
    float _smileFoldReduction;
    float _teethWhiteness;
    float _redLip;
    float _lipShape;
    float _contouringRate;
    float _clarity;
    float _noseTip;
    float _nasalRoot;
    float _noseWing;
    float _eyelidDownStrength;
    float _eyeDistanceFactor;
    float _browThickness;
    float _browDistance;
    float _browPeak;
    float _innerEyeCorner;
    float _faceNarrowness;
    float _foreheadShrinkage;
    float _makeupEyeLashAndLine;
    float _makeupEyeShadow;
    float _makeupEyeBrow;
    float _makeupLip;
    float _makeupBlusher;
    float _makeupContour;
    NSString *_materialID;
    NSString *_presetID;
}

+ (id)goddessBeautyAdjustmentDesc;
+ (id)godBeautyAdjustmentDesc;
+ (id)naturalBeautyAdjustmentDesc;
+ (id)classicBeautyAdjustmentDesc;
+ (id)nullBeautyAdjustmentDesc;
- (void).cxx_destruct;
@property(nonatomic) _Bool isBeautyEnabled; // @synthesize isBeautyEnabled=_isBeautyEnabled;
@property(nonatomic) float makeupContour; // @synthesize makeupContour=_makeupContour;
@property(nonatomic) float makeupBlusher; // @synthesize makeupBlusher=_makeupBlusher;
@property(nonatomic) float makeupLip; // @synthesize makeupLip=_makeupLip;
@property(nonatomic) float makeupEyeBrow; // @synthesize makeupEyeBrow=_makeupEyeBrow;
@property(nonatomic) float makeupEyeShadow; // @synthesize makeupEyeShadow=_makeupEyeShadow;
@property(nonatomic) float makeupEyeLashAndLine; // @synthesize makeupEyeLashAndLine=_makeupEyeLashAndLine;
@property(nonatomic) float foreheadShrinkage; // @synthesize foreheadShrinkage=_foreheadShrinkage;
@property(nonatomic) float faceNarrowness; // @synthesize faceNarrowness=_faceNarrowness;
@property(nonatomic) float innerEyeCorner; // @synthesize innerEyeCorner=_innerEyeCorner;
@property(nonatomic) float browPeak; // @synthesize browPeak=_browPeak;
@property(nonatomic) float browDistance; // @synthesize browDistance=_browDistance;
@property(nonatomic) float browThickness; // @synthesize browThickness=_browThickness;
@property(nonatomic) float eyeDistanceFactor; // @synthesize eyeDistanceFactor=_eyeDistanceFactor;
@property(nonatomic) float eyelidDownStrength; // @synthesize eyelidDownStrength=_eyelidDownStrength;
@property(nonatomic) float noseWing; // @synthesize noseWing=_noseWing;
@property(nonatomic) float nasalRoot; // @synthesize nasalRoot=_nasalRoot;
@property(nonatomic) float noseTip; // @synthesize noseTip=_noseTip;
@property(nonatomic) float clarity; // @synthesize clarity=_clarity;
@property(nonatomic) float contouringRate; // @synthesize contouringRate=_contouringRate;
@property(nonatomic) float lipShape; // @synthesize lipShape=_lipShape;
@property(nonatomic) float redLip; // @synthesize redLip=_redLip;
@property(nonatomic) float teethWhiteness; // @synthesize teethWhiteness=_teethWhiteness;
@property(nonatomic) float smileFoldReduction; // @synthesize smileFoldReduction=_smileFoldReduction;
@property(nonatomic) float darkCircleReduction; // @synthesize darkCircleReduction=_darkCircleReduction;
@property(nonatomic) float noseShrinkage; // @synthesize noseShrinkage=_noseShrinkage;
@property(nonatomic) float jawShrinkage; // @synthesize jawShrinkage=_jawShrinkage;
@property(nonatomic) float cheekboneShrinkage; // @synthesize cheekboneShrinkage=_cheekboneShrinkage;
@property(nonatomic) float cheekShrinkage; // @synthesize cheekShrinkage=_cheekShrinkage;
@property(nonatomic) float headShrinkage; // @synthesize headShrinkage=_headShrinkage;
@property(nonatomic) float eyeBrightness; // @synthesize eyeBrightness=_eyeBrightness;
@property(nonatomic) float eyeEnhancement; // @synthesize eyeEnhancement=_eyeEnhancement;
@property(nonatomic) float faceSlimness; // @synthesize faceSlimness=_faceSlimness;
@property(nonatomic) float twowayBrightRate; // @synthesize twowayBrightRate=_twowayBrightRate;
@property(nonatomic) float skinSmoothness; // @synthesize skinSmoothness=_skinSmoothness;
@property(retain, nonatomic) NSString *presetID; // @synthesize presetID=_presetID;
@property(retain, nonatomic) NSString *materialID; // @synthesize materialID=_materialID;
- (id)description;
- (id)initWithBackingDesc:(const void *)arg1;
- (id)initWithBeautyAdjustmentDesc:(id)arg1;

@end

