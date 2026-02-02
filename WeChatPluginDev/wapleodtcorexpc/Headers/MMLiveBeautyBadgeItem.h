//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveBeautyBadgeItem : NSObject
{
    NSString *_badgeId;
    unsigned long long _baselineVersion;
    unsigned long long _currentVersion;
    NSString *_currentGroup;
    unsigned long long _lastVersion;
    NSString *_lastGroup;
    NSString *_categorizedId;
}

+ (id)badgeItemInJsonDictionary:(id)arg1 categoryKey:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *categorizedId; // @synthesize categorizedId=_categorizedId;
@property(retain, nonatomic) NSString *lastGroup; // @synthesize lastGroup=_lastGroup;
@property(nonatomic) unsigned long long lastVersion; // @synthesize lastVersion=_lastVersion;
@property(retain, nonatomic) NSString *currentGroup; // @synthesize currentGroup=_currentGroup;
@property(nonatomic) unsigned long long currentVersion; // @synthesize currentVersion=_currentVersion;
@property(nonatomic) unsigned long long baselineVersion; // @synthesize baselineVersion=_baselineVersion;
@property(retain, nonatomic) NSString *badgeId; // @synthesize badgeId=_badgeId;
- (void)removeEventSubscriber:(id)arg1;
- (void)addEventSubscriber:(id)arg1;
- (void)synchronizeAndNotifyDismiss;
@property(readonly, nonatomic) _Bool active;

@end

