//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, UIImage;

@interface MMPHAlbumCacheObj
{
    _Bool _isThumbUpdated;
    _Bool _isPhotoCountUpdated;
    _Bool _isNameUpdated;
    NSString *_identifier;
    NSMutableDictionary *_assetsDic;
    long long _albumPhotoCount;
    NSString *_albumName;
    UIImage *_thumbImage;
}

+ (void)initialize;
+ (void)PBArrayAdd_albumName;
+ (void)PBArrayAdd_albumPhotoCount;
+ (void)PBArrayAdd_assetsDic;
+ (void)PBArrayAdd_identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(nonatomic) _Bool isNameUpdated; // @synthesize isNameUpdated=_isNameUpdated;
@property(nonatomic) _Bool isPhotoCountUpdated; // @synthesize isPhotoCountUpdated=_isPhotoCountUpdated;
@property(nonatomic) _Bool isThumbUpdated; // @synthesize isThumbUpdated=_isThumbUpdated;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(nonatomic) long long albumPhotoCount; // @synthesize albumPhotoCount=_albumPhotoCount;
@property(retain, nonatomic) NSMutableDictionary *assetsDic; // @synthesize assetsDic=_assetsDic;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)assetOfIndex:(unsigned long long)arg1;
- (unsigned long long)photosCount;
- (id)coverImage;
- (id)name;
- (id)albumId;
- (void)retrivePhotoCountWithAsyncBlock:(CDUnknownBlockType)arg1;
- (void)retriveCoverImageWithAsyncBlock:(CDUnknownBlockType)arg1;
- (void)updateAssetId:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)updateThumbImage:(id)arg1;
- (id)fetchThumbImage;
- (void)onMemoryWarning;
- (id)initWithIdentifier:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

