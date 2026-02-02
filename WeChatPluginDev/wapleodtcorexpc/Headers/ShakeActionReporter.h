//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ShakeActionReporter : NSObject
{
    int _action;
    unsigned int _userGender;
    unsigned int _userHasSignature;
    unsigned int _jumpStatus;
    unsigned int _songRecommendPos;
    unsigned int _songCopyright;
    unsigned int _musicScene;
    unsigned int _sayHelloCount;
    int _type;
    int _scene;
    NSString *_username;
    NSString *_songTVId;
    long long _indexInList;
    NSString *_userDistance;
    long long _shakeCostTime;
    NSString *_shakeSessionId;
    NSString *_songName;
    NSString *_singer;
    NSString *_songWebUrl;
    NSString *_songDataUrl;
    long long _actionTs;
    NSString *_sessionId;
}

+ (void)reportAction:(int)arg1;
+ (id)reporter;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) long long actionTs; // @synthesize actionTs=_actionTs;
@property(nonatomic) unsigned int sayHelloCount; // @synthesize sayHelloCount=_sayHelloCount;
@property(nonatomic) unsigned int musicScene; // @synthesize musicScene=_musicScene;
@property(nonatomic) unsigned int songCopyright; // @synthesize songCopyright=_songCopyright;
@property(nonatomic) unsigned int songRecommendPos; // @synthesize songRecommendPos=_songRecommendPos;
@property(nonatomic) unsigned int jumpStatus; // @synthesize jumpStatus=_jumpStatus;
@property(copy, nonatomic) NSString *songDataUrl; // @synthesize songDataUrl=_songDataUrl;
@property(copy, nonatomic) NSString *songWebUrl; // @synthesize songWebUrl=_songWebUrl;
@property(copy, nonatomic) NSString *singer; // @synthesize singer=_singer;
@property(copy, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(copy, nonatomic) NSString *shakeSessionId; // @synthesize shakeSessionId=_shakeSessionId;
@property(nonatomic) long long shakeCostTime; // @synthesize shakeCostTime=_shakeCostTime;
@property(nonatomic) unsigned int userHasSignature; // @synthesize userHasSignature=_userHasSignature;
@property(copy, nonatomic) NSString *userDistance; // @synthesize userDistance=_userDistance;
@property(nonatomic) unsigned int userGender; // @synthesize userGender=_userGender;
@property(nonatomic) long long indexInList; // @synthesize indexInList=_indexInList;
@property(copy, nonatomic) NSString *songTVId; // @synthesize songTVId=_songTVId;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) int action; // @synthesize action=_action;
- (void)updateSongCopyright:(unsigned long long)arg1;
- (void)updateShakeScene;
- (void)updateShakeType;
- (void)tryAddInteger:(long long)arg1 toString:(id)arg2;
- (void)tryAddString:(id)arg1 toString:(id)arg2;
- (void)report;
- (void)reset;
- (id)init;

@end

