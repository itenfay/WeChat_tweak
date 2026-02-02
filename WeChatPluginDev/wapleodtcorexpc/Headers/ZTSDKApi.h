//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol SKStoreProductViewControllerDelegate;

@interface ZTSDKApi : NSObject
{
    id <SKStoreProductViewControllerDelegate> _storeControllerDelegate;
}

+ (void)reportToTDM:(id)arg1 report:(id)arg2;
+ (void)DoReportToTDM:(id)arg1 report:(id)arg2;
+ (void)reportAppstoreEventInfo:(id)arg1;
+ (id)pressentCustomViewControllerFromViewController:(id)arg1 frame:(struct CGRect)arg2 productIdentifier:(id)arg3 isFull:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)startOpenStoreProductVC:(id)arg1 storeViewFrame:(struct CGRect)arg2 productID:(id)arg3 report:(id)arg4 isFull:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)addCustomStoreProductVC:(id)arg1 storeViewFrame:(struct CGRect)arg2 storeId:(id)arg3 channelInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)newPresentStoreProductViewController:(id)arg1 storeId:(id)arg2 channelInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)setStoreViewDelegate:(id)arg1;
+ (void)newJumpToAppStore:(id)arg1 channelInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)reportShareEvent:(id)arg1 sharetype:(id)arg2 sharescene:(id)arg3;
+ (void)reportSearchEvent:(id)arg1 searchword:(id)arg2;
+ (void)reportOfferEvent:(id)arg1;
+ (void)reportExposureEvent:(id)arg1;
+ (void)reportClickEvent:(id)arg1;
+ (void)reportOpenUrl:(id)arg1 channelInfo:(id)arg2;
+ (void)newOpenUrl:(id)arg1 channelInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)enableDeviceCollect:(_Bool)arg1;
+ (void)setLogLevel:(long long)arg1;
+ (void)initWithDeviceInfo:(id)arg1 model:(id)arg2 brand:(id)arg3 iosver:(id)arg4;
+ (void)initSDK:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SKStoreProductViewControllerDelegate> storeControllerDelegate; // @synthesize storeControllerDelegate=_storeControllerDelegate;
- (void)productViewControllerDidFinish:(id)arg1;
- (id)initSingleton;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

