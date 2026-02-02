//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface SnsAlbumFeedBehaviour : NSObject
{
    _Bool _isDetailSession;
    unsigned int _source;
    unsigned int _feedType;
    unsigned int _ifAddText;
    unsigned int _feedMediaCount;
    unsigned int _isClickedFromAlbum;
    unsigned int _isClickIntoDetail;
    unsigned int _browsedPicCountAtDetail;
    unsigned int _browsedPicCountAtGallery;
    unsigned int _browseTimeAtDetail;
    unsigned int _browseTimeAtGallery;
    unsigned int _canViewCommentCount;
    unsigned int _canViewLikeCount;
    unsigned int _commentFlag;
    unsigned int _likeFlag;
    NSString *_toUsername;
    NSString *_feedId;
    long long _modifyTogetherOperation;
    long long _browseSceneType;
    NSString *_albumSessionID;
    NSMutableSet *_galleryBrowseMediaSet;
    NSMutableSet *_detailPageBrowsePicSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *detailPageBrowsePicSet; // @synthesize detailPageBrowsePicSet=_detailPageBrowsePicSet;
@property(retain, nonatomic) NSMutableSet *galleryBrowseMediaSet; // @synthesize galleryBrowseMediaSet=_galleryBrowseMediaSet;
@property(nonatomic) _Bool isDetailSession; // @synthesize isDetailSession=_isDetailSession;
@property(retain, nonatomic) NSString *albumSessionID; // @synthesize albumSessionID=_albumSessionID;
@property(nonatomic) long long browseSceneType; // @synthesize browseSceneType=_browseSceneType;
@property(nonatomic) long long modifyTogetherOperation; // @synthesize modifyTogetherOperation=_modifyTogetherOperation;
@property(nonatomic) unsigned int likeFlag; // @synthesize likeFlag=_likeFlag;
@property(nonatomic) unsigned int commentFlag; // @synthesize commentFlag=_commentFlag;
@property(nonatomic) unsigned int canViewLikeCount; // @synthesize canViewLikeCount=_canViewLikeCount;
@property(nonatomic) unsigned int canViewCommentCount; // @synthesize canViewCommentCount=_canViewCommentCount;
@property(nonatomic) unsigned int browseTimeAtGallery; // @synthesize browseTimeAtGallery=_browseTimeAtGallery;
@property(nonatomic) unsigned int browseTimeAtDetail; // @synthesize browseTimeAtDetail=_browseTimeAtDetail;
@property(nonatomic) unsigned int browsedPicCountAtGallery; // @synthesize browsedPicCountAtGallery=_browsedPicCountAtGallery;
@property(nonatomic) unsigned int browsedPicCountAtDetail; // @synthesize browsedPicCountAtDetail=_browsedPicCountAtDetail;
@property(nonatomic) unsigned int isClickIntoDetail; // @synthesize isClickIntoDetail=_isClickIntoDetail;
@property(nonatomic) unsigned int isClickedFromAlbum; // @synthesize isClickedFromAlbum=_isClickedFromAlbum;
@property(nonatomic) unsigned int feedMediaCount; // @synthesize feedMediaCount=_feedMediaCount;
@property(nonatomic) unsigned int ifAddText; // @synthesize ifAddText=_ifAddText;
@property(nonatomic) unsigned int feedType; // @synthesize feedType=_feedType;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *toUsername; // @synthesize toUsername=_toUsername;
- (id)logStr;
- (void)doReport;
- (unsigned int)protocolID;
- (void)incFeedDetailStayTime:(unsigned int)arg1;
- (void)incGalleryStayTime:(unsigned int)arg1;
- (void)recordGalleryBrowseMedia:(id)arg1;
- (void)recordDetailPageBrowseMedia:(id)arg1;
- (void)recordModifyTogetherOperation:(long long)arg1;
- (void)recordLikeFlag:(int)arg1;
- (void)recordCommentFlag:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

