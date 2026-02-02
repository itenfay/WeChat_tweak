//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, SportRecord;

@interface DeviceRankInfo : NSObject
{
    NSString *_username;
    NSString *_nickname;
    NSString *_rankTitle;
    NSString *_scoreTitle;
    unsigned int _rank;
    unsigned int _score;
    unsigned int _likeCount;
    _Bool _hasLike;
    _Bool _localLike;
    NSString *_m_deviceId;
    SportRecord *_record;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SportRecord *record; // @synthesize record=_record;
@property(retain, nonatomic) NSString *m_deviceId; // @synthesize m_deviceId=_m_deviceId;
@property(nonatomic) _Bool localLike; // @synthesize localLike=_localLike;
@property(nonatomic) _Bool hasLike; // @synthesize hasLike=_hasLike;
@property(nonatomic) unsigned int likeCount; // @synthesize likeCount=_likeCount;
@property(retain, nonatomic) NSString *scoreTitle; // @synthesize scoreTitle=_scoreTitle;
@property(retain, nonatomic) NSString *rankTitle; // @synthesize rankTitle=_rankTitle;
@property(nonatomic) unsigned int score; // @synthesize score=_score;
@property(nonatomic) unsigned int rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;

@end

