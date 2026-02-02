//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportCacheDetailItem
{
    unsigned int _countedWeAppNum;
    unsigned int _top1AppidAppServiceType;
    unsigned int _top2AppidAppServiceType;
    unsigned int _top3AppidAppServiceType;
    unsigned int _top4AppidAppServiceType;
    unsigned int _top5AppidAppServiceType;
    unsigned int _top6AppidAppServiceType;
    unsigned int _top7AppidAppServiceType;
    unsigned int _top8AppidAppServiceType;
    unsigned long long _weAppAllCacheSizeInBytes;
    NSString *_top1Appid;
    unsigned long long _top1AppidCacheSizeInBytes;
    NSString *_top1NickName;
    NSString *_top2Appid;
    unsigned long long _top2AppidCacheSizeInBytes;
    NSString *_top2NickName;
    NSString *_top3Appid;
    unsigned long long _top3AppidCacheSizeInBytes;
    NSString *_top3NickName;
    NSString *_top4Appid;
    unsigned long long _top4AppidCacheSizeInBytes;
    NSString *_top4NickName;
    NSString *_top5Appid;
    unsigned long long _top5AppidCacheSizeInBytes;
    NSString *_top5NickName;
    NSString *_top6Appid;
    unsigned long long _top6AppidCacheSizeInBytes;
    NSString *_top6NickName;
    NSString *_top7Appid;
    unsigned long long _top7AppidCacheSizeInBytes;
    NSString *_top7NickName;
    NSString *_top8Appid;
    unsigned long long _top8AppidCacheSizeInBytes;
    NSString *_top8NickName;
    unsigned long long _restWeAppAllCacheSizeInBytes;
    unsigned long long _publicDataSizeInBytes;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long publicDataSizeInBytes; // @synthesize publicDataSizeInBytes=_publicDataSizeInBytes;
@property(nonatomic) unsigned long long restWeAppAllCacheSizeInBytes; // @synthesize restWeAppAllCacheSizeInBytes=_restWeAppAllCacheSizeInBytes;
@property(copy, nonatomic) NSString *top8NickName; // @synthesize top8NickName=_top8NickName;
@property(nonatomic) unsigned int top8AppidAppServiceType; // @synthesize top8AppidAppServiceType=_top8AppidAppServiceType;
@property(nonatomic) unsigned long long top8AppidCacheSizeInBytes; // @synthesize top8AppidCacheSizeInBytes=_top8AppidCacheSizeInBytes;
@property(copy, nonatomic) NSString *top8Appid; // @synthesize top8Appid=_top8Appid;
@property(copy, nonatomic) NSString *top7NickName; // @synthesize top7NickName=_top7NickName;
@property(nonatomic) unsigned int top7AppidAppServiceType; // @synthesize top7AppidAppServiceType=_top7AppidAppServiceType;
@property(nonatomic) unsigned long long top7AppidCacheSizeInBytes; // @synthesize top7AppidCacheSizeInBytes=_top7AppidCacheSizeInBytes;
@property(copy, nonatomic) NSString *top7Appid; // @synthesize top7Appid=_top7Appid;
@property(copy, nonatomic) NSString *top6NickName; // @synthesize top6NickName=_top6NickName;
@property(nonatomic) unsigned int top6AppidAppServiceType; // @synthesize top6AppidAppServiceType=_top6AppidAppServiceType;
@property(nonatomic) unsigned long long top6AppidCacheSizeInBytes; // @synthesize top6AppidCacheSizeInBytes=_top6AppidCacheSizeInBytes;
@property(copy, nonatomic) NSString *top6Appid; // @synthesize top6Appid=_top6Appid;
@property(copy, nonatomic) NSString *top5NickName; // @synthesize top5NickName=_top5NickName;
@property(nonatomic) unsigned int top5AppidAppServiceType; // @synthesize top5AppidAppServiceType=_top5AppidAppServiceType;
@property(nonatomic) unsigned long long top5AppidCacheSizeInBytes; // @synthesize top5AppidCacheSizeInBytes=_top5AppidCacheSizeInBytes;
@property(copy, nonatomic) NSString *top5Appid; // @synthesize top5Appid=_top5Appid;
@property(copy, nonatomic) NSString *top4NickName; // @synthesize top4NickName=_top4NickName;
@property(nonatomic) unsigned int top4AppidAppServiceType; // @synthesize top4AppidAppServiceType=_top4AppidAppServiceType;
@property(nonatomic) unsigned long long top4AppidCacheSizeInBytes; // @synthesize top4AppidCacheSizeInBytes=_top4AppidCacheSizeInBytes;
@property(copy, nonatomic) NSString *top4Appid; // @synthesize top4Appid=_top4Appid;
@property(copy, nonatomic) NSString *top3NickName; // @synthesize top3NickName=_top3NickName;
@property(nonatomic) unsigned int top3AppidAppServiceType; // @synthesize top3AppidAppServiceType=_top3AppidAppServiceType;
@property(nonatomic) unsigned long long top3AppidCacheSizeInBytes; // @synthesize top3AppidCacheSizeInBytes=_top3AppidCacheSizeInBytes;
@property(copy, nonatomic) NSString *top3Appid; // @synthesize top3Appid=_top3Appid;
@property(copy, nonatomic) NSString *top2NickName; // @synthesize top2NickName=_top2NickName;
@property(nonatomic) unsigned int top2AppidAppServiceType; // @synthesize top2AppidAppServiceType=_top2AppidAppServiceType;
@property(nonatomic) unsigned long long top2AppidCacheSizeInBytes; // @synthesize top2AppidCacheSizeInBytes=_top2AppidCacheSizeInBytes;
@property(copy, nonatomic) NSString *top2Appid; // @synthesize top2Appid=_top2Appid;
@property(copy, nonatomic) NSString *top1NickName; // @synthesize top1NickName=_top1NickName;
@property(nonatomic) unsigned int top1AppidAppServiceType; // @synthesize top1AppidAppServiceType=_top1AppidAppServiceType;
@property(nonatomic) unsigned long long top1AppidCacheSizeInBytes; // @synthesize top1AppidCacheSizeInBytes=_top1AppidCacheSizeInBytes;
@property(copy, nonatomic) NSString *top1Appid; // @synthesize top1Appid=_top1Appid;
@property(nonatomic) unsigned int countedWeAppNum; // @synthesize countedWeAppNum=_countedWeAppNum;
@property(nonatomic) unsigned long long weAppAllCacheSizeInBytes; // @synthesize weAppAllCacheSizeInBytes=_weAppAllCacheSizeInBytes;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

@end

