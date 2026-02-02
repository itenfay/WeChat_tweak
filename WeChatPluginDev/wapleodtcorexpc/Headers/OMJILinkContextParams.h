//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OMJILinkContextParamsExternalManaged, OMJILinkContextParamsSelfManaged;

@interface OMJILinkContextParams : NSObject
{
    OMJILinkContextParamsSelfManaged *_paramsSelfManaged;
    OMJILinkContextParamsExternalManaged *_paramsExternalManaged;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) OMJILinkContextParamsExternalManaged *paramsExternalManaged; // @synthesize paramsExternalManaged=_paramsExternalManaged;
@property(readonly, nonatomic) OMJILinkContextParamsSelfManaged *paramsSelfManaged; // @synthesize paramsSelfManaged=_paramsSelfManaged;
- (id)initWithParamsExternalManaged:(id)arg1;
- (id)initWithParamsSelfManaged:(id)arg1;

@end

