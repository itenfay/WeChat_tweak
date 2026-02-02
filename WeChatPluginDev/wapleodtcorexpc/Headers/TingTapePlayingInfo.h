//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TingItem, TingTapeItem;

@interface TingTapePlayingInfo : NSObject
{
    int _status;
    double _currentTime;
    NSString *_coverUrl;
    TingItem *_playingItem;
    TingTapeItem *_tapeItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TingTapeItem *tapeItem; // @synthesize tapeItem=_tapeItem;
@property(retain, nonatomic) TingItem *playingItem; // @synthesize playingItem=_playingItem;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) int status; // @synthesize status=_status;
- (id)desc;
- (id)title;
- (id)playingCategoryItem;
- (_Bool)isPlayingAudio;
- (_Bool)isPlaying;
- (id)clientId;
- (id)initWithTapeSnapshot:(id)arg1;

@end

