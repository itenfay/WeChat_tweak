//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportWKWebViewTerminateItem
{
    long long _publicLibVersion;
    unsigned long long _runningState;
    long long _stackCount;
    long long _stackIndex;
    unsigned long long _tereminateType;
    unsigned long long _memoryWarningType;
    NSString *_stackTopPagePath;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *stackTopPagePath; // @synthesize stackTopPagePath=_stackTopPagePath;
@property(nonatomic) unsigned long long memoryWarningType; // @synthesize memoryWarningType=_memoryWarningType;
@property(nonatomic) unsigned long long tereminateType; // @synthesize tereminateType=_tereminateType;
@property(nonatomic) long long stackIndex; // @synthesize stackIndex=_stackIndex;
@property(nonatomic) long long stackCount; // @synthesize stackCount=_stackCount;
@property(nonatomic) unsigned long long runningState; // @synthesize runningState=_runningState;
@property(nonatomic) long long publicLibVersion; // @synthesize publicLibVersion=_publicLibVersion;
- (id)reportString;

@end

