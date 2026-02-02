//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMTextLayoutABKey : NSObject
{
    _Bool _enable;
    _Bool _enableProfile;
    _Bool _enableRandomProfile;
    unsigned int _os;
    long long _sampleCount;
    long long _errorRatio;
    long long _statisticsRatio;
    long long _step;
    long long _maxCount;
    long long _maxError;
    long long _reportLimit;
    long long _mode;
    long long _type;
    long long _errorDuration;
}

@property(nonatomic) long long errorDuration; // @synthesize errorDuration=_errorDuration;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) long long reportLimit; // @synthesize reportLimit=_reportLimit;
@property(nonatomic) long long maxError; // @synthesize maxError=_maxError;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
@property(nonatomic) long long step; // @synthesize step=_step;
@property(nonatomic) unsigned int os; // @synthesize os=_os;
@property(nonatomic) _Bool enableRandomProfile; // @synthesize enableRandomProfile=_enableRandomProfile;
@property(nonatomic) _Bool enableProfile; // @synthesize enableProfile=_enableProfile;
@property(nonatomic) long long statisticsRatio; // @synthesize statisticsRatio=_statisticsRatio;
@property(nonatomic) long long errorRatio; // @synthesize errorRatio=_errorRatio;
@property(nonatomic) long long sampleCount; // @synthesize sampleCount=_sampleCount;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
- (_Bool)isOSAvailable;
- (_Bool)isRoot;
- (_Bool)probe;
- (id)attrWithFont:(id)arg1 lineBreak:(long long)arg2 breakStrategy:(unsigned long long)arg3;
- (void)setup;
- (long long)integerWithKey:(id)arg1 undef:(long long)arg2;
- (_Bool)boolWithKey:(id)arg1 undef:(_Bool)arg2 disableIfNotSet:(_Bool)arg3;
- (_Bool)boolWithKey:(id)arg1 undef:(_Bool)arg2;
- (id)keyWith:(id)arg1;
- (_Bool)isEnable:(id)arg1 valeIfUndefined:(_Bool)arg2 forceDisableIfNotSet:(_Bool)arg3;
- (_Bool)isEnable:(id)arg1 valeIfUndefined:(_Bool)arg2;
- (_Bool)boolForKey:(id)arg1 valeIfUndefined:(_Bool)arg2;
- (id)initWithOS:(unsigned int)arg1;

@end

