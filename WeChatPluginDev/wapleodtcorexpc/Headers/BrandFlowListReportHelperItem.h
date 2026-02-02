//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface BrandFlowListReportHelperItem : NSObject
{
    _Bool _hasNewMsgWhenClick;
    unsigned int _enterScene;
    unsigned int _newMsgContactCount;
    unsigned int _enterPos;
    NSString *_enterUserName;
    unsigned long long _beginExposeTimeInMs;
    unsigned long long _totalStayBackgroundTimeInMs;
    unsigned long long _startEnterBackgroundTimeInMs;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long startEnterBackgroundTimeInMs; // @synthesize startEnterBackgroundTimeInMs=_startEnterBackgroundTimeInMs;
@property(nonatomic) unsigned long long totalStayBackgroundTimeInMs; // @synthesize totalStayBackgroundTimeInMs=_totalStayBackgroundTimeInMs;
@property(nonatomic) unsigned long long beginExposeTimeInMs; // @synthesize beginExposeTimeInMs=_beginExposeTimeInMs;
@property(retain, nonatomic) NSString *enterUserName; // @synthesize enterUserName=_enterUserName;
@property(nonatomic) unsigned int enterPos; // @synthesize enterPos=_enterPos;
@property(nonatomic) unsigned int newMsgContactCount; // @synthesize newMsgContactCount=_newMsgContactCount;
@property(nonatomic) _Bool hasNewMsgWhenClick; // @synthesize hasNewMsgWhenClick=_hasNewMsgWhenClick;
@property(nonatomic) unsigned int enterScene; // @synthesize enterScene=_enterScene;
- (void)resetStayTime;
- (unsigned long long)currentStayTime;

@end

