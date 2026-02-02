//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface VideoPreloadReportData
{
    unsigned int _preloadVideoPercent;
    unsigned int _preloadDuration;
    unsigned int _preloadDataSize;
    unsigned int _preloadVideoSize;
    NSString *_mediaId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int preloadVideoSize; // @synthesize preloadVideoSize=_preloadVideoSize;
@property(nonatomic) unsigned int preloadDataSize; // @synthesize preloadDataSize=_preloadDataSize;
@property(nonatomic) unsigned int preloadDuration; // @synthesize preloadDuration=_preloadDuration;
@property(nonatomic) unsigned int preloadVideoPercent; // @synthesize preloadVideoPercent=_preloadVideoPercent;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;

@end

