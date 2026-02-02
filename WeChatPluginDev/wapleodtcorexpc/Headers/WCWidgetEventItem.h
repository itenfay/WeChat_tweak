//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCWidgetEventItem
{
    unsigned int _touchInterval;
    long long _eventType;
    long long _eventSubType;
    NSString *_widgetName;
    NSString *_widgetIdentify;
    NSString *_action;
    struct CGPoint _touchBeginPoint;
    struct CGPoint _touchEndPoint;
}

+ (void)initialize;
+ (void)PBArrayAdd_touchInterval;
+ (void)PBArrayAdd_touchEndPoint;
+ (void)PBArrayAdd_touchBeginPoint;
+ (void)PBArrayAdd_action;
+ (void)PBArrayAdd_widgetIdentify;
+ (void)PBArrayAdd_widgetName;
+ (void)PBArrayAdd_eventSubType;
+ (void)PBArrayAdd_eventType;
- (void).cxx_destruct;
@property(nonatomic) unsigned int touchInterval; // @synthesize touchInterval=_touchInterval;
@property(nonatomic) struct CGPoint touchEndPoint; // @synthesize touchEndPoint=_touchEndPoint;
@property(nonatomic) struct CGPoint touchBeginPoint; // @synthesize touchBeginPoint=_touchBeginPoint;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *widgetIdentify; // @synthesize widgetIdentify=_widgetIdentify;
@property(retain, nonatomic) NSString *widgetName; // @synthesize widgetName=_widgetName;
@property(nonatomic) long long eventSubType; // @synthesize eventSubType=_eventSubType;
@property(nonatomic) long long eventType; // @synthesize eventType=_eventType;
- (id)formatPointToIntString:(struct CGPoint)arg1;
- (id)getTouchEndPoint;
- (id)getTouchBeginPoint;
- (id)getWidgeName;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

