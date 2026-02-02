//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderRedDotFrequencyInfo : NSObject
{
    _Bool _isNextPunish;
    _Bool _isBanAsUseBusiness;
    _Bool _isNextCleanPunish;
    _Bool _isAbandonRd;
    long long _nextPunishM;
    long long _punishStage;
    long long _accStage;
}

@property(nonatomic) _Bool isAbandonRd; // @synthesize isAbandonRd=_isAbandonRd;
@property(nonatomic) long long accStage; // @synthesize accStage=_accStage;
@property(nonatomic) long long punishStage; // @synthesize punishStage=_punishStage;
@property(nonatomic) _Bool isNextCleanPunish; // @synthesize isNextCleanPunish=_isNextCleanPunish;
@property(nonatomic) _Bool isBanAsUseBusiness; // @synthesize isBanAsUseBusiness=_isBanAsUseBusiness;
@property(nonatomic) _Bool isNextPunish; // @synthesize isNextPunish=_isNextPunish;
@property(nonatomic) long long nextPunishM; // @synthesize nextPunishM=_nextPunishM;

@end

