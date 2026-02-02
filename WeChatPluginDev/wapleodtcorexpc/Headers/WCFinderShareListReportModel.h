//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, LongVideoPlayerContext, NSString, WCFinderGetFeedAsyncInfoCGIConfig;

@interface WCFinderShareListReportModel : NSObject
{
    _Bool _byPush;
    _Bool _forceShowRingtoneGuide;
    int _commentScene;
    int _ringtoneEventType;
    unsigned long long _enterScene;
    NSString *_sourceUser;
    NSString *_fromUsername;
    NSString *_chatRoomUsername;
    NSString *_toUsername;
    NSString *_reportExtraInfo;
    unsigned long long _requestScene;
    unsigned long long _cardType;
    WCFinderGetFeedAsyncInfoCGIConfig *_asyncConfig;
    NSString *_finderForwardSource;
    LongVideoPlayerContext *_longVideoContext;
    unsigned long long _shareCardSourceCommentScene;
    NSString *_jumpInfoBypassInfo;
    NSString *_shareMsgSource;
    NSString *_shareMsgSvrID;
    NSString *_publisherId;
    CMessageWrap *_originalMsgWrap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *originalMsgWrap; // @synthesize originalMsgWrap=_originalMsgWrap;
@property(copy, nonatomic) NSString *publisherId; // @synthesize publisherId=_publisherId;
@property(copy, nonatomic) NSString *shareMsgSvrID; // @synthesize shareMsgSvrID=_shareMsgSvrID;
@property(copy, nonatomic) NSString *shareMsgSource; // @synthesize shareMsgSource=_shareMsgSource;
@property(copy, nonatomic) NSString *jumpInfoBypassInfo; // @synthesize jumpInfoBypassInfo=_jumpInfoBypassInfo;
@property(nonatomic) unsigned long long shareCardSourceCommentScene; // @synthesize shareCardSourceCommentScene=_shareCardSourceCommentScene;
@property(retain, nonatomic) LongVideoPlayerContext *longVideoContext; // @synthesize longVideoContext=_longVideoContext;
@property(retain, nonatomic) NSString *finderForwardSource; // @synthesize finderForwardSource=_finderForwardSource;
@property(retain, nonatomic) WCFinderGetFeedAsyncInfoCGIConfig *asyncConfig; // @synthesize asyncConfig=_asyncConfig;
@property(nonatomic) int ringtoneEventType; // @synthesize ringtoneEventType=_ringtoneEventType;
@property(nonatomic) _Bool forceShowRingtoneGuide; // @synthesize forceShowRingtoneGuide=_forceShowRingtoneGuide;
@property(nonatomic) unsigned long long cardType; // @synthesize cardType=_cardType;
@property(nonatomic) unsigned long long requestScene; // @synthesize requestScene=_requestScene;
@property(nonatomic) _Bool byPush; // @synthesize byPush=_byPush;
@property(copy, nonatomic) NSString *reportExtraInfo; // @synthesize reportExtraInfo=_reportExtraInfo;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(copy, nonatomic) NSString *toUsername; // @synthesize toUsername=_toUsername;
@property(copy, nonatomic) NSString *chatRoomUsername; // @synthesize chatRoomUsername=_chatRoomUsername;
@property(copy, nonatomic) NSString *fromUsername; // @synthesize fromUsername=_fromUsername;
@property(copy, nonatomic) NSString *sourceUser; // @synthesize sourceUser=_sourceUser;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
- (id)init;

@end

