//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MVPlayerPluginMusicInitalSeek
{
    _Bool _autoPlayAfterSeek;
    double _initalTime;
    double _pendingInitalTime;
}

@property(nonatomic) double pendingInitalTime; // @synthesize pendingInitalTime=_pendingInitalTime;
@property(nonatomic) double initalTime; // @synthesize initalTime=_initalTime;
@property(nonatomic) _Bool autoPlayAfterSeek; // @synthesize autoPlayAfterSeek=_autoPlayAfterSeek;
- (void)executeWithEvent:(unsigned long long)arg1;
- (id)initWithInitialTime:(double)arg1;

@end

