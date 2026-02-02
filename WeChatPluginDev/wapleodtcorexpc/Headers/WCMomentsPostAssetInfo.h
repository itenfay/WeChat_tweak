//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EditImageAttr, EditVideoAttr, NSString;

@interface WCMomentsPostAssetInfo : NSObject
{
    _Bool _isEdited;
    _Bool _isLivePhoto;
    _Bool _livePhotoOpt;
    NSString *_assetId;
    long long _assetType;
    long long _mediaSource;
    EditImageAttr *_imageEditAttr;
    EditVideoAttr *_videoEditAttr;
    NSString *_uploadHash;
    struct CGSize _uploadMediaSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize uploadMediaSize; // @synthesize uploadMediaSize=_uploadMediaSize;
@property(copy, nonatomic) NSString *uploadHash; // @synthesize uploadHash=_uploadHash;
@property(nonatomic) _Bool livePhotoOpt; // @synthesize livePhotoOpt=_livePhotoOpt;
@property(nonatomic) _Bool isLivePhoto; // @synthesize isLivePhoto=_isLivePhoto;
@property(retain, nonatomic) EditVideoAttr *videoEditAttr; // @synthesize videoEditAttr=_videoEditAttr;
@property(retain, nonatomic) EditImageAttr *imageEditAttr; // @synthesize imageEditAttr=_imageEditAttr;
@property(nonatomic) _Bool isEdited; // @synthesize isEdited=_isEdited;
@property(nonatomic) long long mediaSource; // @synthesize mediaSource=_mediaSource;
@property(nonatomic) long long assetType; // @synthesize assetType=_assetType;
@property(copy, nonatomic) NSString *assetId; // @synthesize assetId=_assetId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSightDraft:(id)arg1 fromSource:(long long)arg2;
- (id)initWithImage:(id)arg1 fromSource:(long long)arg2;
- (id)initWithAssetHash:(id)arg1 assetType:(long long)arg2 fromSource:(long long)arg3;
- (id)initWithAssetId:(id)arg1 assetType:(long long)arg2 fromSource:(long long)arg3;

@end

