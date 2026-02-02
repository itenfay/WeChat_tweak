//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, MMLiteAppInfoItem, NSArray, NSMutableDictionary, NSString;

@interface WebviewJSEventHandler_openLiteApp
{
    _Bool _syncCheckUpdate;
    _Bool _isHalfScreen;
    _Bool _enableDragToCloseInHalfScreen;
    _Bool _isTransparent;
    _Bool _isOpenWithNewTab;
    _Bool _isForbidRightGesture;
    _Bool _isRedirect;
    float _heightPercent;
    NSMutableDictionary *_resultParam;
    JSEvent *_jsEvent;
    MMLiteAppInfoItem *_appInfo;
    NSString *_page;
    NSString *_query;
    NSString *_appId;
    NSString *_enterType;
    double _delayTime;
    NSArray *_enableActions;
    NSArray *_enableViews;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRedirect; // @synthesize isRedirect=_isRedirect;
@property(retain, nonatomic) NSArray *enableViews; // @synthesize enableViews=_enableViews;
@property(retain, nonatomic) NSArray *enableActions; // @synthesize enableActions=_enableActions;
@property(nonatomic) double delayTime; // @synthesize delayTime=_delayTime;
@property(nonatomic) _Bool isForbidRightGesture; // @synthesize isForbidRightGesture=_isForbidRightGesture;
@property(nonatomic) _Bool isOpenWithNewTab; // @synthesize isOpenWithNewTab=_isOpenWithNewTab;
@property(nonatomic) _Bool isTransparent; // @synthesize isTransparent=_isTransparent;
@property(nonatomic) float heightPercent; // @synthesize heightPercent=_heightPercent;
@property(retain, nonatomic) NSString *enterType; // @synthesize enterType=_enterType;
@property(nonatomic) _Bool enableDragToCloseInHalfScreen; // @synthesize enableDragToCloseInHalfScreen=_enableDragToCloseInHalfScreen;
@property(nonatomic) _Bool isHalfScreen; // @synthesize isHalfScreen=_isHalfScreen;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(retain, nonatomic) MMLiteAppInfoItem *appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) JSEvent *jsEvent; // @synthesize jsEvent=_jsEvent;
@property(retain, nonatomic) NSMutableDictionary *resultParam; // @synthesize resultParam=_resultParam;
@property(nonatomic) _Bool syncCheckUpdate; // @synthesize syncCheckUpdate=_syncCheckUpdate;
- (void)callbackJSEvent:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

