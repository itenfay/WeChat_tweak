//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSNumber, NSString, WxaLiteAppWidgetCheckAndGetLiteAppPathMessage, WxaLiteAppWidgetDestroyMessage, WxaLiteAppWidgetGenLiteAppUuidMessage, WxaLiteAppWidgetShowViewMessage;

@protocol WxaLiteAppWidgetHostPluginApi
- (void)destroyLiteAppViewMsg:(WxaLiteAppWidgetDestroyMessage *)arg1 error:(id *)arg2;
- (void)showLiteAppViewMsg:(WxaLiteAppWidgetShowViewMessage *)arg1 error:(id *)arg2;
- (NSNumber *)genLiteAppUuidMsg:(WxaLiteAppWidgetGenLiteAppUuidMessage *)arg1 error:(id *)arg2;
- (NSString *)checkAndGetLiteAppPathMsg:(WxaLiteAppWidgetCheckAndGetLiteAppPathMessage *)arg1 error:(id *)arg2;
- (NSNumber *)getLiteAppEngineIdWithError:(id *)arg1;
@end

