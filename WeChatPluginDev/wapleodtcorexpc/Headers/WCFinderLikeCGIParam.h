//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLikeNewLifeReportInfo, NSData, NSDictionary, NSString;

@interface WCFinderLikeCGIParam : NSObject
{
    _Bool _isCommentLike;
    _Bool _isPrivateLike;
    int _reportScene;
    int _likeFlag;
    int _likeSourceType;
    NSString *_tid;
    NSString *_nonceID;
    NSString *_exportID;
    unsigned long long _scene;
    unsigned long long _commentID;
    NSString *_sessionBuffer;
    unsigned long long _bypassBufferType;
    NSData *_bypassBuffer;
    NSString *_finderUsername;
    NSString *_likeUsername;
    NSDictionary *_additionalClientUdfKv;
    unsigned long long _opType;
    FinderLikeNewLifeReportInfo *_newlifeReportInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLikeNewLifeReportInfo *newlifeReportInfo; // @synthesize newlifeReportInfo=_newlifeReportInfo;
@property(nonatomic) _Bool isPrivateLike; // @synthesize isPrivateLike=_isPrivateLike;
@property(nonatomic) int likeSourceType; // @synthesize likeSourceType=_likeSourceType;
@property(nonatomic) unsigned long long opType; // @synthesize opType=_opType;
@property(nonatomic) int likeFlag; // @synthesize likeFlag=_likeFlag;
@property(copy, nonatomic) NSDictionary *additionalClientUdfKv; // @synthesize additionalClientUdfKv=_additionalClientUdfKv;
@property(nonatomic) _Bool isCommentLike; // @synthesize isCommentLike=_isCommentLike;
@property(copy, nonatomic) NSString *likeUsername; // @synthesize likeUsername=_likeUsername;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(copy, nonatomic) NSData *bypassBuffer; // @synthesize bypassBuffer=_bypassBuffer;
@property(nonatomic) unsigned long long bypassBufferType; // @synthesize bypassBufferType=_bypassBufferType;
@property(retain, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) unsigned long long commentID; // @synthesize commentID=_commentID;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) int reportScene; // @synthesize reportScene=_reportScene;
@property(copy, nonatomic) NSString *exportID; // @synthesize exportID=_exportID;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;

@end

