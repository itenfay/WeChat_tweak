//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMAlbumFilterOptions : NSObject
{
    _Bool _shouldIncludeVideo;
    _Bool _isOnlyShowVideo;
    _Bool _isOnlyShowAssetWithLocation;
    long long _livePhotoMode;
}

@property(nonatomic) long long livePhotoMode; // @synthesize livePhotoMode=_livePhotoMode;
@property(nonatomic) _Bool isOnlyShowAssetWithLocation; // @synthesize isOnlyShowAssetWithLocation=_isOnlyShowAssetWithLocation;
@property(nonatomic) _Bool isOnlyShowVideo; // @synthesize isOnlyShowVideo=_isOnlyShowVideo;
@property(nonatomic) _Bool shouldIncludeVideo; // @synthesize shouldIncludeVideo=_shouldIncludeVideo;

@end

