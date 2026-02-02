//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WCMomentsPickerActionRecorder : NSObject
{
    NSMutableArray *_selectedAssetOperationList;
    long long _videoProducerEnabler;
    NSMutableArray *_assetOperationList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *assetOperationList; // @synthesize assetOperationList=_assetOperationList;
@property(nonatomic) long long videoProducerEnabler; // @synthesize videoProducerEnabler=_videoProducerEnabler;
@property(retain, nonatomic) NSMutableArray *selectedAssetOperationList; // @synthesize selectedAssetOperationList=_selectedAssetOperationList;
- (void)_sortSelectedAssetOperation:(id)arg1;
- (id)_ensureSelectedAssetOperationList;
- (id)_ensureAssetOperationList;
- (void)_removeSelectedAssetOperation:(id)arg1;
- (void)_addSelectedAssetOperation:(id)arg1;
- (void)_updateSelectedAssetSetWithAssetOperation:(id)arg1;
- (void)_recordAssetOperation:(id)arg1;
- (void)pickerDidDisableVideoProducer;
- (void)pickerDidEnableVideoProducer:(long long)arg1;
- (void)pickerDidDeselectAsset:(id)arg1;
- (void)pickerDidSelectAsset:(id)arg1 from:(long long)arg2;
- (void)pickerDidCancel;
- (void)pickerDidFinish;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

