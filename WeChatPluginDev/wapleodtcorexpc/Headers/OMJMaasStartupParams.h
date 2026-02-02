//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OMJEnvironmentParams, OMJILinkParams, OMJLoggingParams, OMJRenderingParams, OMJTemplateServiceParams, OMJWarmupParams;

@interface OMJMaasStartupParams : NSObject
{
    _Bool _shouldEnableMetalRenderSys;
    OMJILinkParams *_iLinkParams;
    OMJEnvironmentParams *_environmentParams;
    OMJLoggingParams *_loggingParams;
    OMJWarmupParams *_warmupParams;
    OMJTemplateServiceParams *_templateServiceParams;
    OMJRenderingParams *_renderingParams;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldEnableMetalRenderSys; // @synthesize shouldEnableMetalRenderSys=_shouldEnableMetalRenderSys;
@property(readonly, nonatomic) OMJRenderingParams *renderingParams; // @synthesize renderingParams=_renderingParams;
@property(readonly, nonatomic) OMJTemplateServiceParams *templateServiceParams; // @synthesize templateServiceParams=_templateServiceParams;
@property(readonly, nonatomic) OMJWarmupParams *warmupParams; // @synthesize warmupParams=_warmupParams;
@property(readonly, nonatomic) OMJLoggingParams *loggingParams; // @synthesize loggingParams=_loggingParams;
@property(readonly, nonatomic) OMJEnvironmentParams *environmentParams; // @synthesize environmentParams=_environmentParams;
@property(readonly, nonatomic) OMJILinkParams *iLinkParams; // @synthesize iLinkParams=_iLinkParams;
- (id)initWithILinkParams:(id)arg1 environmentParams:(id)arg2 loggingParams:(id)arg3 warmupParams:(id)arg4 templateServiceParams:(id)arg5 renderingParams:(id)arg6 shouldEnableMetalRenderSys:(_Bool)arg7;
- (id)initWithILinkParams:(id)arg1 environmentParams:(id)arg2 loggingParams:(id)arg3 templateServiceParams:(id)arg4 renderingParams:(id)arg5;

@end

