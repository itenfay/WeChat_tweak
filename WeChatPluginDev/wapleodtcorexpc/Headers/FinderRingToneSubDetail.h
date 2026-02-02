//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, RingToneBGMInfo, WCFinderDataItem;

@interface FinderRingToneSubDetail
{
    unsigned long long _objectId;
    NSString *_nonceId;
    NSString *_nickName;
    unsigned long long _settingCount;
    NSString *_finderUserName;
    unsigned long long _authProfessionType;
    NSString *_authIconURL;
    NSString *_authProfessionDesc;
    RingToneBGMInfo *_bgmInfo;
    NSString *_originalTitle;
    unsigned long long _recommendReasonType;
    unsigned long long _usedByFriendCount;
    unsigned long long _titleType;
    NSString *_singer;
    WCFinderDataItem *_dataItem;
    NSMutableArray *_friendsUsedInfo;
    NSString *_customReason;
    unsigned long long _cmdID;
    NSString *_singerFinderUserName;
    NSString *_singerBaikeURL;
    NSString *_itemContext;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *itemContext; // @synthesize itemContext=_itemContext;
@property(copy, nonatomic) NSString *singerBaikeURL; // @synthesize singerBaikeURL=_singerBaikeURL;
@property(copy, nonatomic) NSString *singerFinderUserName; // @synthesize singerFinderUserName=_singerFinderUserName;
@property(nonatomic) unsigned long long cmdID; // @synthesize cmdID=_cmdID;
@property(copy, nonatomic) NSString *customReason; // @synthesize customReason=_customReason;
@property(copy, nonatomic) NSMutableArray *friendsUsedInfo; // @synthesize friendsUsedInfo=_friendsUsedInfo;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(copy, nonatomic) NSString *singer; // @synthesize singer=_singer;
@property(nonatomic) unsigned long long titleType; // @synthesize titleType=_titleType;
@property(nonatomic) unsigned long long usedByFriendCount; // @synthesize usedByFriendCount=_usedByFriendCount;
@property(nonatomic) unsigned long long recommendReasonType; // @synthesize recommendReasonType=_recommendReasonType;
@property(copy, nonatomic) NSString *originalTitle; // @synthesize originalTitle=_originalTitle;
@property(retain, nonatomic) RingToneBGMInfo *bgmInfo; // @synthesize bgmInfo=_bgmInfo;
@property(copy, nonatomic) NSString *authProfessionDesc; // @synthesize authProfessionDesc=_authProfessionDesc;
@property(copy, nonatomic) NSString *authIconURL; // @synthesize authIconURL=_authIconURL;
@property(nonatomic) unsigned long long authProfessionType; // @synthesize authProfessionType=_authProfessionType;
@property(copy, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(nonatomic) unsigned long long settingCount; // @synthesize settingCount=_settingCount;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(readonly, copy, nonatomic) NSString *tid;
- (id)initFromFinderItem:(id)arg1;
- (id)initFromPb:(id)arg1;

@end

