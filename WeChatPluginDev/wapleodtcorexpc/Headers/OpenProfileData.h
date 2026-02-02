//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface OpenProfileData
{
    int scene;
    int profileType;
    NSString *username;
    NSString *appID;
    NSString *bundleID;
    NSString *extMsg;
    NSString *domain;
}

- (void).cxx_destruct;
@property(nonatomic) int profileType; // @synthesize profileType;
@property(nonatomic) int scene; // @synthesize scene;
@property(retain, nonatomic) NSString *domain; // @synthesize domain;
@property(retain, nonatomic) NSString *extMsg; // @synthesize extMsg;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;
@property(retain, nonatomic) NSString *username; // @synthesize username;
- (void)dealloc;

@end

