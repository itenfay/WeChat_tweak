//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface GameCenterMessageRedPointInfo : NSObject
{
    unsigned int _conversationTotalUnreadCount;
    unsigned int _interactUnReadCnt;
    unsigned int _noticeUnReadCnt;
    unsigned int _myGroupUnReadCnt;
    unsigned long long _groupLastUpdateTime;
    unsigned long long _interactLastUpdateTime;
    unsigned long long _noticeLastUpdateTime;
    unsigned long long _gameLifeLastUpdateTime;
    unsigned long long _chatVcInterNoticeTabLastUpdateTime;
    unsigned long long _chatVcChatTabLastUpdateTime;
    unsigned long long _lastUpdateTime;
}

@property(nonatomic) unsigned long long lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(nonatomic) unsigned long long chatVcChatTabLastUpdateTime; // @synthesize chatVcChatTabLastUpdateTime=_chatVcChatTabLastUpdateTime;
@property(nonatomic) unsigned long long chatVcInterNoticeTabLastUpdateTime; // @synthesize chatVcInterNoticeTabLastUpdateTime=_chatVcInterNoticeTabLastUpdateTime;
@property(nonatomic) unsigned long long gameLifeLastUpdateTime; // @synthesize gameLifeLastUpdateTime=_gameLifeLastUpdateTime;
@property(nonatomic) unsigned long long noticeLastUpdateTime; // @synthesize noticeLastUpdateTime=_noticeLastUpdateTime;
@property(nonatomic) unsigned long long interactLastUpdateTime; // @synthesize interactLastUpdateTime=_interactLastUpdateTime;
@property(nonatomic) unsigned long long groupLastUpdateTime; // @synthesize groupLastUpdateTime=_groupLastUpdateTime;
@property(nonatomic) unsigned int myGroupUnReadCnt; // @synthesize myGroupUnReadCnt=_myGroupUnReadCnt;
@property(nonatomic) unsigned int noticeUnReadCnt; // @synthesize noticeUnReadCnt=_noticeUnReadCnt;
@property(nonatomic) unsigned int interactUnReadCnt; // @synthesize interactUnReadCnt=_interactUnReadCnt;
@property(nonatomic) unsigned int conversationTotalUnreadCount; // @synthesize conversationTotalUnreadCount=_conversationTotalUnreadCount;

@end

