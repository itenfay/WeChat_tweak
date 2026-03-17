//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BTFeedbackPanelCoordinateParams : NSObject
{
    double _pannelViewWidth;
    unsigned long long _pannelViewAlignType;
    double _pannelViewAlignMargin;
    double _downsidePanelY;
    double _upsidePanelY;
    double _indicatorViewX;
}

@property(nonatomic) double indicatorViewX; // @synthesize indicatorViewX=_indicatorViewX;
@property(nonatomic) double upsidePanelY; // @synthesize upsidePanelY=_upsidePanelY;
@property(nonatomic) double downsidePanelY; // @synthesize downsidePanelY=_downsidePanelY;
@property(nonatomic) double pannelViewAlignMargin; // @synthesize pannelViewAlignMargin=_pannelViewAlignMargin;
@property(nonatomic) unsigned long long pannelViewAlignType; // @synthesize pannelViewAlignType=_pannelViewAlignType;
@property(nonatomic) double pannelViewWidth; // @synthesize pannelViewWidth=_pannelViewWidth;

@end

