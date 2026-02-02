//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface MMSoundSwitchDetector
{
    unsigned int _soundId;
    NSMutableArray *_completeHandlers;
    double _beginTime;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) NSMutableArray *completeHandlers; // @synthesize completeHandlers=_completeHandlers;
@property(nonatomic) unsigned int soundId; // @synthesize soundId=_soundId;
- (void)complete;
- (void)dealloc;
- (void)checkSoundSwitchStatus:(CDUnknownBlockType)arg1;
- (id)init;

@end

