//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetWxaGameConfigResponse_WxagGameOriginalReviewConfig, GetWxaGameConfigResponse_WxagGameReviewsConfig, WxaGameBaseInfo;

@interface WAGameExtraInfo
{
    GetWxaGameConfigResponse_WxagGameOriginalReviewConfig *_gameEvaluateConfig;
    GetWxaGameConfigResponse_WxagGameReviewsConfig *_gameReviewConfig;
    WxaGameBaseInfo *_gameBaseInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WxaGameBaseInfo *gameBaseInfo; // @synthesize gameBaseInfo=_gameBaseInfo;
@property(retain, nonatomic) GetWxaGameConfigResponse_WxagGameReviewsConfig *gameReviewConfig; // @synthesize gameReviewConfig=_gameReviewConfig;
@property(retain, nonatomic) GetWxaGameConfigResponse_WxagGameOriginalReviewConfig *gameEvaluateConfig; // @synthesize gameEvaluateConfig=_gameEvaluateConfig;

@end

