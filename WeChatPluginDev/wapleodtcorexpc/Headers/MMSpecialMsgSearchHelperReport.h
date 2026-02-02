//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMSpecialMsgSearchHelperReport
{
    unsigned int _action;
    unsigned int _pageType;
    unsigned int _resCount;
    unsigned int _matchType;
    NSString *_sessionId;
    NSString *_query;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int matchType; // @synthesize matchType=_matchType;
@property(nonatomic) unsigned int resCount; // @synthesize resCount=_resCount;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) unsigned int pageType; // @synthesize pageType=_pageType;
@property(nonatomic) unsigned int action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;

@end

