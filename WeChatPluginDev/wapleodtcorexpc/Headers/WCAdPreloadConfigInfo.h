//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAdPreloadConfigInfo : NSObject
{
    _Bool _forbidTimelinePreload;
    _Bool _forbidCanvasPreload;
    int _timelinePreloadRatio;
    int _canvasPreloadRatio;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
@property(nonatomic) int canvasPreloadRatio; // @synthesize canvasPreloadRatio=_canvasPreloadRatio;
@property(nonatomic) _Bool forbidCanvasPreload; // @synthesize forbidCanvasPreload=_forbidCanvasPreload;
@property(nonatomic) int timelinePreloadRatio; // @synthesize timelinePreloadRatio=_timelinePreloadRatio;
@property(nonatomic) _Bool forbidTimelinePreload; // @synthesize forbidTimelinePreload=_forbidTimelinePreload;
- (_Bool)isCanvasPreloadRatioValid;
- (_Bool)isTimelinePreloadRatioValid;
- (void)parseConfig:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithConfig:(id)arg1;

@end

