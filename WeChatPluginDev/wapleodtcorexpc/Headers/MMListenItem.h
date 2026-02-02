//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenArticleInfo, MMListenAudioInfo, MMListenBroadcastInfo, MMListenCommentInfo, MMListenFinderInfo, MMListenFormatDesc, MMListenItemUid, MMListenLiveInfo, MMListenLocalFileInfo, MMListenMVInfo, MMListenMusicInfo, MMListenRecommendInfo, MMListenUserInfo, MMListenWeAppInfo, NSString;

@interface MMListenItem : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)listenItemFromSimplePlayableInfo:(id)arg1;
+ (id)createListenItem;
+ (id)parseFromBase64String:(id)arg1;
- (void)fullfillClientGenetatedInfo;
- (_Bool)isPlayRateSupported;
- (id)broadcaseUid;
- (id)clientUUIDSetingWithInput:(id)arg1;
- (id)musicUid;
- (id)uuid;
- (_Bool)isAudio;
- (_Bool)isWeAppAudio;
- (_Bool)isMusicLocal;
- (_Bool)isLocal;
- (_Bool)isFinderAudio;
- (_Bool)isMpAudio;
- (_Bool)isMusic;
- (int)generateDuration;
- (id)webUrl;
- (id)audioUrl;
- (id)generateAuthorName;
- (id)authorNameForMusicInfo:(id)arg1;
- (id)generateTitle;
- (id)generaetCover;
- (id)uniqueListenId;
- (_Bool)isValid;
- (_Bool)canShare;

// Remaining properties
@property(retain, nonatomic) MMListenArticleInfo *articleInfo; // @dynamic articleInfo;
@property(retain, nonatomic) MMListenAudioInfo *audioInfo; // @dynamic audioInfo;
@property(retain, nonatomic) NSString *author; // @dynamic author;
@property(retain, nonatomic) MMListenUserInfo *authorInfo; // @dynamic authorInfo;
@property(retain, nonatomic) NSString *baseListenId; // @dynamic baseListenId;
@property(retain, nonatomic) MMListenBroadcastInfo *broadcastInfo; // @dynamic broadcastInfo;
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(retain, nonatomic) NSString *categoryName; // @dynamic categoryName;
@property(retain, nonatomic) MMListenCommentInfo *commentInfo; // @dynamic commentInfo;
@property(retain, nonatomic) NSString *cover; // @dynamic cover;
@property(nonatomic) int duration; // @dynamic duration;
@property(nonatomic) _Bool finderHasMusicInfo; // @dynamic finderHasMusicInfo;
@property(retain, nonatomic) MMListenFinderInfo *finderInfo; // @dynamic finderInfo;
@property(retain, nonatomic) NSString *finderMusicListenId; // @dynamic finderMusicListenId;
@property(nonatomic) unsigned int flag; // @dynamic flag;
@property(retain, nonatomic) MMListenFormatDesc *fromDesc; // @dynamic fromDesc;
@property(nonatomic) _Bool isFilter; // @dynamic isFilter;
@property(nonatomic) _Bool isLiked; // @dynamic isLiked;
@property(nonatomic) _Bool isPlayable; // @dynamic isPlayable;
@property(nonatomic) _Bool isPublicLiked; // @dynamic isPublicLiked;
@property(nonatomic) unsigned long long itemSecureBits; // @dynamic itemSecureBits;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;
@property(retain, nonatomic) MMListenLiveInfo *liveInfo; // @dynamic liveInfo;
@property(retain, nonatomic) MMListenLocalFileInfo *localFileInfo; // @dynamic localFileInfo;
@property(retain, nonatomic) MMListenMusicInfo *musicInfo; // @dynamic musicInfo;
@property(retain, nonatomic) MMListenMVInfo *mvInfo; // @dynamic mvInfo;
@property(nonatomic) int playType; // @dynamic playType;
@property(retain, nonatomic) MMListenRecommendInfo *recommendInfo; // @dynamic recommendInfo;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) MMListenItemUid *uid; // @dynamic uid;
@property(retain, nonatomic) MMListenWeAppInfo *weappInfo; // @dynamic weappInfo;

@end

