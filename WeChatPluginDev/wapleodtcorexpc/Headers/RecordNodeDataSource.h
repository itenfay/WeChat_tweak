//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CommonMessageViewModel, NSString;

@interface RecordNodeDataSource : NSObject
{
    CommonMessageViewModel *_referMessageViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CommonMessageViewModel *referMessageViewModel; // @synthesize referMessageViewModel=_referMessageViewModel;
- (id)referDescForAccessibility;
- (id)referDesc;
- (id)getReferImage;
- (_Bool)hasReferImage;
- (_Bool)hasRefer;
- (void)IsUrlWeAppThumbPath:(id *)arg1 ThumbUrl:(id *)arg2;
- (unsigned int)GetGameEmoticonContent;
- (void)UpdateEmoticonSize:(struct CGSize)arg1;
- (struct CGSize)GetEmoticonSize;
- (id)GetEmoticonWrap;
- (_Bool)StartDownload;
- (id)GetSightPath;
- (id)GetFilePath;
- (id)GetFileName;
- (id)GetFileExt;
- (id)GetMusicInfo;
- (_Bool)IsUrlMusicThumbPath:(id *)arg1;
- (id)GetWebPageDomin;
- (_Bool)IsUrlWebPageThumbPath:(id *)arg1 thumbResourceIdentifier:(id *)arg2;
- (unsigned int)GetVideoDuration;
- (id)GetVideoTitle;
- (_Bool)IsUrlVideoThumbPath:(id *)arg1;
- (unsigned int)GetVoiceFormat;
- (id)GetAudioInfo;
- (id)GetImgArray;
- (int)GetParentDownloadStatus;
- (int)GetImageDataDownloadStatus;
- (unsigned int)GetImageIndex;
- (id)GetImageSourcePath;
- (id)GetImagePath;
- (id)GetMaskImagePath;
- (id)GetImageLocalID;
- (unsigned int)GetParentLocalID;
- (unsigned long long)getParserType;
- (id)messageViewModel;
- (id)GetDataPath;
- (id)GetThumbPath;
- (id)getThumbPathForData:(id)arg1;
- (id)GetDataItem;
- (id)GetParent;
- (double)GetRecordNodeContentHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

