//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSNumber;

@protocol FPMaasImageEditorApi
- (NSNumber *)deviceSupportWithError:(id *)arg1;
- (NSNumber *)releaseFlutterInstanceWithError:(id *)arg1;
- (void)teardownMaasWithCompletion:(void (^)(NSNumber *, FlutterError *))arg1;
- (NSNumber *)getSdkVersionWithError:(id *)arg1;
- (void)launchMaasCoreWithCompletion:(void (^)(NSNumber *, FlutterError *))arg1;
@end

