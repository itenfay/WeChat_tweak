//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MinimizeTaskListPageReportInfo : NSObject
{
    int _state;
    NSString *_aggreSessionId;
    unsigned long long _enterPageTime;
    unsigned long long _exitPageTime;
    unsigned long long _exitPageType;
    unsigned long long _taskCount;
    NSArray *_miniSessionIdList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *miniSessionIdList; // @synthesize miniSessionIdList=_miniSessionIdList;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) unsigned long long taskCount; // @synthesize taskCount=_taskCount;
@property(nonatomic) unsigned long long exitPageType; // @synthesize exitPageType=_exitPageType;
@property(nonatomic) unsigned long long exitPageTime; // @synthesize exitPageTime=_exitPageTime;
@property(nonatomic) unsigned long long enterPageTime; // @synthesize enterPageTime=_enterPageTime;
@property(retain, nonatomic) NSString *aggreSessionId; // @synthesize aggreSessionId=_aggreSessionId;

@end

