//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UINavigationController;

@interface MMFinderLiveQrCodeSessionSelectController
{
    UINavigationController *_navVC;
    NSString *_qrCodeUri;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *qrCodeUri; // @synthesize qrCodeUri=_qrCodeUri;
@property(retain, nonatomic) UINavigationController *navVC; // @synthesize navVC=_navVC;
- (void)getQrSelectiveGoInfoFailWithErrorCode:(unsigned int)arg1 errorMsg:(id)arg2;
- (void)sendVisibilityOrChargeSettingsReq:(id)arg1 selectChatroomArr:(id)arg2 selectUserNameArr:(id)arg3;
- (void)callbackDelegate;

@end

