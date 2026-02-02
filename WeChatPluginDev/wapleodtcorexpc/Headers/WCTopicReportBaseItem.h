//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTopicReportBaseItem : NSObject
{
    unsigned long long _actionTimeStamp;
    long long _shareScene;
    NSString *_shareSceneId;
    long long _shareCreateTime;
    long long _enterSource;
    NSString *_sessionId;
    NSString *_searchId;
    NSString *_requestId;
    unsigned long long _bizType;
    unsigned long long _subType;
    unsigned long long _pageType;
    unsigned long long _accountType;
    NSString *_docId;
    NSString *_queryKey;
    NSString *_talkerUsername;
    NSString *_senderUsername;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *senderUsername; // @synthesize senderUsername=_senderUsername;
@property(copy, nonatomic) NSString *talkerUsername; // @synthesize talkerUsername=_talkerUsername;
@property(copy, nonatomic) NSString *queryKey; // @synthesize queryKey=_queryKey;
@property(copy, nonatomic) NSString *docId; // @synthesize docId=_docId;
@property(nonatomic) unsigned long long accountType; // @synthesize accountType=_accountType;
@property(nonatomic) unsigned long long pageType; // @synthesize pageType=_pageType;
@property(nonatomic) unsigned long long subType; // @synthesize subType=_subType;
@property(nonatomic) unsigned long long bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(copy, nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) long long enterSource; // @synthesize enterSource=_enterSource;
@property(nonatomic) long long shareCreateTime; // @synthesize shareCreateTime=_shareCreateTime;
@property(copy, nonatomic) NSString *shareSceneId; // @synthesize shareSceneId=_shareSceneId;
@property(nonatomic) long long shareScene; // @synthesize shareScene=_shareScene;
@property(nonatomic) unsigned long long actionTimeStamp; // @synthesize actionTimeStamp=_actionTimeStamp;

@end

