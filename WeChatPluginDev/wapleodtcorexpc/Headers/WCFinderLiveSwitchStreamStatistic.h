//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderLiveSwitchStreamStatistic : NSObject
{
    _Bool _isSmoothSwitch;
    unsigned int _hasSwitchLag;
    unsigned int _maxSwitchLagTime;
    unsigned long long _switchType;
    unsigned long long _switchBeginTime;
    unsigned long long _switchEndTime;
}

@property(nonatomic) unsigned int maxSwitchLagTime; // @synthesize maxSwitchLagTime=_maxSwitchLagTime;
@property(nonatomic) unsigned int hasSwitchLag; // @synthesize hasSwitchLag=_hasSwitchLag;
@property(nonatomic) unsigned long long switchEndTime; // @synthesize switchEndTime=_switchEndTime;
@property(nonatomic) unsigned long long switchBeginTime; // @synthesize switchBeginTime=_switchBeginTime;
@property(nonatomic) _Bool isSmoothSwitch; // @synthesize isSmoothSwitch=_isSmoothSwitch;
@property(nonatomic) unsigned long long switchType; // @synthesize switchType=_switchType;

@end

