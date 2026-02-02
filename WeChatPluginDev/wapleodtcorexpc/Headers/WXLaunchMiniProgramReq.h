//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@interface WXLaunchMiniProgramReq
{
    NSString *userName;
    NSString *path;
    unsigned long long _miniProgramType;
    NSString *_extMsg;
    NSDictionary *_extDic;
}

+ (id)object;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *extDic; // @synthesize extDic=_extDic;
@property(retain, nonatomic) NSString *extMsg; // @synthesize extMsg=_extMsg;
@property(nonatomic) unsigned long long miniProgramType; // @synthesize miniProgramType=_miniProgramType;
@property(retain, nonatomic) NSString *path; // @synthesize path;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;

@end

