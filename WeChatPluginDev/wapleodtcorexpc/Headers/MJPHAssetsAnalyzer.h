//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJPHAssetsAnalyzer : NSObject
{
    _Bool _isAssetEdited;
    _Bool _isScreedshotAsset;
    long long _realShotAssetCount;
    long long _totalAssetCount;
}

@property(nonatomic) long long totalAssetCount; // @synthesize totalAssetCount=_totalAssetCount;
@property(nonatomic) long long realShotAssetCount; // @synthesize realShotAssetCount=_realShotAssetCount;
@property(nonatomic) _Bool isScreedshotAsset; // @synthesize isScreedshotAsset=_isScreedshotAsset;
@property(nonatomic) _Bool isAssetEdited; // @synthesize isAssetEdited=_isAssetEdited;
- (void)handleFailWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleSuccessWithResult:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)analyzeVideoWithPHAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)analyzeImageWithPHAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)analyzeMetadataWithPHAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)checkAssetEditingFlagWithAssets:(id)arg1;
- (void)analyzeWithOriginAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)analyzeWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)initImpl;
- (void)dealloc;
- (id)init;

@end

