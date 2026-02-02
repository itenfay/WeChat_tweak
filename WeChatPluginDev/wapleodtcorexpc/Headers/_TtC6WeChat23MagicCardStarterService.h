//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat23MagicCardStarterService
{
    MISSING_TYPE *handleToBiz;
    MISSING_TYPE *handleToBizCreator;
}

- (void).cxx_destruct;
- (id)init;
- (void)releaseBizWithHandle:(id)arg1;
- (id)getBizAppConfigWithHandle:(id)arg1;
- (void)removeAllFrameSetViewWithHandle:(id)arg1 rootConfig:(id)arg2;
- (void)removeFrameSetViewWithHandle:(id)arg1 rootConfig:(id)arg2 frameSetName:(id)arg3;
- (void)scrollAllOnScreenFrameSetViewWithHandle:(id)arg1 rootConfig:(id)arg2 offsetHeight:(double)arg3 listViewTop:(double)arg4;
- (void)bindFrameSetViewWithHandle:(id)arg1 rootConfig:(id)arg2 containerView:(id)arg3 frameSetName:(id)arg4 frameSetData:(id)arg5;
- (void)preloadWithHandle:(id)arg1 rootConfig:(id)arg2 frameSetName:(id)arg3 frameSetData:(id)arg4 containerRect:(struct CGRect)arg5 preloadStrategy:(long long)arg6;
- (void)notifyJsEventWithHandle:(id)arg1 jsEvent:(id)arg2;
- (void)deactiveWithHandle:(id)arg1;
- (void)activeWithHandle:(id)arg1 viewController:(id)arg2;
- (void)resumeBizWithHandle:(id)arg1;
- (void)pauseBizWithHandle:(id)arg1;
- (id)aquireBizWithBizCreator:(id)arg1 instanceKey:(id)arg2;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)onServiceInit;

@end

