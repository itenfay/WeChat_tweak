//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, YtExtraOptions, YtFaceFrameInfo;

@interface YtLipReadReqData : NSObject
{
    float _lux;
    NSString *_appId;
    NSString *_sessionId;
    NSString *_version;
    NSString *_audio;
    NSString *_featureData;
    NSString *_lipReadingData;
    NSString *_actData;
    NSArray *_frameList;
    NSArray *_shapeList;
    YtExtraOptions *_extraOptions;
    NSString *_extraData;
    YtFaceFrameInfo *_bestImage;
}

- (void).cxx_destruct;
@property(retain) YtFaceFrameInfo *bestImage; // @synthesize bestImage=_bestImage;
@property(retain) NSString *extraData; // @synthesize extraData=_extraData;
@property(retain) YtExtraOptions *extraOptions; // @synthesize extraOptions=_extraOptions;
@property(retain) NSArray *shapeList; // @synthesize shapeList=_shapeList;
@property(retain) NSArray *frameList; // @synthesize frameList=_frameList;
@property(retain) NSString *actData; // @synthesize actData=_actData;
@property(retain) NSString *lipReadingData; // @synthesize lipReadingData=_lipReadingData;
@property(retain) NSString *featureData; // @synthesize featureData=_featureData;
@property(retain) NSString *audio; // @synthesize audio=_audio;
@property(retain) NSString *version; // @synthesize version=_version;
@property float lux; // @synthesize lux=_lux;
@property(retain) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain) NSString *appId; // @synthesize appId=_appId;

@end

