//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdOpenAdCanvasParamsInfo : NSObject
{
    _Bool _noStore;
    _Bool _preLoad;
    _Bool _openFirstSightVoice;
    _Bool _openInHalfScreen;
    float _targetDistance;
    NSString *_canvasId;
    NSString *_adInfoXml;
    NSString *_extraData;
    NSString *_twistCardId;
    long long _fromOuterIndex;
    NSString *_uxInfo;
    long long _source;
    NSString *_canvasDynamicInfo;
    NSString *_gesturePoints;
    NSString *_samplePoints;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool openInHalfScreen; // @synthesize openInHalfScreen=_openInHalfScreen;
@property(nonatomic) float targetDistance; // @synthesize targetDistance=_targetDistance;
@property(retain, nonatomic) NSString *samplePoints; // @synthesize samplePoints=_samplePoints;
@property(retain, nonatomic) NSString *gesturePoints; // @synthesize gesturePoints=_gesturePoints;
@property(retain, nonatomic) NSString *canvasDynamicInfo; // @synthesize canvasDynamicInfo=_canvasDynamicInfo;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo=_uxInfo;
@property(nonatomic) long long fromOuterIndex; // @synthesize fromOuterIndex=_fromOuterIndex;
@property(retain, nonatomic) NSString *twistCardId; // @synthesize twistCardId=_twistCardId;
@property(nonatomic) _Bool openFirstSightVoice; // @synthesize openFirstSightVoice=_openFirstSightVoice;
@property(retain, nonatomic) NSString *extraData; // @synthesize extraData=_extraData;
@property(retain, nonatomic) NSString *adInfoXml; // @synthesize adInfoXml=_adInfoXml;
@property(nonatomic) _Bool preLoad; // @synthesize preLoad=_preLoad;
@property(nonatomic) _Bool noStore; // @synthesize noStore=_noStore;
@property(retain, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;

@end

