//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray;

@interface StreamVoiceInputPrepareView
{
    NSMutableArray *_dots;
    NSArray *_animationKeyTimes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *animationKeyTimes; // @synthesize animationKeyTimes=_animationKeyTimes;
@property(retain, nonatomic) NSMutableArray *dots; // @synthesize dots=_dots;
- (void)stopPlayAnimation;
- (void)startPlayAnimation;
- (id)init;

@end

