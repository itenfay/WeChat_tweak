//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface RingToneBGMInfo : NSObject
{
    NSString *_songName;
    NSString *_singerName;
    NSString *_manualSongName;
    NSString *_manualSingerName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *manualSingerName; // @synthesize manualSingerName=_manualSingerName;
@property(copy, nonatomic) NSString *manualSongName; // @synthesize manualSongName=_manualSongName;
@property(copy, nonatomic) NSString *singerName; // @synthesize singerName=_singerName;
@property(copy, nonatomic) NSString *songName; // @synthesize songName=_songName;

@end

