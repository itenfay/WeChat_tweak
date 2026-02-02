//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WAUniversalAudioInfo;

@interface WAUniversalAudioPlayerInfo : NSObject
{
    unsigned long long _playerState;
    WAUniversalAudioInfo *_audioInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAUniversalAudioInfo *audioInfo; // @synthesize audioInfo=_audioInfo;
@property(nonatomic) unsigned long long playerState; // @synthesize playerState=_playerState;

@end

