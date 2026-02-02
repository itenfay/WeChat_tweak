//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiteAppInfoItem, NSMutableDictionary, NSString;

@interface WAJSEventHandler_openLiteApp
{
    _Bool _syncCheckUpdate;
    _Bool _isHalfScreen;
    _Bool _isTransparent;
    _Bool _isOpenWithNewTab;
    _Bool _isRedirect;
    _Bool _isForbidRightGesture;
    float _heightPercent;
    NSMutableDictionary *_resultParam;
    MMLiteAppInfoItem *_appInfo;
    NSString *_page;
    NSString *_query;
    NSString *_appId;
    NSString *_enterType;
    double _delayTime;
}

- (void).cxx_destruct;
@property(nonatomic) double delayTime; // @synthesize delayTime=_delayTime;
@property(nonatomic) _Bool isForbidRightGesture; // @synthesize isForbidRightGesture=_isForbidRightGesture;
@property(nonatomic) _Bool isRedirect; // @synthesize isRedirect=_isRedirect;
@property(nonatomic) _Bool isOpenWithNewTab; // @synthesize isOpenWithNewTab=_isOpenWithNewTab;
@property(nonatomic) _Bool isTransparent; // @synthesize isTransparent=_isTransparent;
@property(nonatomic) float heightPercent; // @synthesize heightPercent=_heightPercent;
@property(nonatomic) _Bool isHalfScreen; // @synthesize isHalfScreen=_isHalfScreen;
@property(retain, nonatomic) NSString *enterType; // @synthesize enterType=_enterType;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(retain, nonatomic) MMLiteAppInfoItem *appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) NSMutableDictionary *resultParam; // @synthesize resultParam=_resultParam;
@property(nonatomic) _Bool syncCheckUpdate; // @synthesize syncCheckUpdate=_syncCheckUpdate;
- (void)onLiteAppUpdateFinish:(unsigned long long)arg1 appId:(id)arg2 appInfo:(id)arg3;
- (void)startLiteApp:(id)arg1 page:(id)arg2 query:(id)arg3 isHalfScreen:(_Bool)arg4 heightPercent:(float)arg5 enterType:(id)arg6 isTransparent:(_Bool)arg7 isOpenWithNewTab:(_Bool)arg8 isRedirect:(_Bool)arg9 isForbidRightGesture:(_Bool)arg10 delayTime:(double)arg11;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

