//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BackupAnalyseInfo, NSMutableDictionary, NSString;

@interface WXGBackupMgrAnalyseInfo : NSObject
{
    NSMutableDictionary *_allChatInfo;
    unsigned long long _totalSessionCount;
    unsigned long long _totalMsgCount;
    unsigned long long _totalMediaCount;
    unsigned long long _totalFilterMediaCount;
    double _costTime;
    unsigned long long _filterRequestCount;
    double _filterRequestCostTime;
    BackupAnalyseInfo *_analyseInfo;
    double _startTime;
    NSString *_briefString;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *briefString; // @synthesize briefString=_briefString;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) BackupAnalyseInfo *analyseInfo; // @synthesize analyseInfo=_analyseInfo;
@property(nonatomic) double filterRequestCostTime; // @synthesize filterRequestCostTime=_filterRequestCostTime;
@property(nonatomic) unsigned long long filterRequestCount; // @synthesize filterRequestCount=_filterRequestCount;
@property(nonatomic) double costTime; // @synthesize costTime=_costTime;
@property(nonatomic) unsigned long long totalFilterMediaCount; // @synthesize totalFilterMediaCount=_totalFilterMediaCount;
@property(nonatomic) unsigned long long totalMediaCount; // @synthesize totalMediaCount=_totalMediaCount;
@property(nonatomic) unsigned long long totalMsgCount; // @synthesize totalMsgCount=_totalMsgCount;
@property(nonatomic) unsigned long long totalSessionCount; // @synthesize totalSessionCount=_totalSessionCount;
@property(retain, nonatomic) NSMutableDictionary *allChatInfo; // @synthesize allChatInfo=_allChatInfo;
- (id)brief;
- (id)init;

@end

