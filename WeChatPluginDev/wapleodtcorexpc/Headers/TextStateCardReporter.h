//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TextStateModel;

@interface TextStateCardReporter : NSObject
{
    _Bool _isPullDown;
    _Bool _hasNotify;
    _Bool _hasIconRedDot;
    _Bool _hasTruncatedLink;
    unsigned int _sessionScene;
    TextStateModel *_textState;
    long long _scene;
    long long _subScene;
    NSString *_sceneSessionId;
    unsigned long long _positionInCardList;
    NSString *_cardListId;
    unsigned long long _requestId;
    long long _clickIconAction;
    unsigned long long _cardExposeTime;
    unsigned long long _cardDurationTime;
    long long _exitType;
}

+ (id)getMultiPublishRedDotsExtraInfo:(_Bool)arg1;
+ (long long)clusterType;
+ (long long)relationShipWithUsername:(id)arg1;
+ (id)extraInfoForAction:(long long)arg1 textState:(id)arg2 sameFriendCount:(unsigned long long)arg3 hasReddot:(_Bool)arg4;
+ (id)getSessionIdForScene:(long long)arg1 textStateId:(id)arg2;
+ (_Bool)isImportantAction:(long long)arg1;
+ (id)getStatusIdAppendString:(id)arg1;
+ (void)reportAction:(long long)arg1 actionExtraInfo:(id)arg2 textState:(id)arg3 scene:(long long)arg4 subScene:(long long)arg5 sessionId:(id)arg6 sceneSessionId:(id)arg7 positionInCardList:(unsigned long long)arg8 cardListId:(id)arg9 exitType:(long long)arg10 stayDuration:(unsigned long long)arg11 isPullDown:(_Bool)arg12 hasIconRedDot:(_Bool)arg13 hasTruncatedLink:(_Bool)arg14 requestId:(unsigned long long)arg15;
+ (void)reportAction:(long long)arg1 scene:(long long)arg2 contact:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) long long exitType; // @synthesize exitType=_exitType;
@property(nonatomic) unsigned long long cardDurationTime; // @synthesize cardDurationTime=_cardDurationTime;
@property(nonatomic) unsigned long long cardExposeTime; // @synthesize cardExposeTime=_cardExposeTime;
@property(nonatomic) long long clickIconAction; // @synthesize clickIconAction=_clickIconAction;
@property(nonatomic) _Bool hasTruncatedLink; // @synthesize hasTruncatedLink=_hasTruncatedLink;
@property(nonatomic) _Bool hasIconRedDot; // @synthesize hasIconRedDot=_hasIconRedDot;
@property(nonatomic) _Bool hasNotify; // @synthesize hasNotify=_hasNotify;
@property(nonatomic) _Bool isPullDown; // @synthesize isPullDown=_isPullDown;
@property(nonatomic) unsigned long long requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSString *cardListId; // @synthesize cardListId=_cardListId;
@property(nonatomic) unsigned long long positionInCardList; // @synthesize positionInCardList=_positionInCardList;
@property(retain, nonatomic) NSString *sceneSessionId; // @synthesize sceneSessionId=_sceneSessionId;
@property(nonatomic) unsigned int sessionScene; // @synthesize sessionScene=_sessionScene;
@property(nonatomic) long long subScene; // @synthesize subScene=_subScene;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) TextStateModel *textState; // @synthesize textState=_textState;
- (id)getSessionId;
- (void)reportAction:(long long)arg1 extraInfo:(id)arg2;
- (void)reportAction:(long long)arg1;
- (void)cardExitWithType:(long long)arg1;
- (void)cardExpose;

@end

