//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveLimitModeLiveInfoEnsurer : NSObject
{
    CDUnknownBlockType _onLiveInfoUpdated;
    NSString *_tid;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(copy, nonatomic) CDUnknownBlockType onLiveInfoUpdated; // @synthesize onLiveInfoUpdated=_onLiveInfoUpdated;
- (void)onLiveInfoUpdateTimeout;
- (_Bool)ensureLiveInfoReadyIfNeededWithCompletion:(CDUnknownBlockType)arg1 timeout:(double)arg2;
- (void)onFinderLiveInfoUpdated:(id)arg1 liveInfo:(id)arg2;
- (void)dealloc;
- (id)initWithTid:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

