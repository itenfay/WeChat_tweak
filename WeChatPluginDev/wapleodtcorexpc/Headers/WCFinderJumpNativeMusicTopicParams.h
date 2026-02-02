//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCFinderJumpNativeMusicTopicParams : NSObject
{
    unsigned int _opSwitch;
    unsigned int _hideFlag;
    int _musicPageType;
    int _likeFlag;
    NSString *_musicIdStr;
    NSString *_byPassInfoString;
    NSArray *_singers;
    NSString *_topicWording;
    NSString *_songId;
    NSString *_audioId;
    NSString *_miaojianSdkPrefix;
    NSString *_listenIdStr;
    NSString *_listenSimplePlayInfoBase64;
    long long _likeAction;
    NSString *_listenCtxRecommendInfoBufferBase64;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *listenCtxRecommendInfoBufferBase64; // @synthesize listenCtxRecommendInfoBufferBase64=_listenCtxRecommendInfoBufferBase64;
@property(nonatomic) long long likeAction; // @synthesize likeAction=_likeAction;
@property(retain, nonatomic) NSString *listenSimplePlayInfoBase64; // @synthesize listenSimplePlayInfoBase64=_listenSimplePlayInfoBase64;
@property(nonatomic) int likeFlag; // @synthesize likeFlag=_likeFlag;
@property(copy, nonatomic) NSString *listenIdStr; // @synthesize listenIdStr=_listenIdStr;
@property(copy, nonatomic) NSString *miaojianSdkPrefix; // @synthesize miaojianSdkPrefix=_miaojianSdkPrefix;
@property(copy, nonatomic) NSString *audioId; // @synthesize audioId=_audioId;
@property(copy, nonatomic) NSString *songId; // @synthesize songId=_songId;
@property(copy, nonatomic) NSString *topicWording; // @synthesize topicWording=_topicWording;
@property(nonatomic) int musicPageType; // @synthesize musicPageType=_musicPageType;
@property(nonatomic) unsigned int hideFlag; // @synthesize hideFlag=_hideFlag;
@property(nonatomic) unsigned int opSwitch; // @synthesize opSwitch=_opSwitch;
@property(retain, nonatomic) NSArray *singers; // @synthesize singers=_singers;
@property(copy, nonatomic) NSString *byPassInfoString; // @synthesize byPassInfoString=_byPassInfoString;
@property(copy, nonatomic) NSString *musicIdStr; // @synthesize musicIdStr=_musicIdStr;
- (id)playerInfo;
- (id)byPassInfo;
- (unsigned long long)musicId;

@end

