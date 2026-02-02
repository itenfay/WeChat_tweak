//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMWebViewBackgroundAlbumAudioExtInfo : NSObject
{
    NSString *_bizUin;
    long long _msgId;
    long long _idx;
    long long _scene;
    long long _subScene;
    long long _voiceType;
    NSString *_sessionId;
    NSString *_playId;
    long long _enterId;
    NSString *_albumPageUrl;
    long long _audioPos;
    NSString *_albumTitle;
    NSString *_audioTitle;
}

+ (void)initialize;
+ (void)PBArrayAdd_audioTitle;
+ (void)PBArrayAdd_albumTitle;
+ (void)PBArrayAdd_audioPos;
+ (void)PBArrayAdd_albumPageUrl;
+ (void)PBArrayAdd_enterId;
+ (void)PBArrayAdd_sessionId;
+ (void)PBArrayAdd_voiceType;
+ (void)PBArrayAdd_playId;
+ (void)PBArrayAdd_subScene;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_idx;
+ (void)PBArrayAdd_msgId;
+ (void)PBArrayAdd_bizUin;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *audioTitle; // @synthesize audioTitle=_audioTitle;
@property(copy, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(nonatomic) long long audioPos; // @synthesize audioPos=_audioPos;
@property(copy, nonatomic) NSString *albumPageUrl; // @synthesize albumPageUrl=_albumPageUrl;
@property(nonatomic) long long enterId; // @synthesize enterId=_enterId;
@property(copy, nonatomic) NSString *playId; // @synthesize playId=_playId;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) long long voiceType; // @synthesize voiceType=_voiceType;
@property(nonatomic) long long subScene; // @synthesize subScene=_subScene;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) long long idx; // @synthesize idx=_idx;
@property(nonatomic) long long msgId; // @synthesize msgId=_msgId;
@property(copy, nonatomic) NSString *bizUin; // @synthesize bizUin=_bizUin;
- (id)initWithDictionary:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

