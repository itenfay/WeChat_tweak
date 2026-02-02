//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveStorageCleanupPinningToken, NSString;

@interface MMFinderLiveReplayStopgapPlayerViewModel
{
    NSString *_filename;
    MMLiveStorageCleanupPinningToken *_resourcesPinningToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveStorageCleanupPinningToken *resourcesPinningToken; // @synthesize resourcesPinningToken=_resourcesPinningToken;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (id)videoFormatPath;
- (id)videoSavePath;
- (id)generateDownloadArgsWrap;
- (id)createPlayerInfo;

@end

