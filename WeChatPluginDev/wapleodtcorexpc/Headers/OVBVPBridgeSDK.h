//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OVBVPBridgeSDK : NSObject
{
}

+ (id)renderEngineEAGLContext;
+ (id)URLForLogDirectory;
+ (_Bool)shouldLivePhotoClipUseAsImageForPostProcs:(id)arg1;
+ (id)getTextLayerMetadatasForLowerThirdWithID:(id)arg1 ltLayerID:(int)arg2;
+ (id)getTextLayerMetadatasForLowerThirdWithID:(id)arg1;
+ (id)getFontNamesForLowerThirdWithID:(id)arg1;
+ (struct CGSize)calculateLowerThirdContentSizeWithID:(id)arg1 lowerThirdBuildData:(id)arg2;
+ (struct CGSize)calculateNormalizedLowerThirdContentSizeWithID:(id)arg1 lowerThirdBuildData:(id)arg2 aspecRatio:(unsigned long long)arg3;
+ (void)cleanupMaterialsWithIDs:(id)arg1;
+ (void)registerSingleMaterialWithoutVersionCheckWithDirectory:(id)arg1 specifiedMaterialID:(id)arg2;
+ (void)registerSingleMaterialWithoutVersionCheckWithDirectory:(id)arg1;
+ (void)registerAllMaterialsWithoutVersionCheckUnderDirectory:(id)arg1;
+ (void)registerSingleMaterialWithDirectory:(id)arg1 specifiedMaterialID:(id)arg2;
+ (void)registerSingleMaterialWithDirectory:(id)arg1;
+ (void)registerAllMaterialsUnderDirectory:(id)arg1;
+ (void)deleteAssetsDirectoriesWithDir:(const void *)arg1 excludedAssetIds:(const void *)arg2;
+ (void)cleanupAssetsWithExcludedLocalIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)cleanupAssetsWithExcludedPHLocalIdentifiers:(id)arg1 excludedMoviePaths:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)cleanupIntermediateFiles:(CDUnknownBlockType)arg1;
+ (id)stickerMaterialIDWithIDSuffix:(id)arg1;
+ (id)registerSticker:(id)arg1 idSuffix:(id)arg2;
+ (void)registerFont:(id)arg1 path:(id)arg2;
+ (void)applicationWillEnterForeground;
+ (void)applicationDidEnterBackground;

@end

