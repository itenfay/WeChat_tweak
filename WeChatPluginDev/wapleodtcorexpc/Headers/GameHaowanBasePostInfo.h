//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface GameHaowanBasePostInfo
{
    _Bool _isMiniGamePublish;
    _Bool _needDelAfterPost;
    long long _postType;
    NSString *_extra;
    long long _source;
    NSString *_videoId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needDelAfterPost; // @synthesize needDelAfterPost=_needDelAfterPost;
@property(retain, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(nonatomic) _Bool isMiniGamePublish; // @synthesize isMiniGamePublish=_isMiniGamePublish;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(nonatomic) long long postType; // @synthesize postType=_postType;

@end

