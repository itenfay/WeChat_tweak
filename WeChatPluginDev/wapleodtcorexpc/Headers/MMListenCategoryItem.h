//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenCategoryItemJumpInfo, MMListenCoverInfo, MMListenJumpInfo, MMListenMusicStory, MMListenRecommendInfo, MMListenSimplePlaylistInfo, MMListenSingerInfo, MMListenUserInfo, NSMutableArray, NSString;

@interface MMListenCategoryItem : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)categoryItemFromSingerInfo:(id)arg1;
+ (id)typeStringFor:(int)arg1;
+ (id)categoryItemFromSimplePlaylistInfo:(id)arg1;
- (id)basicDesc;
- (id)generateTapeDescriptionPrefix;
- (id)tapeDesc;
- (id)coverUrl;
- (_Bool)canShareAsSourceList;
- (id)shareDesc;
- (id)typeString;
- (id)authorName;
- (_Bool)isAudioLocalCategory;
- (_Bool)isAudioCategory;
- (_Bool)isSinger;
- (_Bool)isTabRecommendPlayList;
- (_Bool)isRadioChannel;
- (_Bool)isSingerRadio;
- (_Bool)isTagCategory;
- (_Bool)isUGCPlaylist;
- (_Bool)isTopicUGC;
- (_Bool)isMusicAlbum;
- (_Bool)isValid;
- (id)toPlaylistInfo;
- (id)toFavItemWithCoverImageData:(id)arg1;
- (id)toWCUpLoadTaskWithCoverImageData:(id)arg1;
- (id)toChatMessageWithCoverImageData:(id)arg1;
- (id)toShareItem;

// Remaining properties
@property(retain, nonatomic) NSString *author; // @dynamic author;
@property(retain, nonatomic) MMListenUserInfo *authorInfo; // @dynamic authorInfo;
@property(nonatomic) unsigned long long cacheTime; // @dynamic cacheTime;
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(retain, nonatomic) NSString *clickPlayToast; // @dynamic clickPlayToast;
@property(retain, nonatomic) NSString *cover; // @dynamic cover;
@property(retain, nonatomic) MMListenCoverInfo *coverInfo; // @dynamic coverInfo;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) MMListenJumpInfo *descJumpInfo; // @dynamic descJumpInfo;
@property(nonatomic) _Bool disableListCache; // @dynamic disableListCache;
@property(nonatomic) _Bool enableAddToLibrary; // @dynamic enableAddToLibrary;
@property(nonatomic) _Bool enableForwardShowing; // @dynamic enableForwardShowing;
@property(nonatomic) _Bool enableInMyListendMusicCategories; // @dynamic enableInMyListendMusicCategories;
@property(retain, nonatomic) MMListenRecommendInfo *footprintInfo; // @dynamic footprintInfo;
@property(retain, nonatomic) NSString *headImg; // @dynamic headImg;
@property(retain, nonatomic) NSString *icon; // @dynamic icon;
@property(nonatomic) _Bool isCollab; // @dynamic isCollab;
@property(nonatomic) _Bool isDel; // @dynamic isDel;
@property(nonatomic) _Bool isDigitalAlbum; // @dynamic isDigitalAlbum;
@property(nonatomic) _Bool isLiked; // @dynamic isLiked;
@property(nonatomic) _Bool isPlayable; // @dynamic isPlayable;
@property(nonatomic) _Bool isPublic; // @dynamic isPublic;
@property(nonatomic) _Bool isPublicLiked; // @dynamic isPublicLiked;
@property(nonatomic) _Bool isStar; // @dynamic isStar;
@property(nonatomic) _Bool isVoicePlaylist; // @dynamic isVoicePlaylist;
@property(nonatomic) int itemNum; // @dynamic itemNum;
@property(retain, nonatomic) MMListenCategoryItemJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(nonatomic) int likeNum; // @dynamic likeNum;
@property(nonatomic) int listType; // @dynamic listType;
@property(nonatomic) int listenNum; // @dynamic listenNum;
@property(nonatomic) int listeningNum; // @dynamic listeningNum;
@property(nonatomic) _Bool mine; // @dynamic mine;
@property(retain, nonatomic) MMListenSimplePlaylistInfo *moreListInfo; // @dynamic moreListInfo;
@property(retain, nonatomic) MMListenMusicStory *musicStoryDesc; // @dynamic musicStoryDesc;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) _Bool needCache; // @dynamic needCache;
@property(retain, nonatomic) NSMutableArray *orderOptions; // @dynamic orderOptions;
@property(retain, nonatomic) NSMutableArray *otherAuthorList; // @dynamic otherAuthorList;
@property(retain, nonatomic) NSMutableArray *otherCovers; // @dynamic otherCovers;
@property(nonatomic) unsigned long long playTime; // @dynamic playTime;
@property(nonatomic) int playType; // @dynamic playType;
@property(nonatomic) int playable; // @dynamic playable;
@property(retain, nonatomic) NSString *previewDesc; // @dynamic previewDesc;
@property(retain, nonatomic) NSString *publicTime; // @dynamic publicTime;
@property(retain, nonatomic) NSString *publicTimeWording; // @dynamic publicTimeWording;
@property(retain, nonatomic) MMListenRecommendInfo *recommendInfo; // @dynamic recommendInfo;
@property(nonatomic) int shareNum; // @dynamic shareNum;
@property(retain, nonatomic) MMListenSingerInfo *singerInfo; // @dynamic singerInfo;
@property(retain, nonatomic) MMListenSimplePlaylistInfo *singerRadioPlaylistInfo; // @dynamic singerRadioPlaylistInfo;
@property(retain, nonatomic) MMListenRecommendInfo *singerRadioRecommendInfo; // @dynamic singerRadioRecommendInfo;
@property(nonatomic) int starNum; // @dynamic starNum;
@property(retain, nonatomic) NSMutableArray *subCategories; // @dynamic subCategories;
@property(retain, nonatomic) NSString *subTitle; // @dynamic subTitle;
@property(nonatomic) unsigned long long synckey; // @dynamic synckey;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

