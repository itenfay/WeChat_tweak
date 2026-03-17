//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@protocol _TtP6WeChat30MagicBrandJsApiContextDelegate_
- (void)invokeFlutterApiWithEvent:(NSString *)arg1 data:(NSData *)arg2 callback:(void (^)(MagicSclBizApiResponse *))arg3;
- (void)getBrandServiceSessionIdWithCallback:(NSUnit * (^)(NSString *, NSString *))arg1;
- (void)showCustomHalfScreenDialogWithExtra:(NSString *)arg1;
- (void)dismissPopupWindow;
- (void)showPopupWindowWithMask:(_Bool)arg1 maskColor:(long long)arg2;
@end

