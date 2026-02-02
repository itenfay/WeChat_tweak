//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, QMapContext, QMapRepeatTimer, QMediator, QTrafficServerEngine;

@interface QTrafficManager : NSObject
{
    _Bool _enabled;
    int _protocolVersion;
    QMediator *_mediator;
    QMapContext *_mapContext;
    double _startZoomLevel;
    QTrafficServerEngine *_server;
    QMapRepeatTimer *_timer;
    NSMutableArray *_downloadingList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *downloadingList; // @synthesize downloadingList=_downloadingList;
@property(retain, nonatomic) QMapRepeatTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) QTrafficServerEngine *server; // @synthesize server=_server;
@property(nonatomic) int protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(nonatomic) double startZoomLevel; // @synthesize startZoomLevel=_startZoomLevel;
@property(nonatomic) __weak QMapContext *mapContext; // @synthesize mapContext=_mapContext;
@property(nonatomic) __weak QMediator *mediator; // @synthesize mediator=_mediator;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)mapContextDidMapStatusChangedBeforeDraw:(id)arg1;
- (void)setTrafficStyle:(id)arg1;
- (void)startAutoRefresh;
- (void)invalidateTimer;
- (void)writeData:(id)arg1;
- (void)checkUpdate:(id)arg1;
- (void)removeBlocks:(id)arg1;
- (id)addBlocks:(id)arg1;
- (void)setTrafficMode:(int)arg1 fromZoomLevel:(double)arg2;
- (void)refresh;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

