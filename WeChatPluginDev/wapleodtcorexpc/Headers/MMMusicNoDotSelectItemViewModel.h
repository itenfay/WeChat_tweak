//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAsset, MMMusicFinderVideoCellModel, NSString, WCFinderDataItem;

@interface MMMusicNoDotSelectItemViewModel
{
    NSString *_uniqueId;
    MMAsset *_asset;
    NSString *_assetLocalPath;
    NSString *_tid;
    NSString *_nonceId;
    NSString *_finderCoverUrl;
    double _duration;
    WCFinderDataItem *_draftFinderDataItem;
    MMMusicFinderVideoCellModel *_finderVideoCellModel;
    unsigned long long _index;
}

+ (id)modelFromTid:(id)arg1 nonceId:(id)arg2;
+ (id)modelFromMMMusicFinderVideoCellModel:(id)arg1;
+ (id)modelFromMMMusicAlbumVideoCellModel:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) MMMusicFinderVideoCellModel *finderVideoCellModel; // @synthesize finderVideoCellModel=_finderVideoCellModel;
@property(retain, nonatomic) WCFinderDataItem *draftFinderDataItem; // @synthesize draftFinderDataItem=_draftFinderDataItem;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *finderCoverUrl; // @synthesize finderCoverUrl=_finderCoverUrl;
@property(retain, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSString *assetLocalPath; // @synthesize assetLocalPath=_assetLocalPath;
@property(retain, nonatomic) MMAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (unsigned long long)hash;
- (_Bool)isEqualToMMMusicNoDotSelectItemViewModel:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)genMMMusicMVTrackItemLocalPic;
- (_Bool)isDraftItem;
- (id)genMMMusicMVTrackItemLocalVideo;
- (void)preLoad;

@end

