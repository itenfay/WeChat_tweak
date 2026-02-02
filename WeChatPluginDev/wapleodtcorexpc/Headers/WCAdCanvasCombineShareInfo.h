//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCADCanvasGiveHBCardInfo;

@interface WCAdCanvasCombineShareInfo : NSObject
{
    _Bool _isInteractiveCanvas;
    unsigned int _originAdType;
    NSString *_type;
    NSString *_pageId;
    NSString *_uxInfo;
    NSString *_canvasDynamicInfo;
    NSString *_originSnsId;
    NSString *_originUxInfo;
    NSString *_originAid;
    NSString *_originTraceId;
    NSString *_originAdCanvasExt;
    NSString *_originSKAdItems;
    WCADCanvasGiveHBCardInfo *_giveHBCardInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCADCanvasGiveHBCardInfo *giveHBCardInfo; // @synthesize giveHBCardInfo=_giveHBCardInfo;
@property(nonatomic) _Bool isInteractiveCanvas; // @synthesize isInteractiveCanvas=_isInteractiveCanvas;
@property(retain, nonatomic) NSString *originSKAdItems; // @synthesize originSKAdItems=_originSKAdItems;
@property(retain, nonatomic) NSString *originAdCanvasExt; // @synthesize originAdCanvasExt=_originAdCanvasExt;
@property(retain, nonatomic) NSString *originTraceId; // @synthesize originTraceId=_originTraceId;
@property(retain, nonatomic) NSString *originAid; // @synthesize originAid=_originAid;
@property(nonatomic) unsigned int originAdType; // @synthesize originAdType=_originAdType;
@property(retain, nonatomic) NSString *originUxInfo; // @synthesize originUxInfo=_originUxInfo;
@property(retain, nonatomic) NSString *originSnsId; // @synthesize originSnsId=_originSnsId;
@property(retain, nonatomic) NSString *canvasDynamicInfo; // @synthesize canvasDynamicInfo=_canvasDynamicInfo;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo=_uxInfo;
@property(retain, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;

@end

