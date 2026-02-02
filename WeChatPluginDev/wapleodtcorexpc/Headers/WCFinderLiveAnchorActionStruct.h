//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WCFinderLiveAnchorActionStruct : NSObject
{
    _Bool _isPrivateAccount;
    int _screenType;
    NSString *_finderUserName;
    NSString *_finderWxAppInfo;
    NSString *_sessionId;
    unsigned long long _actionTS;
    unsigned long long _liveId;
    NSString *_finderFeedId;
    NSString *_liveTopic;
    unsigned long long _liveTime;
    unsigned long long _likeCount;
    unsigned long long _onlineCount;
    unsigned long long _actionType;
    NSString *_actionResult;
    NSMutableDictionary *_actionResults;
    unsigned long long _startSourceScene;
    NSString *_chnlExtra;
}

- (void).cxx_destruct;
@property(nonatomic) int screenType; // @synthesize screenType=_screenType;
@property(retain, nonatomic) NSString *chnlExtra; // @synthesize chnlExtra=_chnlExtra;
@property(nonatomic) unsigned long long startSourceScene; // @synthesize startSourceScene=_startSourceScene;
@property(retain, nonatomic) NSMutableDictionary *actionResults; // @synthesize actionResults=_actionResults;
@property(retain, nonatomic) NSString *actionResult; // @synthesize actionResult=_actionResult;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(nonatomic) unsigned long long onlineCount; // @synthesize onlineCount=_onlineCount;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) unsigned long long liveTime; // @synthesize liveTime=_liveTime;
@property(retain, nonatomic) NSString *liveTopic; // @synthesize liveTopic=_liveTopic;
@property(retain, nonatomic) NSString *finderFeedId; // @synthesize finderFeedId=_finderFeedId;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(nonatomic) unsigned long long actionTS; // @synthesize actionTS=_actionTS;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) _Bool isPrivateAccount; // @synthesize isPrivateAccount=_isPrivateAccount;
@property(retain, nonatomic) NSString *finderWxAppInfo; // @synthesize finderWxAppInfo=_finderWxAppInfo;
@property(retain, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
- (id)toReport;

@end

