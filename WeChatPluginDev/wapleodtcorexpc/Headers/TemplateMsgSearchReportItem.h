//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TemplateMsgSearchReportItem : NSObject
{
    unsigned long long _EventID;
    unsigned long long _TimeSecond;
    NSString *_OperateResult;
    unsigned long long _OperatePage;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long OperatePage; // @synthesize OperatePage=_OperatePage;
@property(retain, nonatomic) NSString *OperateResult; // @synthesize OperateResult=_OperateResult;
@property(nonatomic) unsigned long long TimeSecond; // @synthesize TimeSecond=_TimeSecond;
@property(nonatomic) unsigned long long EventID; // @synthesize EventID=_EventID;
- (void)report;

@end

