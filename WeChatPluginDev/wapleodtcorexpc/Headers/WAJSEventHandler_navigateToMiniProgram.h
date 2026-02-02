//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSMutableArray, WAAppIdToUsernameTransfer;

@interface WAJSEventHandler_navigateToMiniProgram
{
    WAAppIdToUsernameTransfer *_appID2UserNameTransfer;
    _Bool _customShowShareBtnOnTemplateNav;
    CDUnknownBlockType _customShareBtnActionBlock;
    NSDictionary *_extraParamInfo;
    NSMutableArray *_widgetParameters;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *widgetParameters; // @synthesize widgetParameters=_widgetParameters;
@property(retain, nonatomic) NSDictionary *extraParamInfo; // @synthesize extraParamInfo=_extraParamInfo;
@property(copy, nonatomic) CDUnknownBlockType customShareBtnActionBlock; // @synthesize customShareBtnActionBlock=_customShareBtnActionBlock;
@property(nonatomic) _Bool customShowShareBtnOnTemplateNav; // @synthesize customShowShareBtnOnTemplateNav=_customShowShareBtnOnTemplateNav;
- (_Bool)checkNeedUseCustomParams;
- (void)navigateToMiniProgramWithParam:(id)arg1 appID:(id)arg2 userName:(id)arg3 navigationController:(id)arg4;
- (void)handleJSEvent:(id)arg1;

@end

