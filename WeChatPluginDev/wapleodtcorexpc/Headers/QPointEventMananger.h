//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSCache, NSMutableArray, NSMutableDictionary, NSString, QMapContext, QMapRepeatTimer, QMediator, QPointEventEngine, QUniversalMapCounter;

@interface QPointEventMananger : NSObject
{
    _Bool _pointEventEnable;
    int _pointEventCloudControl;
    int _requestFailureCounter;
    QMapContext *_context;
    QMediator *_mediator;
    QUniversalMapCounter *_showCounter;
    QMapRepeatTimer *_timer;
    QPointEventEngine *_pointEventEngine;
    NSMutableDictionary *_eventIDDict;
    NSCache *_imgURLCache;
    NSMutableArray *_currentEventIDs;
    NSMutableArray *_requestEventIDs;
    double _mapScaleHolder;
    NSCache *_eventCache;
    CDStruct_02837cd9 _mapRectHolder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSCache *eventCache; // @synthesize eventCache=_eventCache;
@property(nonatomic) double mapScaleHolder; // @synthesize mapScaleHolder=_mapScaleHolder;
@property(nonatomic) CDStruct_02837cd9 mapRectHolder; // @synthesize mapRectHolder=_mapRectHolder;
@property(retain, nonatomic) NSMutableArray *requestEventIDs; // @synthesize requestEventIDs=_requestEventIDs;
@property(retain, nonatomic) NSMutableArray *currentEventIDs; // @synthesize currentEventIDs=_currentEventIDs;
@property(retain, nonatomic) NSCache *imgURLCache; // @synthesize imgURLCache=_imgURLCache;
@property(nonatomic) int requestFailureCounter; // @synthesize requestFailureCounter=_requestFailureCounter;
@property(retain, nonatomic) NSMutableDictionary *eventIDDict; // @synthesize eventIDDict=_eventIDDict;
@property(retain, nonatomic) QPointEventEngine *pointEventEngine; // @synthesize pointEventEngine=_pointEventEngine;
@property(retain, nonatomic) QMapRepeatTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak QUniversalMapCounter *showCounter; // @synthesize showCounter=_showCounter;
@property(nonatomic) __weak QMediator *mediator; // @synthesize mediator=_mediator;
@property(nonatomic) __weak QMapContext *context; // @synthesize context=_context;
@property(nonatomic) int pointEventCloudControl; // @synthesize pointEventCloudControl=_pointEventCloudControl;
- (id)handlerForPointEventMarker:(id)arg1;
- (id)generatePointEventMarkerPayload:(id)arg1;
- (void)updateLocalPointEventConfig:(int)arg1 withConfigPath:(id)arg2;
- (id)getMarkerInfo:(int)arg1;
- (id)constructInfoDictionary:(id)arg1;
- (id)getImageURLMd5String:(id)arg1;
- (id)getIconImagePath;
- (id)getRectBoundString;
- (id)createPointEventRequestData;
- (void)setUpMarkerWithImagePath:(id)arg1 withInfo:(id)arg2;
- (void)assembleMarkerInfoDict:(id)arg1;
- (id)constructMarkerWithDict:(id)arg1 withImagPath:(id)arg2;
- (void)loadMarkerImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mapContextDidMapStatusChangedBeforeDraw:(id)arg1;
- (void)notifyConnectionSuccess:(id)arg1;
- (void)notifyConnectionFail;
- (void)requestPointEventData;
- (void)removeMarkers;
- (void)refreshCurrentEventInfo:(id)arg1 withEventID:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)invalidateTimer;
- (void)startPointEvent;
@property(nonatomic) _Bool pointEventEnable; // @synthesize pointEventEnable=_pointEventEnable;
- (void)updatePointEventState:(int)arg1;
- (void)disablePointEvent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

