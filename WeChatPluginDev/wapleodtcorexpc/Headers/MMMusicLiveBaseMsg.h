//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMMusicLiveBaseMsg : NSObject
{
    _Bool _bLike;
    _Bool _isMyPost;
    unsigned int _createTime;
    unsigned int _likeCount;
    NSString *_fromUsername;
    unsigned long long _msgId;
    NSString *_headImgUrl;
    NSString *_nickName;
    NSString *_content;
    NSString *_mvPostNickname;
    unsigned long long _mvId;
    NSString *_nonceId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(nonatomic) unsigned long long mvId; // @synthesize mvId=_mvId;
@property(retain, nonatomic) NSString *mvPostNickname; // @synthesize mvPostNickname=_mvPostNickname;
@property(nonatomic) _Bool isMyPost; // @synthesize isMyPost=_isMyPost;
@property(nonatomic) unsigned int likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) _Bool bLike; // @synthesize bLike=_bLike;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl=_headImgUrl;
@property(nonatomic) unsigned long long msgId; // @synthesize msgId=_msgId;
@property(retain, nonatomic) NSString *fromUsername; // @synthesize fromUsername=_fromUsername;

@end

