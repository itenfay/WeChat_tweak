//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveBattleDurationItem;
@protocol MMFinderLivePkWinningConditionArguments;

@interface MMFinderLiveConnectMicPkSelectionResult : NSObject
{
    _Bool _anchorParticipating;
    _Bool _audienceParticipating;
    _Bool _interactive;
    unsigned long long _opponentScenario;
    unsigned long long _selectedMode;
    unsigned long long _selectedWinningCondition;
    id <MMFinderLivePkWinningConditionArguments> _winningConditionArguments;
    MMFinderLiveBattleDurationItem *_selectedDuration;
    unsigned long long _selectedLayoutMode;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long selectedLayoutMode; // @synthesize selectedLayoutMode=_selectedLayoutMode;
@property(nonatomic) _Bool interactive; // @synthesize interactive=_interactive;
@property(retain, nonatomic) MMFinderLiveBattleDurationItem *selectedDuration; // @synthesize selectedDuration=_selectedDuration;
@property(retain, nonatomic) id <MMFinderLivePkWinningConditionArguments> winningConditionArguments; // @synthesize winningConditionArguments=_winningConditionArguments;
@property(nonatomic) unsigned long long selectedWinningCondition; // @synthesize selectedWinningCondition=_selectedWinningCondition;
@property(nonatomic) _Bool audienceParticipating; // @synthesize audienceParticipating=_audienceParticipating;
@property(nonatomic) _Bool anchorParticipating; // @synthesize anchorParticipating=_anchorParticipating;
@property(nonatomic) unsigned long long selectedMode; // @synthesize selectedMode=_selectedMode;
@property(nonatomic) unsigned long long opponentScenario; // @synthesize opponentScenario=_opponentScenario;
- (_Bool)isEqual:(id)arg1;

@end

