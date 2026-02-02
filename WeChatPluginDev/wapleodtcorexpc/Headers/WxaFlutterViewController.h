//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FlutterMethodChannel, NSMutableDictionary, NSString, WxaFlutterViewLifeCycle;

@interface WxaFlutterViewController
{
    _Bool _disableScroll;
    _Bool _needKeepAlive;
    _Bool _hasDealloc;
    int _engineId;
    unsigned int _appUuid;
    NSString *_activityId;
    NSString *_pageName;
    NSMutableDictionary *_params;
    WxaFlutterViewLifeCycle *_lifeCycle;
    FlutterMethodChannel *_channel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FlutterMethodChannel *channel; // @synthesize channel=_channel;
@property(readonly, nonatomic) _Bool hasDealloc; // @synthesize hasDealloc=_hasDealloc;
@property(nonatomic) _Bool needKeepAlive; // @synthesize needKeepAlive=_needKeepAlive;
@property(nonatomic) unsigned int appUuid; // @synthesize appUuid=_appUuid;
@property(retain, nonatomic) WxaFlutterViewLifeCycle *lifeCycle; // @synthesize lifeCycle=_lifeCycle;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(nonatomic) int engineId; // @synthesize engineId=_engineId;
- (id)getFlutterEngine;
- (id)generateParams;
- (id)getFlutterViewParams;
- (id)getFlutterViewName;
- (id)getActivityId;
- (void)resumeView;
- (void)pauseView;
- (void)disableScroll:(_Bool)arg1;
- (void)setContentOffset:(double)arg1;
- (void)handleMethodCall:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)invokeMethod:(id)arg1 arguments:(id)arg2;
- (void)setupChannelMethod;
- (void)dealloc;
- (void)preDealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

