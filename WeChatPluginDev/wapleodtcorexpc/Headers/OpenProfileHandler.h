//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class OpenApiParameter;

@interface OpenProfileHandler
{
    OpenApiParameter *_parameter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OpenApiParameter *parameter; // @synthesize parameter=_parameter;
- (void)cancelOpenProfile;
- (void)createWechatOpenProfile;
- (void)startHandleOpenProfile:(id)arg1;

@end

