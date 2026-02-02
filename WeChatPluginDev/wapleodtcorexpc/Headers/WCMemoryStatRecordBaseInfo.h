//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCMemoryStatRecordBaseInfo
{
    _Bool _isValid;
    unsigned long long _launchTime;
    NSString *_userScene;
    NSString *_systemVersion;
    NSString *_appUUID;
    NSData *_vmRegionsData;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(retain, nonatomic) NSData *vmRegionsData; // @synthesize vmRegionsData=_vmRegionsData;
@property(retain, nonatomic) NSString *appUUID; // @synthesize appUUID=_appUUID;
@property(retain, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(retain, nonatomic) NSString *userScene; // @synthesize userScene=_userScene;
@property(nonatomic) unsigned long long launchTime; // @synthesize launchTime=_launchTime;
- (id)init;

@end

