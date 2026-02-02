//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WASyncIssueDecryptCmd
{
    unsigned int _appVersion;
    NSString *_decryptKey;
    NSString *_decryptMd5;
    unsigned long long _encryptType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long encryptType; // @synthesize encryptType=_encryptType;
@property(copy, nonatomic) NSString *decryptMd5; // @synthesize decryptMd5=_decryptMd5;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *decryptKey; // @synthesize decryptKey=_decryptKey;
- (id)description;

@end

