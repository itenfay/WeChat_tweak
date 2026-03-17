//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderLiveWcPlayerViewConfig : NSObject
{
    _Bool _autoPlay;
    _Bool _forceUseSystemPlayer;
    _Bool _configPlayerBlackBackground;
    unsigned int _initialPlayTime;
    unsigned long long _loopMode;
}

@property(nonatomic) _Bool configPlayerBlackBackground; // @synthesize configPlayerBlackBackground=_configPlayerBlackBackground;
@property(nonatomic) _Bool forceUseSystemPlayer; // @synthesize forceUseSystemPlayer=_forceUseSystemPlayer;
@property(nonatomic) unsigned int initialPlayTime; // @synthesize initialPlayTime=_initialPlayTime;
@property(nonatomic) unsigned long long loopMode; // @synthesize loopMode=_loopMode;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;

@end

