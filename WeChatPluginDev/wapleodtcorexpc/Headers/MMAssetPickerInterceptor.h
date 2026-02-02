//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMAssetPickerControllerState, NSMutableDictionary;

@interface MMAssetPickerInterceptor : NSObject
{
    _Bool _shouldInterrupt;
    _Bool _shouldKeepLoading;
    _Bool _shouldReactivePreviewController;
    MMAssetPickerControllerState *_updateState;
    NSMutableDictionary *_assetInjectorMap;
}

+ (id)_safeKeyForAsset:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *assetInjectorMap; // @synthesize assetInjectorMap=_assetInjectorMap;
@property(nonatomic) _Bool shouldReactivePreviewController; // @synthesize shouldReactivePreviewController=_shouldReactivePreviewController;
@property(nonatomic) _Bool shouldKeepLoading; // @synthesize shouldKeepLoading=_shouldKeepLoading;
@property(nonatomic) _Bool shouldInterrupt; // @synthesize shouldInterrupt=_shouldInterrupt;
@property(retain, nonatomic) MMAssetPickerControllerState *updateState; // @synthesize updateState=_updateState;
- (id)_findInjectorByAsset:(id)arg1 andRemove:(_Bool)arg2;
- (id)findInjectorByAsset:(id)arg1;
- (id)unbindInjectorByAsset:(id)arg1;
- (void)bindInjector:(id)arg1 withAsset:(id)arg2;
- (id)createAndBindAssetInjectorForAsset:(id)arg1;

@end

