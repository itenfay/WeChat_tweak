//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdExpressionCanvasLoadInfo : NSObject
{
    _Bool _videoMuted;
    _Bool _forbidBackToBizApp;
    NSString *_canvasId;
    NSString *_uxInfo;
    NSString *_canvasDynamicInfo;
    long long _outPlaybackTimeMs;
}

- (void).cxx_destruct;
@property(nonatomic) long long outPlaybackTimeMs; // @synthesize outPlaybackTimeMs=_outPlaybackTimeMs;
@property(nonatomic) _Bool forbidBackToBizApp; // @synthesize forbidBackToBizApp=_forbidBackToBizApp;
@property(nonatomic) _Bool videoMuted; // @synthesize videoMuted=_videoMuted;
@property(retain, nonatomic) NSString *canvasDynamicInfo; // @synthesize canvasDynamicInfo=_canvasDynamicInfo;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo=_uxInfo;
@property(retain, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;

@end

