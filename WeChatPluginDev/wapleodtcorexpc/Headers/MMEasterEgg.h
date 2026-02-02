//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMEasterEggTopAnimation, NSArray, NSDate, NSMutableArray, NSString;
@protocol MMEasterEggActivityInfo;

@interface MMEasterEgg : NSObject
{
    NSString *m_nsEmoji;
    NSDate *m_oBeginDate;
    NSDate *m_oEndDate;
    unsigned int m_uiReport;
    NSMutableArray *m_arrKeyWords;
    NSArray *m_arrSupportLanguages;
    long long _type;
    long long _effectType;
    NSString *_magicEmojiEffectId;
    NSArray *_eggAnimations;
    MMEasterEggTopAnimation *_eggTopAnimation;
    id <MMEasterEggActivityInfo> _activityInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <MMEasterEggActivityInfo> activityInfo; // @synthesize activityInfo=_activityInfo;
@property(retain, nonatomic) MMEasterEggTopAnimation *eggTopAnimation; // @synthesize eggTopAnimation=_eggTopAnimation;
@property(retain, nonatomic) NSArray *eggAnimations; // @synthesize eggAnimations=_eggAnimations;
@property(retain, nonatomic) NSString *magicEmojiEffectId; // @synthesize magicEmojiEffectId=_magicEmojiEffectId;
@property(nonatomic) long long effectType; // @synthesize effectType=_effectType;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *m_arrSupportLanguages; // @synthesize m_arrSupportLanguages;
@property(retain, nonatomic) NSMutableArray *m_arrKeyWords; // @synthesize m_arrKeyWords;
@property(nonatomic) unsigned int m_uiReport; // @synthesize m_uiReport;
@property(retain, nonatomic) NSDate *m_oEndDate; // @synthesize m_oEndDate;
@property(retain, nonatomic) NSDate *m_oBeginDate; // @synthesize m_oBeginDate;
@property(retain, nonatomic) NSString *m_nsEmoji; // @synthesize m_nsEmoji;
@property(readonly, nonatomic) _Bool supportInteractiveEgg;
- (id)matchKeyWord:(id)arg1 matchRange:(struct _NSRange *)arg2 keywordToLocationDict:(id)arg3;
- (_Bool)checkAsciiMatch:(id)arg1 range:(struct _NSRange)arg2;
- (_Bool)isEffective;

@end

