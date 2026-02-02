//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat21MagicBrandBaseService
{
    MISSING_TYPE *brandServiceBiz;
    MISSING_TYPE *cardHeightCachedMMKV;
}

- (void).cxx_destruct;
- (id)init;
- (id)getAppConfigWithBizName:(id)arg1;
- (void)destroyBrandServiceBizWithScene:(long long)arg1;
- (void)requestPreLayoutWhenExposeWithStrategy:(long long)arg1;
- (void)notifyFrameSetInfoWithMsgId:(double)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3;
- (void)notifyStateChangeWithEventName:(id)arg1;
- (void)resume;
- (void)pause;
- (void)recreateBrandServiceBizWithScene:(long long)arg1;
- (void)createBrandServiceBizWithScene:(long long)arg1;
- (long long)getDynamicCardType;
- (_Bool)shouldPreLayoutWhenExpose;
- (void)onServiceInit;
- (void)onServiceClearData;

@end

