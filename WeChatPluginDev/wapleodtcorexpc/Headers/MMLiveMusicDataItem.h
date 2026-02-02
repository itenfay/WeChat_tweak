//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveMusicDataItem : NSObject
{
    unsigned int _songId;
    unsigned int _songtype;
    NSString *_songPlayUrl;
    NSString *_listenId;
    unsigned long long _playState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long playState; // @synthesize playState=_playState;
@property(nonatomic) unsigned int songtype; // @synthesize songtype=_songtype;
@property(copy, nonatomic) NSString *listenId; // @synthesize listenId=_listenId;
@property(copy, nonatomic) NSString *songPlayUrl; // @synthesize songPlayUrl=_songPlayUrl;
@property(nonatomic) unsigned int songId; // @synthesize songId=_songId;
- (id)convertToBriefMusicInfo;

@end

