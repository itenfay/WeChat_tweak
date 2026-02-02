//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, MMWebCanvasLayoutData, NSDictionary, NSString;
@protocol WXCustomWebViewControllerProtocol;

@protocol MMCanvasLogicClientContextDelegate <NSObject>
- (MMUIViewController<WXCustomWebViewControllerProtocol> *)getCurrentWebviewViewController;
- (void)onDeleteCanvasCardByCardId:(NSString *)arg1 fromCanvasId:(NSString *)arg2;
- (void)onPreloadImageWithUrl:(NSString *)arg1 canvasId:(NSString *)arg2;
- (void)onCallbackPopUpCanvasClose:(NSString *)arg1 callbackId:(NSString *)arg2;
- (void)onCallbackWithId:(NSString *)arg1 eventInfo:(NSString *)arg2;
- (void)onCallbackWithId:(NSString *)arg1 params:(NSDictionary *)arg2;
- (void)onCanvasSetHeight:(double)arg1 forCanvasId:(NSString *)arg2;
- (void)onSaveLayoutData:(MMWebCanvasLayoutData *)arg1 forCanvasId:(NSString *)arg2;
- (MMWebCanvasLayoutData *)onGetLayoutDataForCanvasId:(NSString *)arg1;
@end

