//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMapView, MMTimer, NSMutableArray, NSMutableDictionary, NSString, UIView;

@interface LocationThumbMgr
{
    MMMapView *_mapView;
    UIView *_mapPinView;
    NSMutableDictionary *_taskDic;
    NSMutableArray *_taskQueue;
    MMTimer *_taskTimer;
    _Bool _isUpdating;
    _Bool _hasReportLocateError;
}

+ (id)getThumbPathWithChatname:(id)arg1 MsgLocalID:(unsigned int)arg2;
- (void).cxx_destruct;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)deleteThumbImageWithChatname:(id)arg1 MsgLocalID:(unsigned int)arg2;
- (void)saveThumbImage:(id)arg1 Chatname:(id)arg2 MsgLocalID:(unsigned int)arg3;
- (void)configMapView:(id)arg1;
- (void)loadMapView:(id)arg1;
- (void)initMapView;
- (void)onTaskFailedWithError:(int)arg1;
- (void)asyncGenThumbImage;
- (void)deleteThumbTask:(id)arg1;
- (void)addThumbTask:(id)arg1;
- (void)startNextTask;
- (void)notifyTimeout;
- (void)onTimeout;
- (int)stopUpdate;
- (int)startUpdate;
- (int)deleteLocationThumb:(id)arg1 MsgLocalID:(unsigned int)arg2;
- (int)updateLocationThumb:(id)arg1;
- (id)getLocationThumb:(id)arg1 MsgLocalID:(unsigned int)arg2;
- (void)cleanResource;
- (void)enterForeground;
- (void)enterBackground;
- (void)dealloc;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

