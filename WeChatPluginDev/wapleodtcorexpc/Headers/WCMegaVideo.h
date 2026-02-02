//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCMegaVideoDesc, WCMegaVideoFinderBusiness;

@interface WCMegaVideo : NSObject
{
    _Bool _isTest;
    unsigned long long _videoId;
    unsigned long long _createTime;
    WCMegaVideoDesc *_desc;
    unsigned long long _forwardCount;
    unsigned long long _likeCount;
    unsigned long long _commentCount;
    unsigned long long _favCount;
    unsigned long long _friendLikeCount;
    unsigned long long _spamFlag;
    NSString *_videoNonceId;
    unsigned long long _readCount;
    NSString *_sessionBuffer;
    unsigned long long _favFlag;
    unsigned long long _urlValidDuration;
    unsigned long long _privateFlag;
    NSString *_debugMessage;
    unsigned long long _permissionFlag;
    WCMegaVideoFinderBusiness *_finder;
    unsigned long long _status;
    NSString *_spamWording;
    unsigned long long _bulletCount;
    unsigned long long _likeFlag;
    unsigned long long _warnFlag;
    NSString *_warnWording;
}

+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_warnWording;
+ (void)PBArrayAdd_warnFlag;
+ (void)PBArrayAdd_likeFlag;
+ (void)PBArrayAdd_bulletCount;
+ (void)PBArrayAdd_spamWording;
+ (void)PBArrayAdd_status;
+ (void)PBArrayAdd_finder;
+ (void)PBArrayAdd_permissionFlag;
+ (void)PBArrayAdd_debugMessage;
+ (void)PBArrayAdd_privateFlag;
+ (void)PBArrayAdd_urlValidDuration;
+ (void)PBArrayAdd_favFlag;
+ (void)PBArrayAdd_sessionBuffer;
+ (void)PBArrayAdd_readCount;
+ (void)PBArrayAdd_isTest;
+ (void)PBArrayAdd_videoNonceId;
+ (void)PBArrayAdd_spamFlag;
+ (void)PBArrayAdd_friendLikeCount;
+ (void)PBArrayAdd_favCount;
+ (void)PBArrayAdd_commentCount;
+ (void)PBArrayAdd_likeCount;
+ (void)PBArrayAdd_forwardCount;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_videoId;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *warnWording; // @synthesize warnWording=_warnWording;
@property(nonatomic) unsigned long long warnFlag; // @synthesize warnFlag=_warnFlag;
@property(nonatomic) unsigned long long likeFlag; // @synthesize likeFlag=_likeFlag;
@property(nonatomic) unsigned long long bulletCount; // @synthesize bulletCount=_bulletCount;
@property(copy, nonatomic) NSString *spamWording; // @synthesize spamWording=_spamWording;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) WCMegaVideoFinderBusiness *finder; // @synthesize finder=_finder;
@property(nonatomic) unsigned long long permissionFlag; // @synthesize permissionFlag=_permissionFlag;
@property(copy, nonatomic) NSString *debugMessage; // @synthesize debugMessage=_debugMessage;
@property(nonatomic) unsigned long long privateFlag; // @synthesize privateFlag=_privateFlag;
@property(nonatomic) unsigned long long urlValidDuration; // @synthesize urlValidDuration=_urlValidDuration;
@property(nonatomic) unsigned long long favFlag; // @synthesize favFlag=_favFlag;
@property(copy, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) unsigned long long readCount; // @synthesize readCount=_readCount;
@property(nonatomic) _Bool isTest; // @synthesize isTest=_isTest;
@property(copy, nonatomic) NSString *videoNonceId; // @synthesize videoNonceId=_videoNonceId;
@property(nonatomic) unsigned long long spamFlag; // @synthesize spamFlag=_spamFlag;
@property(nonatomic) unsigned long long friendLikeCount; // @synthesize friendLikeCount=_friendLikeCount;
@property(nonatomic) unsigned long long favCount; // @synthesize favCount=_favCount;
@property(nonatomic) unsigned long long commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) unsigned long long forwardCount; // @synthesize forwardCount=_forwardCount;
@property(retain, nonatomic) WCMegaVideoDesc *desc; // @synthesize desc=_desc;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned long long videoId; // @synthesize videoId=_videoId;
- (void)onFinderMegaVideoBulletOpenChangedRet:(_Bool)arg1 videoId:(id)arg2 bulletOpen:(_Bool)arg3;
- (void)onFinderMegaVideoPrivateStatusChangedRet:(_Bool)arg1 videoId:(id)arg2 isPrivate:(_Bool)arg3;
- (void)onFinderMegaVideoFavStatusChangedRet:(_Bool)arg1 videoId:(id)arg2 isFav:(_Bool)arg3;
- (void)onFinderMegaVideoLikeStatusChangedRet:(_Bool)arg1 videoId:(id)arg2 isLike:(_Bool)arg3;
@property(readonly, copy) NSString *description;
- (id)dangerousText;
- (_Bool)isDangerous;
- (_Bool)isForcePrivate;
- (_Bool)isShareIconEnable;
- (_Bool)canComment;
- (_Bool)canFav;
- (_Bool)canLike;
- (_Bool)isPrivate;
- (_Bool)hadFav;
- (_Bool)hadLiked;
- (void)setCommentOpen:(_Bool)arg1;
- (id)title;
- (id)media;
- (id)videoIdStr;
- (id)genMegaVideo;
- (id)initWithMegaVideo:(id)arg1;
- (id)init;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

