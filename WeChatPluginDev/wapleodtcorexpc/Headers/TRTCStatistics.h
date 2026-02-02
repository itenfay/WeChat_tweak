//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface TRTCStatistics : NSObject
{
    unsigned int _appCpu;
    unsigned int _systemCpu;
    unsigned int _upLoss;
    unsigned int _downLoss;
    unsigned int _rtt;
    unsigned int _gatewayRtt;
    unsigned long long _sentBytes;
    unsigned long long _receivedBytes;
    NSArray *_localStatistics;
    NSArray *_remoteStatistics;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *remoteStatistics; // @synthesize remoteStatistics=_remoteStatistics;
@property(retain, nonatomic) NSArray *localStatistics; // @synthesize localStatistics=_localStatistics;
@property(nonatomic) unsigned long long receivedBytes; // @synthesize receivedBytes=_receivedBytes;
@property(nonatomic) unsigned long long sentBytes; // @synthesize sentBytes=_sentBytes;
@property(nonatomic) unsigned int gatewayRtt; // @synthesize gatewayRtt=_gatewayRtt;
@property(nonatomic) unsigned int rtt; // @synthesize rtt=_rtt;
@property(nonatomic) unsigned int downLoss; // @synthesize downLoss=_downLoss;
@property(nonatomic) unsigned int upLoss; // @synthesize upLoss=_upLoss;
@property(nonatomic) unsigned int systemCpu; // @synthesize systemCpu=_systemCpu;
@property(nonatomic) unsigned int appCpu; // @synthesize appCpu=_appCpu;
- (id)description;

@end

