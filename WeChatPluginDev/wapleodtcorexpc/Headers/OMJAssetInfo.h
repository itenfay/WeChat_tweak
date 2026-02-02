//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJAssetInfo : NSObject
{
    _Bool _isLivePhoto;
    unsigned long long _livePhotoUsage;
    shared_ptr_5d30c34f _backingInfo;
}

+ (id)assetInfoWithMediaFileAtPath:(id)arg1 identifier:(id)arg2 mediaType:(long long)arg3 error:(id *)arg4;
+ (id)assetInfoWithPHLocalIdentifier:(id)arg1 livePhotoUsage:(unsigned long long)arg2 error:(id *)arg3;
+ (id)assetInfoWithPHLocalIdentifier:(id)arg1 error:(id *)arg2;
+ (id)assetInfoWithPHAsset:(id)arg1 livePhotoUsage:(unsigned long long)arg2 error:(id *)arg3;
+ (id)assetInfoWithPHAsset:(id)arg1 error:(id *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_5d30c34f backingInfo; // @synthesize backingInfo=_backingInfo;
@property(readonly, nonatomic) _Bool isLivePhoto; // @synthesize isLivePhoto=_isLivePhoto;
@property(readonly, nonatomic) unsigned long long livePhotoUsage; // @synthesize livePhotoUsage=_livePhotoUsage;
- (id)description;
@property(readonly, nonatomic) long long mediaType;
@property(readonly, nonatomic) NSString *mediaFilePath;
@property(readonly, nonatomic) NSString *localIdentifier;
- (id)initWithBackingAssetInfo:(shared_ptr_5d30c34f)arg1;

@end

