//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdExpressionCanvasHalfScreenJumpInfo, WCAdWeAppInfo;

@interface WCAdExpressionJumpInfo : NSObject
{
    _Bool _canvasNoStore;
    _Bool _canvasPreload;
    _Bool _videoAllowVioce;
    _Bool _forbidBackToBizApp;
    int _waScene;
    int _emotionScene;
    int _emotionEntrace;
    long long _type;
    long long _enterScene;
    NSString *_uxinfo;
    NSString *_h5Url;
    WCAdWeAppInfo *_waAppInfo;
    NSString *_waSceneNote;
    NSString *_canvasXml;
    NSString *_adInfoXml;
    NSString *_canvasId;
    NSString *_canvasLoadInfo;
    NSString *_finderAdData;
    NSString *_bizAppId;
    NSString *_canvasDynamicInfo;
    long long _outPlaybackTimeMs;
    WCAdExpressionCanvasHalfScreenJumpInfo *_canvasHalfScreenJumpInfo;
    NSString *_pid;
}

- (void).cxx_destruct;
@property(nonatomic) int emotionEntrace; // @synthesize emotionEntrace=_emotionEntrace;
@property(nonatomic) int emotionScene; // @synthesize emotionScene=_emotionScene;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) WCAdExpressionCanvasHalfScreenJumpInfo *canvasHalfScreenJumpInfo; // @synthesize canvasHalfScreenJumpInfo=_canvasHalfScreenJumpInfo;
@property(nonatomic) long long outPlaybackTimeMs; // @synthesize outPlaybackTimeMs=_outPlaybackTimeMs;
@property(nonatomic) _Bool forbidBackToBizApp; // @synthesize forbidBackToBizApp=_forbidBackToBizApp;
@property(nonatomic) _Bool videoAllowVioce; // @synthesize videoAllowVioce=_videoAllowVioce;
@property(nonatomic) _Bool canvasPreload; // @synthesize canvasPreload=_canvasPreload;
@property(nonatomic) _Bool canvasNoStore; // @synthesize canvasNoStore=_canvasNoStore;
@property(retain, nonatomic) NSString *canvasDynamicInfo; // @synthesize canvasDynamicInfo=_canvasDynamicInfo;
@property(retain, nonatomic) NSString *bizAppId; // @synthesize bizAppId=_bizAppId;
@property(retain, nonatomic) NSString *finderAdData; // @synthesize finderAdData=_finderAdData;
@property(retain, nonatomic) NSString *canvasLoadInfo; // @synthesize canvasLoadInfo=_canvasLoadInfo;
@property(retain, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;
@property(retain, nonatomic) NSString *adInfoXml; // @synthesize adInfoXml=_adInfoXml;
@property(retain, nonatomic) NSString *canvasXml; // @synthesize canvasXml=_canvasXml;
@property(retain, nonatomic) NSString *waSceneNote; // @synthesize waSceneNote=_waSceneNote;
@property(nonatomic) int waScene; // @synthesize waScene=_waScene;
@property(retain, nonatomic) WCAdWeAppInfo *waAppInfo; // @synthesize waAppInfo=_waAppInfo;
@property(retain, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(retain, nonatomic) NSString *uxinfo; // @synthesize uxinfo=_uxinfo;
@property(nonatomic) long long enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) long long type; // @synthesize type=_type;
- (_Bool)checkValid;
- (id)init;

@end

