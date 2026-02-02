//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAdExpParamsReportInfo : NSObject
{
    double _feedWidth;
    double _feedHeight;
    double _lastTouchX;
    double _lastTouchY;
}

@property(nonatomic) double lastTouchY; // @synthesize lastTouchY=_lastTouchY;
@property(nonatomic) double lastTouchX; // @synthesize lastTouchX=_lastTouchX;
@property(nonatomic) double feedHeight; // @synthesize feedHeight=_feedHeight;
@property(nonatomic) double feedWidth; // @synthesize feedWidth=_feedWidth;

@end

