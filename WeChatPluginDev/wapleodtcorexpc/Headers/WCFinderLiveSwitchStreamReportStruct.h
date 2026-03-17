//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderLiveSwitchStreamReportStruct : NSObject
{
    unsigned int _prediction;
    unsigned int _videoLevel;
    unsigned int _isAutoSwitchConfigEnabled;
    unsigned int _isAutoSwitchEnabled;
    unsigned int _lagTime;
    unsigned int _action;
    unsigned int _switchType;
    unsigned int _isSmoothSwitch;
    unsigned int _reduceVideoLevel;
    unsigned int _switchTime;
    unsigned int _hasSwitchLag;
    unsigned int _maxSwitchLagTime;
    unsigned long long _liveId;
    unsigned long long _actionTs;
}

@property(nonatomic) unsigned long long actionTs; // @synthesize actionTs=_actionTs;
@property(nonatomic) unsigned int maxSwitchLagTime; // @synthesize maxSwitchLagTime=_maxSwitchLagTime;
@property(nonatomic) unsigned int hasSwitchLag; // @synthesize hasSwitchLag=_hasSwitchLag;
@property(nonatomic) unsigned int switchTime; // @synthesize switchTime=_switchTime;
@property(nonatomic) unsigned int reduceVideoLevel; // @synthesize reduceVideoLevel=_reduceVideoLevel;
@property(nonatomic) unsigned int isSmoothSwitch; // @synthesize isSmoothSwitch=_isSmoothSwitch;
@property(nonatomic) unsigned int switchType; // @synthesize switchType=_switchType;
@property(nonatomic) unsigned int action; // @synthesize action=_action;
@property(nonatomic) unsigned int lagTime; // @synthesize lagTime=_lagTime;
@property(nonatomic) unsigned int isAutoSwitchEnabled; // @synthesize isAutoSwitchEnabled=_isAutoSwitchEnabled;
@property(nonatomic) unsigned int isAutoSwitchConfigEnabled; // @synthesize isAutoSwitchConfigEnabled=_isAutoSwitchConfigEnabled;
@property(nonatomic) unsigned int videoLevel; // @synthesize videoLevel=_videoLevel;
@property(nonatomic) unsigned int prediction; // @synthesize prediction=_prediction;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
- (id)toReport;

@end

