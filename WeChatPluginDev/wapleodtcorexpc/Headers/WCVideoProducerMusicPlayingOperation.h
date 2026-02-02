//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class OMJMusicInfo;

@interface WCVideoProducerMusicPlayingOperation
{
    OMJMusicInfo *_omjMusicInfo;
    long long _musicOrder;
}

- (void).cxx_destruct;
@property(nonatomic) long long musicOrder; // @synthesize musicOrder=_musicOrder;
@property(retain, nonatomic) OMJMusicInfo *omjMusicInfo; // @synthesize omjMusicInfo=_omjMusicInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMusic:(id)arg1 order:(long long)arg2;

@end

