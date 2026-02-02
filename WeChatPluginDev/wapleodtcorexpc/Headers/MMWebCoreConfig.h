//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSDictionary, NSString;

@interface MMWebCoreConfig
{
    _Bool _enableOauthSnapShotMode;
    NSString *_referer;
    NSArray *_arrUserScript;
    NSDictionary *_dictCustomWebviewEnvInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableOauthSnapShotMode; // @synthesize enableOauthSnapShotMode=_enableOauthSnapShotMode;
@property(retain, nonatomic) NSDictionary *dictCustomWebviewEnvInfo; // @synthesize dictCustomWebviewEnvInfo=_dictCustomWebviewEnvInfo;
@property(retain, nonatomic) NSArray *arrUserScript; // @synthesize arrUserScript=_arrUserScript;
@property(copy, nonatomic) NSString *referer; // @synthesize referer=_referer;

@end

