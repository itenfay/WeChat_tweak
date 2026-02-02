//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol ITPPreloadProxyLifeCycleDelegate, TPPreloadProxyDelegate;

@interface TPPreloadProxyInternalDelegate : NSObject
{
    int _playId;
    id <TPPreloadProxyDelegate> _delegate;
    id <ITPPreloadProxyLifeCycleDelegate> _lifeDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ITPPreloadProxyLifeCycleDelegate> lifeDelegate; // @synthesize lifeDelegate=_lifeDelegate;
@property(nonatomic) __weak id <TPPreloadProxyDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int playId; // @synthesize playId=_playId;
- (void)onPrepareDownloadProgressUpdateWithPlayableDuration:(int)arg1 downloadSpeedKBs:(int)arg2 currentDownloadSizeByte:(long long)arg3 totalFileSizeByte:(long long)arg4 extInfo:(id)arg5;
- (void)onPrepareErrorWithModuleId:(int)arg1 errorCode:(int)arg2 extInfo:(id)arg3;
- (void)onPrepareSuccess;
- (id)initWithDelegate:(id)arg1 lifeCycleDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

