//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WACanvasDataSampleMgr : NSObject
{
}

- (void)onAfterWebViewLoad:(id)arg1 viewId:(int)arg2;
- (void)onBeforeWAGameExit:(id)arg1;
- (void)onBeforeProfileRedirect:(id)arg1;
- (void)onBeforeQRCodeRecognized:(id)arg1;
- (void)onServiceRequestSample:(id)arg1 EventInfo:(id)arg2 Success:(CDUnknownBlockType)arg3 Failure:(CDUnknownBlockType)arg4 targetViewId:(int)arg5 isDebugMode:(_Bool)arg6;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2 onSuccess:(CDUnknownBlockType)arg3 onFailure:(CDUnknownBlockType)arg4;
- (void)requestReportCanvasSampleData:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
- (id)getResizedImageByAppId:(id)arg1 targetViewId:(int)arg2;
- (id)getGameServerData:(id)arg1;
- (id)getCurrentHTMLWebViewImage:(id)arg1 scaleFactor:(float)arg2;
- (id)getCurrentCanvasImage:(id)arg1 scaleFactor:(float)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

