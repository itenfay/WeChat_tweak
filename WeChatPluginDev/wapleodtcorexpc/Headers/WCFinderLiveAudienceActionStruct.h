//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WCFinderLiveAudienceActionStruct : NSObject
{
    _Bool _isPrivateAccount;
    _Bool _liveStatus;
    unsigned int _shopPermit;
    unsigned long long _liveId;
    unsigned long long _liveStartTime;
    NSString *_finderFeedId;
    NSString *_finderUserName;
    NSString *_liveTopic;
    NSString *_commentScene;
    NSString *_contextId;
    NSString *_clickTabContextId;
    NSString *_sessionId;
    NSString *_sessionBuffer;
    unsigned long long _enterSessionId;
    unsigned long long _liveTime;
    unsigned long long _totalFullTime;
    unsigned long long _totalFloatTime;
    unsigned long long _actionTS;
    unsigned long long _actionType;
    NSString *_actionResult;
    NSMutableDictionary *_actionResultDictionary;
    long long _enterIconType;
    long long _curOrientation;
    NSString *_addata;
    NSString *_scenenote;
    unsigned long long _roleType;
    NSString *_requestId;
    NSString *_scene;
    NSString *_clickSubTabContextId;
    NSString *_channelExtra;
    NSString *_actionStyle;
    NSString *_couponId;
    NSMutableDictionary *_switchExtraDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *switchExtraDic; // @synthesize switchExtraDic=_switchExtraDic;
@property(retain, nonatomic) NSString *couponId; // @synthesize couponId=_couponId;
@property(retain, nonatomic) NSString *actionStyle; // @synthesize actionStyle=_actionStyle;
@property(retain, nonatomic) NSString *channelExtra; // @synthesize channelExtra=_channelExtra;
@property(retain, nonatomic) NSString *clickSubTabContextId; // @synthesize clickSubTabContextId=_clickSubTabContextId;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(nonatomic) unsigned long long roleType; // @synthesize roleType=_roleType;
@property(retain, nonatomic) NSString *scenenote; // @synthesize scenenote=_scenenote;
@property(retain, nonatomic) NSString *addata; // @synthesize addata=_addata;
@property(nonatomic) long long curOrientation; // @synthesize curOrientation=_curOrientation;
@property(nonatomic) long long enterIconType; // @synthesize enterIconType=_enterIconType;
@property(retain, nonatomic) NSMutableDictionary *actionResultDictionary; // @synthesize actionResultDictionary=_actionResultDictionary;
@property(retain, nonatomic) NSString *actionResult; // @synthesize actionResult=_actionResult;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(nonatomic) unsigned long long actionTS; // @synthesize actionTS=_actionTS;
@property(nonatomic) _Bool liveStatus; // @synthesize liveStatus=_liveStatus;
@property(nonatomic) unsigned long long totalFloatTime; // @synthesize totalFloatTime=_totalFloatTime;
@property(nonatomic) unsigned long long totalFullTime; // @synthesize totalFullTime=_totalFullTime;
@property(nonatomic) unsigned long long liveTime; // @synthesize liveTime=_liveTime;
@property(nonatomic) unsigned long long enterSessionId; // @synthesize enterSessionId=_enterSessionId;
@property(nonatomic) unsigned int shopPermit; // @synthesize shopPermit=_shopPermit;
@property(retain, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *clickTabContextId; // @synthesize clickTabContextId=_clickTabContextId;
@property(retain, nonatomic) NSString *contextId; // @synthesize contextId=_contextId;
@property(nonatomic) _Bool isPrivateAccount; // @synthesize isPrivateAccount=_isPrivateAccount;
@property(retain, nonatomic) NSString *commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSString *liveTopic; // @synthesize liveTopic=_liveTopic;
@property(retain, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(retain, nonatomic) NSString *finderFeedId; // @synthesize finderFeedId=_finderFeedId;
@property(nonatomic) unsigned long long liveStartTime; // @synthesize liveStartTime=_liveStartTime;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
- (unsigned int)isLiveFollow;
- (id)toReport;
- (id)init;

@end

