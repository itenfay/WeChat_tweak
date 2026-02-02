//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAsset, NSString;

@interface MMMusicAlbumVideoCellModel
{
    int _pos;
    NSString *_uniqueId;
    MMAsset *_asset;
    double _duration;
    NSString *_localPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *localPath; // @synthesize localPath=_localPath;
@property(nonatomic) int pos; // @synthesize pos=_pos;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) MMAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (unsigned long long)hash;
- (_Bool)isEqualToMMMusicAlbumVideoCellModel:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)canSelectVideoWithMinDuration:(double)arg1;
- (_Bool)isValidLocalVideoForPost;
- (void)asyncGetLocalPath:(CDUnknownBlockType)arg1;
- (void)asyncGetDuration:(CDUnknownBlockType)arg1;

@end

