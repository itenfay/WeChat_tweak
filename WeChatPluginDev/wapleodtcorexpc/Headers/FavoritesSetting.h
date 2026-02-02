//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FavoritesSetting : NSObject
{
    _Bool _bIsFirstTimeInFav;
    _Bool _bHasCalculateFavItemSize;
    _Bool _bHasFixedUploadStatus;
    _Bool _useNewTagLogic;
    _Bool _hasGetFavSetting;
    _Bool _enableMusicList;
    int _showFavIntroViewTimes;
    unsigned long long _totalCapacity;
    unsigned long long _usedCapacity;
    unsigned long long _maxAutoDownloadSize;
    unsigned long long _maxFavFileSize;
}

@property(nonatomic) _Bool enableMusicList; // @synthesize enableMusicList=_enableMusicList;
@property(nonatomic) _Bool hasGetFavSetting; // @synthesize hasGetFavSetting=_hasGetFavSetting;
@property(nonatomic) _Bool useNewTagLogic; // @synthesize useNewTagLogic=_useNewTagLogic;
@property(nonatomic) _Bool bHasFixedUploadStatus; // @synthesize bHasFixedUploadStatus=_bHasFixedUploadStatus;
@property(nonatomic) _Bool bHasCalculateFavItemSize; // @synthesize bHasCalculateFavItemSize=_bHasCalculateFavItemSize;
@property(nonatomic) int showFavIntroViewTimes; // @synthesize showFavIntroViewTimes=_showFavIntroViewTimes;
@property(nonatomic) _Bool bIsFirstTimeInFav; // @synthesize bIsFirstTimeInFav=_bIsFirstTimeInFav;
@property(nonatomic) unsigned long long maxFavFileSize; // @synthesize maxFavFileSize=_maxFavFileSize;
@property(nonatomic) unsigned long long maxAutoDownloadSize; // @synthesize maxAutoDownloadSize=_maxAutoDownloadSize;
@property(nonatomic) unsigned long long usedCapacity; // @synthesize usedCapacity=_usedCapacity;
@property(nonatomic) unsigned long long totalCapacity; // @synthesize totalCapacity=_totalCapacity;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

