//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WASilentOpenCheckInfo
{
    unsigned int _beginTimeStamp;
    unsigned int _cacheSeconds;
    NSString *_appid;
    NSString *_username;
    unsigned long long _ret;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int cacheSeconds; // @synthesize cacheSeconds=_cacheSeconds;
@property(nonatomic) unsigned int beginTimeStamp; // @synthesize beginTimeStamp=_beginTimeStamp;
@property(nonatomic) unsigned long long ret; // @synthesize ret=_ret;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;

@end

