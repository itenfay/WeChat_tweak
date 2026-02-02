//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FavFileUtil : NSObject
{
}

+ (id)Get3rdAppTempPathByLocalDataId:(id)arg1 isThumb:(_Bool)arg2 DataFmt:(id)arg3;
+ (id)GetPathByMd5:(id)arg1 isThumb:(_Bool)arg2 DataFmt:(id)arg3 isTmp:(_Bool)arg4;
+ (id)GetPathByMd5:(id)arg1 isThumb:(_Bool)arg2 DataFmt:(id)arg3;
+ (id)GetTempPathByMd5:(id)arg1 isThumb:(_Bool)arg2 DataFmt:(id)arg3;
+ (_Bool)isFavoritesPath:(id)arg1;
+ (_Bool)isFavoritesDataFile:(id)arg1;
+ (_Bool)isCompressedVideoPath:(id)arg1;
+ (id)getCompressedVideoPathForPath:(id)arg1;
+ (_Bool)isFavoritesTempFilePath:(id)arg1;
+ (id)getTempFilePath;
+ (id)CopyFileFromOriginPath:(id)arg1;
+ (void)DeleteTempFile:(id)arg1;
+ (id)TempDataWriteToFile:(id)arg1 ext:(id)arg2;
+ (id)TempDataWriteToFile:(id)arg1;
+ (id)UIThumbImageWriteToFile:(id)arg1;
+ (id)UIImageWriteToFile:(id)arg1;
+ (id)getFavoritesBatchDelQueuePath;
+ (id)getFavoritesSettingPath;
+ (id)getFavoritesSyncBufferPath;
+ (id)getFavWebCacheDir;
+ (id)getCompressedVideoDir;
+ (id)getFavTempFileDir;
+ (id)getFavoritesRecentItemsDir;
+ (id)getFavorites3rdTempDir;
+ (id)getFavoritesDataDir;
+ (id)getFavoritesDBPath;
+ (id)getFavoritesBkgImageCache;
+ (id)getFavoritesBkgImageDir;
+ (id)getFavoritesFontCache;
+ (id)getFavoritesFontDir;
+ (id)getUserFavoritesRootDir;

@end

