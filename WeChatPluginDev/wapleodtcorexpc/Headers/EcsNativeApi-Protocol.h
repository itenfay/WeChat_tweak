//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EcsMiniProgramLaunchBundle, EcsPayInfo, NSString;

@protocol EcsNativeApi
- (void)openUrlUrl:(NSString *)arg1 error:(id *)arg2;
- (void)enableGiftPageSwipeWithError:(id *)arg1;
- (NSString *)getSearchtExtraSessionDataWithError:(id *)arg1;
- (void)launchSearchExtData:(NSString *)arg1 completion:(void (^)(FlutterError *))arg2;
- (void)launchMiniProgramBundle:(EcsMiniProgramLaunchBundle *)arg1 completion:(void (^)(EcsOpenServiceResponse *, FlutterError *))arg2;
- (void)callPayPayInfo:(EcsPayInfo *)arg1 completion:(void (^)(EcsPayResult *, FlutterError *))arg2;
- (void)selectContactWithCompletion:(void (^)(EcsContactInfo *, FlutterError *))arg1;
- (void)selectAddressFromGiver:(_Bool)arg1 completion:(void (^)(EcsAddressStruct *, FlutterError *))arg2;
- (void)sendLocalGiftMessageMsgXml:(NSString *)arg1 recipientUserName:(NSString *)arg2 completion:(void (^)(FlutterError *))arg3;
@end

