//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdSupportCapabilityInfo;

@interface WCAdCanvasLoadParams : NSObject
{
    unsigned int _enterScene;
    unsigned long long _canvasId;
    NSString *_uxInfo;
    NSString *_canvasDynamicInfo;
    WCAdSupportCapabilityInfo *_supportCapability;
    NSString *_dynamicCanvasLibVersion;
    unsigned long long _loadStartTimeMs;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long loadStartTimeMs; // @synthesize loadStartTimeMs=_loadStartTimeMs;
@property(retain, nonatomic) NSString *dynamicCanvasLibVersion; // @synthesize dynamicCanvasLibVersion=_dynamicCanvasLibVersion;
@property(retain, nonatomic) WCAdSupportCapabilityInfo *supportCapability; // @synthesize supportCapability=_supportCapability;
@property(retain, nonatomic) NSString *canvasDynamicInfo; // @synthesize canvasDynamicInfo=_canvasDynamicInfo;
@property(nonatomic) unsigned int enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo=_uxInfo;
@property(nonatomic) unsigned long long canvasId; // @synthesize canvasId=_canvasId;
- (id)description;
@property(readonly, nonatomic) NSString *canvasIdStr;
- (id)cacheKey;
- (id)init;

@end

