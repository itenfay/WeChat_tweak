//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMusicMVOriginalInfo, MMMusicMVSongInfo, NSArray, NSMutableArray, NSString;

@interface MMMusicMVModel : NSObject
{
    _Bool _hasCustomCover;
    _Bool _isMvWithBeat;
    _Bool _isPrivateAccount;
    _Bool _disableForwardByPrivateAccount;
    _Bool _isSelfLiked;
    _Bool _isDraft;
    _Bool _isDeleted;
    int _mvType;
    int _draftJumpPage;
    NSMutableArray *_arrFlexClipTracks;
    NSMutableArray *_arrFixedClipTracks;
    NSMutableArray *_arrFlexBasicClipTracks;
    MMMusicMVSongInfo *_songInfo;
    MMMusicMVOriginalInfo *_originalInfo;
    NSString *_thumbUrl;
    NSString *_initialDraftId;
    NSString *_svrId;
    NSString *_nonceId;
    NSString *_localId;
    NSString *_authorFinderUsername;
    NSString *_authorFinderNickname;
    NSString *_authorFinderHeadUrl;
    NSString *_sessionBuffer;
    long long _likeCount;
    long long _commentCount;
    long long _forwardCount;
    double _createTime;
    unsigned long long _postingState;
    NSString *_coverLocalFilename;
    NSArray *_refObjectList;
    unsigned long long _mediaType;
}

+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
+ (id)modelPropertyBlacklist;
+ (void)initialize;
+ (void)PBArrayAdd_draftJumpPage;
+ (void)PBArrayAdd_nonceId;
+ (void)PBArrayAdd_arrFlexClipTracks;
+ (void)PBArrayAdd_mvType;
+ (void)PBArrayAdd_hasCustomCover;
+ (void)PBArrayAdd_initialDraftId;
+ (void)PBArrayAdd_isDeleted;
+ (void)PBArrayAdd_coverLocalFilename;
+ (void)PBArrayAdd_isDraft;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_localId;
+ (void)PBArrayAdd_svrId;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_originalInfo;
+ (void)PBArrayAdd_songInfo;
+ (void)PBArrayAdd_arrFixedClipTracks;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) NSArray *refObjectList; // @synthesize refObjectList=_refObjectList;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property(retain, nonatomic) NSString *coverLocalFilename; // @synthesize coverLocalFilename=_coverLocalFilename;
@property(nonatomic) _Bool isDraft; // @synthesize isDraft=_isDraft;
@property(nonatomic) unsigned long long postingState; // @synthesize postingState=_postingState;
@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
@property(nonatomic) _Bool isSelfLiked; // @synthesize isSelfLiked=_isSelfLiked;
@property(nonatomic) long long forwardCount; // @synthesize forwardCount=_forwardCount;
@property(nonatomic) long long commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(retain, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) _Bool disableForwardByPrivateAccount; // @synthesize disableForwardByPrivateAccount=_disableForwardByPrivateAccount;
@property(nonatomic) _Bool isPrivateAccount; // @synthesize isPrivateAccount=_isPrivateAccount;
@property(retain, nonatomic) NSString *authorFinderHeadUrl; // @synthesize authorFinderHeadUrl=_authorFinderHeadUrl;
@property(retain, nonatomic) NSString *authorFinderNickname; // @synthesize authorFinderNickname=_authorFinderNickname;
@property(retain, nonatomic) NSString *authorFinderUsername; // @synthesize authorFinderUsername=_authorFinderUsername;
@property(retain, nonatomic) NSString *localId; // @synthesize localId=_localId;
@property(retain, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(retain, nonatomic) NSString *svrId; // @synthesize svrId=_svrId;
@property(nonatomic) _Bool isMvWithBeat; // @synthesize isMvWithBeat=_isMvWithBeat;
@property(nonatomic) _Bool hasCustomCover; // @synthesize hasCustomCover=_hasCustomCover;
@property(retain, nonatomic) NSString *initialDraftId; // @synthesize initialDraftId=_initialDraftId;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(nonatomic) int draftJumpPage; // @synthesize draftJumpPage=_draftJumpPage;
@property(retain, nonatomic) MMMusicMVOriginalInfo *originalInfo; // @synthesize originalInfo=_originalInfo;
@property(retain, nonatomic) MMMusicMVSongInfo *songInfo; // @synthesize songInfo=_songInfo;
@property(retain, nonatomic) NSMutableArray *arrFlexBasicClipTracks; // @synthesize arrFlexBasicClipTracks=_arrFlexBasicClipTracks;
@property(retain, nonatomic) NSMutableArray *arrFixedClipTracks; // @synthesize arrFixedClipTracks=_arrFixedClipTracks;
@property(retain, nonatomic) NSMutableArray *arrFlexClipTracks; // @synthesize arrFlexClipTracks=_arrFlexClipTracks;
@property(nonatomic) int mvType; // @synthesize mvType=_mvType;
- (_Bool)isSupportedMV;
- (void)updateRefObjectList:(id)arg1;
@property(retain, nonatomic) NSMutableArray *arrTrack;
- (_Bool)isFlexClipMV;
- (_Bool)isSameModel:(id)arg1;
- (_Bool)isMyPost;
- (void)clearTrackItemsDataAndIsKeepFeatureList:(_Bool)arg1;
- (void)clearTrackItemsData;
- (_Bool)isDeletable;
- (_Bool)isPosting;
- (_Bool)isMVInfoValid;
- (_Bool)isSvrMode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)canCreateMV;
- (_Bool)isVaild;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;
- (_Bool)isValidMusicInteractionStatistics;
@property(readonly, nonatomic) NSString *musicInteractionidentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

