//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderMediaInfo;

@interface MMMusicFinderVideoCellModel : NSObject
{
    _Bool _bAuth;
    unsigned int _likeCount;
    int _videoDuration;
    int _pos;
    unsigned long long _source;
    NSString *_tid;
    NSString *_coverUrl;
    double _coverWidth;
    double _coverHeight;
    NSString *_avatarUrl;
    NSString *_nickName;
    NSString *_username;
    NSString *_desc;
    NSString *_videoUrl;
    NSString *_comment;
    WCFinderMediaInfo *_finderMediaInfo;
    NSString *_reqId;
    NSString *_recommendReason;
    NSString *_debugMsg;
}

+ (id)modelFromFinderDataItem:(id)arg1 source:(unsigned long long)arg2;
+ (void)retriveTidAndNonceId:(id)arg1 tid:(id *)arg2 nonceId:(id *)arg3;
+ (id)combineTid:(id)arg1 nonceId:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *debugMsg; // @synthesize debugMsg=_debugMsg;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(retain, nonatomic) NSString *reqId; // @synthesize reqId=_reqId;
@property(nonatomic) int pos; // @synthesize pos=_pos;
@property(retain, nonatomic) WCFinderMediaInfo *finderMediaInfo; // @synthesize finderMediaInfo=_finderMediaInfo;
@property(nonatomic) int videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) _Bool bAuth; // @synthesize bAuth=_bAuth;
@property(nonatomic) unsigned int likeCount; // @synthesize likeCount=_likeCount;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(nonatomic) double coverHeight; // @synthesize coverHeight=_coverHeight;
@property(nonatomic) double coverWidth; // @synthesize coverWidth=_coverWidth;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToMMMusicFinderVideoCellModel:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)getFeedFrom;
- (_Bool)canSelectVideoWithMinDuration:(double)arg1;
- (struct CGSize)estimateCoverSizeWithMaxWidth:(double)arg1;
- (struct CGSize)estimateCellSizeWithMaxWidth:(double)arg1;

@end

