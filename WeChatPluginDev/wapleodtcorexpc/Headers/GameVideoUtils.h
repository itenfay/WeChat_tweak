//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface GameVideoUtils
{
}

+ (id)abosultePathForRelativePath:(id)arg1;
+ (id)relativePathForAbosultePath:(id)arg1;
+ (void)showViewControllerWithCreator:(CDUnknownBlockType)arg1;
+ (void)showViewController:(id)arg1;
+ (id)openWebViewWithUrl:(id)arg1;
+ (id)storeByCopyVideoToWebResource:(id)arg1 andThumbPath:(id)arg2;
+ (id)storeVideoToWebResource:(id)arg1;
+ (_Bool)readImagePropertiesWithoutLoadingDataForPath:(id)arg1 thenDo:(CDUnknownBlockType)arg2;
+ (struct CGSize)readImageSizeWithoutLoadingDataForPath:(id)arg1;
+ (id)humanEasyTextOfDataSize:(unsigned long long)arg1;
+ (id)fileExtensionFromMimeType:(id)arg1;
+ (int)getMaxRetryCount;
+ (_Bool)isRetryEnabled;
+ (int)getVideoDuration:(id)arg1;
+ (int)getVideoDurationOfPath:(id)arg1;
+ (id)haowanPostDBPath;
+ (id)postInfoFilePath;
+ (id)gameHaowanDataDir;

@end

