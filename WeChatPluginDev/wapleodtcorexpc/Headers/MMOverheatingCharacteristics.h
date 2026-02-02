//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate;

@interface MMOverheatingCharacteristics : NSObject
{
    NSDate *_timeThatApplicationBecomedActive;
    NSDate *_timeThatApplicationResignedActive;
    NSDate *_timeThatApplicationEnteredForeground;
    NSDate *_timeThatApplicationEnteredBackground;
    NSDate *_timeThatNetworkChangedToUnreachable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *timeThatNetworkChangedToUnreachable; // @synthesize timeThatNetworkChangedToUnreachable=_timeThatNetworkChangedToUnreachable;
@property(retain, nonatomic) NSDate *timeThatApplicationEnteredBackground; // @synthesize timeThatApplicationEnteredBackground=_timeThatApplicationEnteredBackground;
@property(retain, nonatomic) NSDate *timeThatApplicationEnteredForeground; // @synthesize timeThatApplicationEnteredForeground=_timeThatApplicationEnteredForeground;
@property(retain, nonatomic) NSDate *timeThatApplicationResignedActive; // @synthesize timeThatApplicationResignedActive=_timeThatApplicationResignedActive;
@property(retain, nonatomic) NSDate *timeThatApplicationBecomedActive; // @synthesize timeThatApplicationBecomedActive=_timeThatApplicationBecomedActive;
@property(readonly, nonatomic) double overheatingDuration;
@property(readonly, nonatomic) _Bool mayBeOverheating;

@end

