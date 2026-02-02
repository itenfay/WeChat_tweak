//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CLLocation, EditImageLogicController, EditVideoLogicController, NSObject, NSString, PHCachingImageManager;
@protocol OS_dispatch_queue;

@interface MMAssetMgr
{
    NSObject<OS_dispatch_queue> *m_queue;
    CLLocation *m_lastLocation;
    PHCachingImageManager *m_imageManagerForIOS8Plus;
    EditImageLogicController *m_editImageLogicController;
    EditVideoLogicController *m_editVideoLogicController;
}

+ (int)GetNetType;
+ (int)gcdOfNum1:(int)arg1 andNum2:(int)arg2;
+ (id)getSimplestDimensionRatio:(struct CGSize)arg1;
+ (_Bool)isScreenshotForMetadata:(id)arg1;
+ (_Bool)isFrontCameraForMetadata:(id)arg1;
+ (_Bool)isBackCameraForMetadata:(id)arg1;
+ (_Bool)isCreatedByAppleCameraForMetadata:(id)arg1;
+ (int)getAssetSourceForMetadata:(id)arg1 isCreatedByWeChatCamera:(_Bool)arg2;
+ (int)getAssetCameraDeviceForMetadata:(id)arg1;
+ (void)reportPhotoUsageScene:(int)arg1 dimensionSize:(struct CGSize)arg2 createTimestamp:(id)arg3 isCreatedByWeChatCamera:(_Bool)arg4 metadata:(id)arg5;
- (void).cxx_destruct;
@property(nonatomic) __weak EditVideoLogicController *m_editVideoLogicController; // @synthesize m_editVideoLogicController;
@property(nonatomic) __weak EditImageLogicController *m_editImageLogicController; // @synthesize m_editImageLogicController;
@property(retain, nonatomic) PHCachingImageManager *m_imageManagerForIOS8Plus; // @synthesize m_imageManagerForIOS8Plus;
@property(retain, nonatomic) CLLocation *m_lastLocation; // @synthesize m_lastLocation;
- (double)longitude;
- (double)latitude;
- (_Bool)hasLocation;
- (void)retrieveLocationForPicker;
- (void)dispatchAction:(CDUnknownBlockType)arg1;
- (id)getQueue;
- (void)onServiceInit;
- (id)getImageManager;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

