//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface WCFinderMsgChatContentReporter : NSObject
{
    _Bool _fromPrivateMsgSessionList;
    _Bool _shouldUpdateSessionInfo;
    _Bool _needReport;
    unsigned int _myAccountType;
    unsigned int _newReceiveMsgCount;
    unsigned int _newSendMsgCount;
    unsigned int _openChatInfoCount;
    unsigned int _userpageEnterType;
    int _sourceType;
    int _fromFeedScene;
    unsigned long long _fromCommentScene;
    NSString *_talkerUsername;
    NSString *_chatName;
    NSString *_chatListSessionid;
    NSNumber *_reddotCount;
    unsigned long long _enterTimeInMs;
    NSString *_sourceFeed;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sourceFeed; // @synthesize sourceFeed=_sourceFeed;
@property(nonatomic) _Bool needReport; // @synthesize needReport=_needReport;
@property(nonatomic) unsigned long long enterTimeInMs; // @synthesize enterTimeInMs=_enterTimeInMs;
@property(nonatomic) int fromFeedScene; // @synthesize fromFeedScene=_fromFeedScene;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) unsigned int userpageEnterType; // @synthesize userpageEnterType=_userpageEnterType;
@property(nonatomic) _Bool shouldUpdateSessionInfo; // @synthesize shouldUpdateSessionInfo=_shouldUpdateSessionInfo;
@property(nonatomic) _Bool fromPrivateMsgSessionList; // @synthesize fromPrivateMsgSessionList=_fromPrivateMsgSessionList;
@property(nonatomic) unsigned int openChatInfoCount; // @synthesize openChatInfoCount=_openChatInfoCount;
@property(nonatomic) unsigned int newSendMsgCount; // @synthesize newSendMsgCount=_newSendMsgCount;
@property(nonatomic) unsigned int newReceiveMsgCount; // @synthesize newReceiveMsgCount=_newReceiveMsgCount;
@property(retain, nonatomic) NSNumber *reddotCount; // @synthesize reddotCount=_reddotCount;
@property(retain, nonatomic) NSString *chatListSessionid; // @synthesize chatListSessionid=_chatListSessionid;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(retain, nonatomic) NSString *talkerUsername; // @synthesize talkerUsername=_talkerUsername;
@property(nonatomic) unsigned long long fromCommentScene; // @synthesize fromCommentScene=_fromCommentScene;
@property(nonatomic) unsigned int myAccountType; // @synthesize myAccountType=_myAccountType;
- (void)quitAndReport;
- (void)enterViewController;
@property(readonly, nonatomic) NSString *chatSessionid;
- (void)copyInfosFromReporter:(id)arg1;
- (id)initWithChatListSessionId:(id)arg1 reddotCount:(id)arg2;
- (id)initWithCommentScene:(unsigned long long)arg1 sourceFeed:(id)arg2;
- (id)initWithCommentScene:(unsigned long long)arg1;

@end

