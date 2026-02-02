//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCBusinessJumpViewController;

@interface OpenSDKOpenBusinessViewContext
{
    NSString *_appId;
    NSString *_businessType;
    NSString *_query;
    unsigned long long _miniProgramType;
    WCBusinessJumpViewController *_jumpViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCBusinessJumpViewController *jumpViewController; // @synthesize jumpViewController=_jumpViewController;
@property(nonatomic) unsigned long long miniProgramType; // @synthesize miniProgramType=_miniProgramType;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *businessType; // @synthesize businessType=_businessType;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)description;

@end

