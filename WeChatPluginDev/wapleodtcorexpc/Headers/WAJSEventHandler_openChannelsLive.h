//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAJSEventHandler_openChannelsLive
{
    _Bool _isCallByAds;
}

@property(nonatomic) _Bool isCallByAds; // @synthesize isCallByAds=_isCallByAds;
- (_Bool)endOnOpen;
- (id)createAdsParamsWithExtraData:(id)arg1;
- (id)createLivePermissionVerifyInfWithExtraData:(id)arg1;
- (void)failBlockHandler:(int)arg1;
- (void)handleJSEvent:(id)arg1;

@end

