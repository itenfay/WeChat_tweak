//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FlutterStandardTypedData, NSString;

@protocol TingInsertedContentApi
- (void)closeProfileDialogWithError:(id *)arg1;
- (void)showBizProfileDialogUserName:(NSString *)arg1 percentHeight:(double)arg2 listenItemData:(FlutterStandardTypedData *)arg3 scene:(long long)arg4 sceneNote:(NSString *)arg5 completion:(void (^)(FlutterError *))arg6;
- (void)showFinderProfileDialogUserName:(NSString *)arg1 percentHeight:(double)arg2 listenItemData:(FlutterStandardTypedData *)arg3 tabType:(long long)arg4 requestScene:(long long)arg5 extraInfo:(NSString *)arg6 followScene:(long long)arg7 completion:(void (^)(FlutterError *))arg8;
@end

