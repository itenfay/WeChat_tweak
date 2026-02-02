//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface MMImagePickerCacheObj : NSObject
{
    NSMutableArray *_albums;
    NSMutableArray *_imageOnlyAlbums;
    NSMutableArray *_VideoOnlyAlbums;
    NSMutableDictionary *_assets;
    NSMutableArray *_assetKeys;
    NSString *_lastAlbumId;
}

+ (void)initialize;
+ (void)PBArrayAdd_assetKeys;
+ (void)PBArrayAdd_VideoOnlyAlbums;
+ (void)PBArrayAdd_imageOnlyAlbums;
+ (void)PBArrayAdd_lastAlbumId;
+ (void)PBArrayAdd_assets;
+ (void)PBArrayAdd_albums;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastAlbumId; // @synthesize lastAlbumId=_lastAlbumId;
@property(retain, nonatomic) NSMutableArray *assetKeys; // @synthesize assetKeys=_assetKeys;
@property(retain, nonatomic) NSMutableDictionary *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) NSMutableArray *VideoOnlyAlbums; // @synthesize VideoOnlyAlbums=_VideoOnlyAlbums;
@property(retain, nonatomic) NSMutableArray *imageOnlyAlbums; // @synthesize imageOnlyAlbums=_imageOnlyAlbums;
@property(retain, nonatomic) NSMutableArray *albums; // @synthesize albums=_albums;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

