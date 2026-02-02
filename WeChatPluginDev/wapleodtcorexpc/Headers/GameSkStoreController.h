//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GameAppStorePreloadItem, GameSKStoreDelgeate, MMUIViewController, NSMutableDictionary;
@protocol WXCustomWebViewControllerProtocol;

@interface GameSkStoreController : NSObject
{
    _Bool _enableStatusCheck;
    MMUIViewController<WXCustomWebViewControllerProtocol> *_webViewController;
    NSMutableDictionary *_preloadItemDictInfo;
    GameSKStoreDelgeate *_currentSkStoreModel;
    GameAppStorePreloadItem *_currentShowStoreItem;
    double _showStimeStamp;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableStatusCheck; // @synthesize enableStatusCheck=_enableStatusCheck;
@property(nonatomic) double showStimeStamp; // @synthesize showStimeStamp=_showStimeStamp;
@property(retain, nonatomic) GameAppStorePreloadItem *currentShowStoreItem; // @synthesize currentShowStoreItem=_currentShowStoreItem;
@property(retain, nonatomic) GameSKStoreDelgeate *currentSkStoreModel; // @synthesize currentSkStoreModel=_currentSkStoreModel;
@property(retain, nonatomic) NSMutableDictionary *preloadItemDictInfo; // @synthesize preloadItemDictInfo=_preloadItemDictInfo;
@property(nonatomic) __weak MMUIViewController<WXCustomWebViewControllerProtocol> *webViewController; // @synthesize webViewController=_webViewController;
- (void)reportProfile:(unsigned int)arg1 withTime:(unsigned int)arg2 status:(int)arg3;
- (void)onApplicationDidEnterBackground:(id)arg1;
- (void)reportAppStoreCloseOrEnterBackGround;
- (id)halfScreenTestParamWithAppInstallUrl:(id)arg1;
- (void)notifyWebViewEvent:(id)arg1 appStoreItem:(id)arg2;
- (void)onStoreVcClosed:(id)arg1;
- (void)reportStayDurationWithActionId:(id)arg1;
- (void)checkAppStorePageStatus;
- (_Bool)getPopWhenDismiss:(id)arg1;
- (id)getHostVC;
- (id)presentAppStoreWithParam:(id)arg1 onCloseBlock:(CDUnknownBlockType)arg2;
- (id)searchStoreViewInView:(id)arg1;
- (void)searchStoreViewDisplayLink:(id)arg1;
- (id)getSKStoreProductItem:(id)arg1 reportInfo:(id)arg2;
- (void)triggerAppStoreItemLoad:(id)arg1;
- (id)createSKStoreProductItem:(id)arg1 reportInfo:(id)arg2;
- (void)report12909AppStoreWithAction:(long long)arg1 item:(id)arg2 extInfo:(id)arg3;
- (void)report12909AppStoreWithAction:(long long)arg1 item:(id)arg2;
- (void)preloadSKStoreProductViewController:(id)arg1 reportInfo:(id)arg2;
- (void)cleaAllSkStoreValue;
- (void)cleanPreloadProdctVc;
- (id)init;

@end

