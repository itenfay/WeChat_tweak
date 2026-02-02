//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderFeedDragUpDislikeConfig : NSObject
{
    double _topLongPanelViewHScale;
    double _panelTriggerDistance;
    double _panelTriggerTimeDurationInS;
    double _panelTriggerSpeedScale;
    double _topPanelNotShowTouchHeight;
}

@property(nonatomic) double topPanelNotShowTouchHeight; // @synthesize topPanelNotShowTouchHeight=_topPanelNotShowTouchHeight;
@property(nonatomic) double panelTriggerSpeedScale; // @synthesize panelTriggerSpeedScale=_panelTriggerSpeedScale;
@property(nonatomic) double panelTriggerTimeDurationInS; // @synthesize panelTriggerTimeDurationInS=_panelTriggerTimeDurationInS;
@property(nonatomic) double panelTriggerDistance; // @synthesize panelTriggerDistance=_panelTriggerDistance;
@property(nonatomic) double topLongPanelViewHScale; // @synthesize topLongPanelViewHScale=_topLongPanelViewHScale;
- (id)init;

@end

