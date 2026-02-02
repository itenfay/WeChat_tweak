//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TingMinimizeStayStatics : NSObject
{
    unsigned long long _currState;
    unsigned long long _fullStayTime;
    unsigned long long _autoFoldStayTime;
    unsigned long long _manualFoldStayTime;
    unsigned long long _baseTimestamp;
}

@property(nonatomic) unsigned long long baseTimestamp; // @synthesize baseTimestamp=_baseTimestamp;
@property(nonatomic) unsigned long long manualFoldStayTime; // @synthesize manualFoldStayTime=_manualFoldStayTime;
@property(nonatomic) unsigned long long autoFoldStayTime; // @synthesize autoFoldStayTime=_autoFoldStayTime;
@property(nonatomic) unsigned long long fullStayTime; // @synthesize fullStayTime=_fullStayTime;
@property(nonatomic) unsigned long long currState; // @synthesize currState=_currState;
- (id)reportParams;
- (void)__calIncrementStayTimeForCurrState;
- (id)init;

@end

