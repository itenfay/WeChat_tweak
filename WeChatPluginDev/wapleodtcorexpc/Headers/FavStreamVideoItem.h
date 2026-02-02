//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface FavStreamVideoItem
{
    unsigned int _streamVideoTotalTime;
    NSString *_streamVideoUrl;
    NSString *_streamVideoTitle;
    NSString *_streamVideoWording;
    NSString *_streamVideoWebUrl;
    NSString *_streamVideoThumbUrl;
    NSString *_streamVideoPublishId;
    NSString *_streamVideoAdUxInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *streamVideoAdUxInfo; // @synthesize streamVideoAdUxInfo=_streamVideoAdUxInfo;
@property(retain, nonatomic) NSString *streamVideoPublishId; // @synthesize streamVideoPublishId=_streamVideoPublishId;
@property(retain, nonatomic) NSString *streamVideoThumbUrl; // @synthesize streamVideoThumbUrl=_streamVideoThumbUrl;
@property(nonatomic) unsigned int streamVideoTotalTime; // @synthesize streamVideoTotalTime=_streamVideoTotalTime;
@property(retain, nonatomic) NSString *streamVideoWebUrl; // @synthesize streamVideoWebUrl=_streamVideoWebUrl;
@property(retain, nonatomic) NSString *streamVideoWording; // @synthesize streamVideoWording=_streamVideoWording;
@property(retain, nonatomic) NSString *streamVideoTitle; // @synthesize streamVideoTitle=_streamVideoTitle;
@property(retain, nonatomic) NSString *streamVideoUrl; // @synthesize streamVideoUrl=_streamVideoUrl;

@end

