//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WCFinderLiveExposeStruct : NSObject
{
    _Bool _isPrivate;
    unsigned int _onlineNum;
    NSString *_userName;
    unsigned long long _liveID;
    NSString *_feedID;
    NSString *_sessionID;
    unsigned long long _actionTS;
    long long _action;
    NSString *_commentScene;
    unsigned long long _index;
    unsigned long long _enterStatus;
    NSString *_snsSessionID;
    long long _shareType;
    NSString *_shareUserName;
    NSString *_contextId;
    NSString *_clickTabContextId;
    NSString *_sessionBuffer;
    NSString *_snsFeedId;
    unsigned long long _enterSessionId;
    long long _enterIconType;
    NSString *_clickSubTabContextId;
    NSString *_channelExtra;
    NSMutableDictionary *_switchExtraDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *switchExtraDic; // @synthesize switchExtraDic=_switchExtraDic;
@property(retain, nonatomic) NSString *channelExtra; // @synthesize channelExtra=_channelExtra;
@property(retain, nonatomic) NSString *clickSubTabContextId; // @synthesize clickSubTabContextId=_clickSubTabContextId;
@property(nonatomic) long long enterIconType; // @synthesize enterIconType=_enterIconType;
@property(nonatomic) unsigned long long enterSessionId; // @synthesize enterSessionId=_enterSessionId;
@property(retain, nonatomic) NSString *snsFeedId; // @synthesize snsFeedId=_snsFeedId;
@property(retain, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(retain, nonatomic) NSString *clickTabContextId; // @synthesize clickTabContextId=_clickTabContextId;
@property(nonatomic) unsigned int onlineNum; // @synthesize onlineNum=_onlineNum;
@property(retain, nonatomic) NSString *contextId; // @synthesize contextId=_contextId;
@property(retain, nonatomic) NSString *shareUserName; // @synthesize shareUserName=_shareUserName;
@property(nonatomic) long long shareType; // @synthesize shareType=_shareType;
@property(retain, nonatomic) NSString *snsSessionID; // @synthesize snsSessionID=_snsSessionID;
@property(nonatomic) unsigned long long enterStatus; // @synthesize enterStatus=_enterStatus;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(nonatomic) unsigned long long actionTS; // @synthesize actionTS=_actionTS;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(nonatomic) unsigned long long liveID; // @synthesize liveID=_liveID;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)toReport;

@end

