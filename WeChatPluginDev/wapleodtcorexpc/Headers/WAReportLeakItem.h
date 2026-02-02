//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportLeakItem
{
    _Bool _isGame;
    unsigned int _closeReason;
    unsigned long long _leakType;
}

+ (id)createWithInstanceId:(id)arg1 appId:(id)arg2 username:(id)arg3 appVersion:(unsigned long long)arg4 appState:(unsigned long long)arg5 libVersion:(unsigned int)arg6 libCustomVersion:(id)arg7 weappScene:(unsigned long long)arg8 isGame:(_Bool)arg9 closeReason:(unsigned int)arg10 leakType:(unsigned long long)arg11 nickName:(id)arg12;
@property(nonatomic) unsigned long long leakType; // @synthesize leakType=_leakType;
@property(nonatomic) unsigned int closeReason; // @synthesize closeReason=_closeReason;
@property(nonatomic) _Bool isGame; // @synthesize isGame=_isGame;
- (id)reportString;
- (int)reportID;

@end

