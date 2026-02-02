//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, YtExtraOptions;

@interface YtActReflectReqData : NSObject
{
    float _lux;
    int _cpNum;
    NSString *_rgbConfig;
    NSString *_appId;
    NSString *_video;
    NSString *_version;
    NSString *_sessionId;
    NSString *_extraConfig;
    YtExtraOptions *_extraOptions;
    NSString *_controlConfig;
    NSString *_actionStr;
    NSString *_config;
    vector_8ca568ff _bestShape;
    vector_8ca568ff _eyeShape;
    vector_8ca568ff _mouthShape;
    struct Mat _bestImg;
    struct Mat _eyeImg;
    struct Mat _mouthImg;
    struct YTFullPack _fullDataPack;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *config; // @synthesize config=_config;
@property(retain) NSString *actionStr; // @synthesize actionStr=_actionStr;
@property(retain) NSString *controlConfig; // @synthesize controlConfig=_controlConfig;
@property(retain) YtExtraOptions *extraOptions; // @synthesize extraOptions=_extraOptions;
@property(retain) NSString *extraConfig; // @synthesize extraConfig=_extraConfig;
@property int cpNum; // @synthesize cpNum=_cpNum;
@property(retain) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain) NSString *version; // @synthesize version=_version;
@property(retain) NSString *video; // @synthesize video=_video;
@property(retain) NSString *appId; // @synthesize appId=_appId;
@property float lux; // @synthesize lux=_lux;
@property vector_8ca568ff mouthShape; // @synthesize mouthShape=_mouthShape;
@property struct Mat mouthImg; // @synthesize mouthImg=_mouthImg;
@property vector_8ca568ff eyeShape; // @synthesize eyeShape=_eyeShape;
@property struct Mat eyeImg; // @synthesize eyeImg=_eyeImg;
@property vector_8ca568ff bestShape; // @synthesize bestShape=_bestShape;
@property struct Mat bestImg; // @synthesize bestImg=_bestImg;
@property(retain) NSString *rgbConfig; // @synthesize rgbConfig=_rgbConfig;
@property struct YTFullPack fullDataPack; // @synthesize fullDataPack=_fullDataPack;

@end

