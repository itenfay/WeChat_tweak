//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BaseMessageViewModel, CEmoticonWrap, FavAudioInfo, FavoritesItemDataField, MMMusicInfo, NSMutableArray, NSString, UIImage;

@protocol RecordNodeDataSource <NSObject>
- (NSString *)referDescForAccessibility;
- (NSString *)referDesc;
- (UIImage *)getReferImage;
- (_Bool)hasReferImage;
- (_Bool)hasRefer;
- (void)IsUrlWeAppThumbPath:(id *)arg1 ThumbUrl:(id *)arg2;
- (unsigned int)GetGameEmoticonContent;
- (void)UpdateEmoticonSize:(struct CGSize)arg1;
- (struct CGSize)GetEmoticonSize;
- (CEmoticonWrap *)GetEmoticonWrap;
- (_Bool)StartDownload;
- (NSString *)GetSightPath;
- (NSString *)GetThumbPath;
- (NSString *)GetFilePath;
- (NSString *)GetFileName;
- (NSString *)GetFileExt;
- (MMMusicInfo *)GetMusicInfo;
- (_Bool)IsUrlMusicThumbPath:(id *)arg1;
- (NSString *)GetWebPageDomin;
- (_Bool)IsUrlWebPageThumbPath:(id *)arg1 thumbResourceIdentifier:(id *)arg2;
- (unsigned int)GetVideoDuration;
- (NSString *)GetVideoTitle;
- (_Bool)IsUrlVideoThumbPath:(id *)arg1;
- (unsigned int)GetVoiceFormat;
- (FavAudioInfo *)GetAudioInfo;
- (NSMutableArray *)GetImgArray;
- (int)GetParentDownloadStatus;
- (int)GetImageDataDownloadStatus;
- (unsigned int)GetImageIndex;
- (NSString *)GetImageSourcePath;
- (NSString *)GetImagePath;
- (NSString *)GetMaskImagePath;
- (NSString *)GetImageLocalID;
- (unsigned int)GetParentLocalID;
- (unsigned long long)getParserType;
- (BaseMessageViewModel *)messageViewModel;
- (NSString *)GetDataPath;
- (NSString *)getThumbPathForData:(FavoritesItemDataField *)arg1;
- (FavoritesItemDataField *)GetDataItem;
- (id)GetParent;
- (double)GetRecordNodeContentHeight;
@end

