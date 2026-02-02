//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCFinderContact, WCFinderFeedContentVM;

@interface NewLifeCardViewModel : NSObject
{
    _Bool _author;
    _Bool _belongSelf;
    _Bool _showUserInfo;
    _Bool _showProfileInfo;
    _Bool _showPostInfo;
    _Bool _finderCardStyle;
    _Bool _isLikeBeforeClick;
    _Bool _showRedPacket;
    int _scene;
    int _enterScene;
    WCFinderFeedContentVM *_finderViewModel;
    WCFinderContact *_cachedFinderContact;
    NSArray *_titleRichTextStyles;
    CDUnknownBlockType _postStateHandler;
    CDUnknownBlockType _postProgressHandler;
    CDUnknownBlockType _stickyHandler;
    CDUnknownBlockType _likeHandler;
    CDUnknownBlockType _redPacketHandler;
    NSString *_redPacketLabelTitle;
    struct CGSize _titleSize;
}

+ (double)overviewMediaAspectRatio;
+ (id)currentUsername;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *redPacketLabelTitle; // @synthesize redPacketLabelTitle=_redPacketLabelTitle;
@property(nonatomic) _Bool showRedPacket; // @synthesize showRedPacket=_showRedPacket;
@property(nonatomic) _Bool isLikeBeforeClick; // @synthesize isLikeBeforeClick=_isLikeBeforeClick;
@property(copy, nonatomic) CDUnknownBlockType redPacketHandler; // @synthesize redPacketHandler=_redPacketHandler;
@property(copy, nonatomic) CDUnknownBlockType likeHandler; // @synthesize likeHandler=_likeHandler;
@property(copy, nonatomic) CDUnknownBlockType stickyHandler; // @synthesize stickyHandler=_stickyHandler;
@property(copy, nonatomic) CDUnknownBlockType postProgressHandler; // @synthesize postProgressHandler=_postProgressHandler;
@property(copy, nonatomic) CDUnknownBlockType postStateHandler; // @synthesize postStateHandler=_postStateHandler;
@property(nonatomic) struct CGSize titleSize; // @synthesize titleSize=_titleSize;
@property(retain, nonatomic) NSArray *titleRichTextStyles; // @synthesize titleRichTextStyles=_titleRichTextStyles;
@property(retain, nonatomic) WCFinderContact *cachedFinderContact; // @synthesize cachedFinderContact=_cachedFinderContact;
@property(retain, nonatomic) WCFinderFeedContentVM *finderViewModel; // @synthesize finderViewModel=_finderViewModel;
@property(nonatomic) _Bool finderCardStyle; // @synthesize finderCardStyle=_finderCardStyle;
@property(nonatomic) _Bool showPostInfo; // @synthesize showPostInfo=_showPostInfo;
@property(nonatomic) _Bool showProfileInfo; // @synthesize showProfileInfo=_showProfileInfo;
@property(nonatomic) _Bool showUserInfo; // @synthesize showUserInfo=_showUserInfo;
@property(nonatomic) _Bool belongSelf; // @synthesize belongSelf=_belongSelf;
@property(nonatomic, getter=isAuthor) _Bool author; // @synthesize author=_author;
@property(nonatomic) int enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (void)onJumpInfoStatusChangeForFeedId:(id)arg1 scene:(unsigned int)arg2 jumpInfos:(id)arg3;
- (void)onFeedContent:(id)arg1 favDataChanged:(id)arg2;
- (void)onFeedStatusChangeForFeedId:(unsigned long long)arg1 source:(unsigned int)arg2 components:(unsigned int)arg3 monotonicData:(id)arg4;
- (void)onFeedContentStickyTopStatueChanged:(id)arg1;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (void)onFeedContent:(id)arg1 changeUploadStatus:(id)arg2 progress:(double)arg3;
- (void)onFeedContent:(id)arg1 changeUploadStatus:(id)arg2;
- (double)cardBottomMargin;
- (double)textHorizonPadding;
- (_Bool)isPrivacy;
- (_Bool)isSticky;
- (_Bool)isStickyOrPrivacy;
- (id)firstMediaInfo;
- (id)dataItem;
- (long long)finderLikeCount;
- (_Bool)isFinderLike;
- (long long)likeCount;
- (_Bool)isLike;
- (long long)readCount;
- (long long)globalFavoriteCount;
- (_Bool)isGlobalFavorite;
- (id)contact;
- (id)title;
- (double)mediaAspectRatio;
- (double)aspectRatio;
- (id)localURL;
- (id)mediaURLForIdentification;
- (id)coverCropInfo;
- (id)mediaURLForRequesting;
- (_Bool)isLocal;
- (long long)postState;
- (double)overviewHeightFromWidth:(double)arg1;
- (double)viewHeightFromWidth:(double)arg1;
- (void)repost;
- (void)toggleFinderLike;
- (void)toggleLike;
- (id)getJumpInfoWording:(id)arg1 type:(long long)arg2;
- (_Bool)hasJumpInfo:(id)arg1 type:(long long)arg2;
- (void)initJumpInfo;
- (id)initWithFinderViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

