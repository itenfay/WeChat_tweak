//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAudioPlayer;

@interface AVAudioPlayerWeakWrapper : NSObject
{
    AVAudioPlayer *_player;
}

+ (id)wrapperWithPlayer:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak AVAudioPlayer *player; // @synthesize player=_player;

@end

