//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CaraCppLiveFeatureCenter, NSString;

@interface CaraAppleLiveFeatureCenter : NSObject
{
    CaraCppLiveFeatureCenter *_underlying;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CaraCppLiveFeatureCenter *underlying; // @synthesize underlying=_underlying;
- (void)onLiveUserActiveLevelUpdate:(int)arg1;
- (void)onLiveCellConsume;
- (void)onLiveCellExpose;
- (void)onLiveReddotConsume:(id)arg1;
- (void)onLiveReddotExpose:(id)arg1;
- (int)currentNetworkQuality;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

