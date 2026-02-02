//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface AVVideoEffect : NSObject
{
    float _skinSmooth;
    float _skinBright;
    float _eyeBigger;
    float _eyeBright;
    float _faceThin;
    float _backgroundBlur;
    float _eyebrowEnhance;
    float _eyePouch;
    float _smileFolds;
    float _sharpenFilter;
    float _smallHead;
    float _teethBright;
    float _wingOfNose;
    float _lowerJawbone;
    float _cheekBone;
    float _naturalFilter;
    long long _mode;
}

+ (id)defaultEffect;
+ (id)effectWithABTestKey:(id)arg1;
@property(nonatomic) float naturalFilter; // @synthesize naturalFilter=_naturalFilter;
@property(nonatomic) float cheekBone; // @synthesize cheekBone=_cheekBone;
@property(nonatomic) float lowerJawbone; // @synthesize lowerJawbone=_lowerJawbone;
@property(nonatomic) float wingOfNose; // @synthesize wingOfNose=_wingOfNose;
@property(nonatomic) float teethBright; // @synthesize teethBright=_teethBright;
@property(nonatomic) float smallHead; // @synthesize smallHead=_smallHead;
@property(nonatomic) float sharpenFilter; // @synthesize sharpenFilter=_sharpenFilter;
@property(nonatomic) float smileFolds; // @synthesize smileFolds=_smileFolds;
@property(nonatomic) float eyePouch; // @synthesize eyePouch=_eyePouch;
@property(nonatomic) float eyebrowEnhance; // @synthesize eyebrowEnhance=_eyebrowEnhance;
@property(nonatomic) float backgroundBlur; // @synthesize backgroundBlur=_backgroundBlur;
@property(nonatomic) float faceThin; // @synthesize faceThin=_faceThin;
@property(nonatomic) float eyeBright; // @synthesize eyeBright=_eyeBright;
@property(nonatomic) float eyeBigger; // @synthesize eyeBigger=_eyeBigger;
@property(nonatomic) float skinBright; // @synthesize skinBright=_skinBright;
@property(nonatomic) float skinSmooth; // @synthesize skinSmooth=_skinSmooth;
@property(nonatomic) long long mode; // @synthesize mode=_mode;

@end

