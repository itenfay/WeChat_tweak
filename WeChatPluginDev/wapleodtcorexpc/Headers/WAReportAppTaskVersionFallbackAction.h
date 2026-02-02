//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportAppTaskVersionFallbackAction
{
    _Bool _isWeakNet;
    unsigned int _targetAppVersion;
    unsigned int _localAppVersion;
    unsigned int _waitTimeInMs;
    unsigned long long _fallbackScene;
    NSString *_netType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isWeakNet; // @synthesize isWeakNet=_isWeakNet;
@property(copy, nonatomic) NSString *netType; // @synthesize netType=_netType;
@property(nonatomic) unsigned int waitTimeInMs; // @synthesize waitTimeInMs=_waitTimeInMs;
@property(nonatomic) unsigned long long fallbackScene; // @synthesize fallbackScene=_fallbackScene;
@property(nonatomic) unsigned int localAppVersion; // @synthesize localAppVersion=_localAppVersion;
@property(nonatomic) unsigned int targetAppVersion; // @synthesize targetAppVersion=_targetAppVersion;
- (id)reportString;
- (int)reportID;

@end

