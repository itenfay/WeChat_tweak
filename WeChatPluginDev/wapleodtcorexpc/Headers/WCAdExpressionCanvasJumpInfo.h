//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdExpressionCanvasHalfScreenJumpInfo;

@interface WCAdExpressionCanvasJumpInfo : NSObject
{
    _Bool _noStore;
    _Bool _preload;
    _Bool _videoAllowVioce;
    _Bool _forbidBackToBizApp;
    int _pageScene;
    NSString *_canvasId;
    NSString *_canvasXml;
    NSString *_adInfoXml;
    NSString *_uxInfo;
    NSString *_bizAppId;
    NSString *_canvasDynamicInfo;
    WCAdExpressionCanvasHalfScreenJumpInfo *_canvasHalfScreenJumpInfo;
    long long _outPlaybackTimeMs;
}

- (void).cxx_destruct;
@property(nonatomic) long long outPlaybackTimeMs; // @synthesize outPlaybackTimeMs=_outPlaybackTimeMs;
@property(nonatomic) _Bool forbidBackToBizApp; // @synthesize forbidBackToBizApp=_forbidBackToBizApp;
@property(nonatomic) _Bool videoAllowVioce; // @synthesize videoAllowVioce=_videoAllowVioce;
@property(retain, nonatomic) WCAdExpressionCanvasHalfScreenJumpInfo *canvasHalfScreenJumpInfo; // @synthesize canvasHalfScreenJumpInfo=_canvasHalfScreenJumpInfo;
@property(nonatomic) _Bool preload; // @synthesize preload=_preload;
@property(nonatomic) _Bool noStore; // @synthesize noStore=_noStore;
@property(retain, nonatomic) NSString *canvasDynamicInfo; // @synthesize canvasDynamicInfo=_canvasDynamicInfo;
@property(retain, nonatomic) NSString *bizAppId; // @synthesize bizAppId=_bizAppId;
@property(nonatomic) int pageScene; // @synthesize pageScene=_pageScene;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo=_uxInfo;
@property(retain, nonatomic) NSString *adInfoXml; // @synthesize adInfoXml=_adInfoXml;
@property(retain, nonatomic) NSString *canvasXml; // @synthesize canvasXml=_canvasXml;
@property(retain, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;

@end

