//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, _TtC6WeChat16MagicLiveCardBiz;

@interface MagicLiveCardService
{
    _TtC6WeChat16MagicLiveCardBiz *_biz;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC6WeChat16MagicLiveCardBiz *biz; // @synthesize biz=_biz;
- (id)getBizPkgInfo;
- (id)getBizPkgVersion;
- (void)checkPkgUpdate;
- (id)addFrameSetRootWithLiveTask:(id)arg1 extParams:(id)arg2 type:(long long)arg3 context:(id)arg4;
- (void)stopDirectly;
- (void)stopIfNoFrameSetRoot;
- (void)bindFrameSetView:(id)arg1 withRootId:(id)arg2;
- (void)destroyAllFrameSetRoot;
- (void)destroyFrameSetRoot:(id)arg1;
- (_Bool)isFrameSetRootIdExist:(id)arg1;
- (id)frameSetViewForId:(id)arg1;
- (void)resume;
- (void)pause;
- (void)start;
- (void)onServiceInit;
- (void)updateData:(id)arg1 frameSetName:(id)arg2 rootId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

