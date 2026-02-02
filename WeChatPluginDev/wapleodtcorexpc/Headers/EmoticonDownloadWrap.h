//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface EmoticonDownloadWrap
{
    NSString *_md5;
    NSString *_aesKey;
    NSString *_cdnUrl;
    NSString *_encryptUrl;
    NSString *_externMd5;
    NSString *_externUrl;
    NSString *_tpUrl;
    NSString *_authKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *authKey; // @synthesize authKey=_authKey;
@property(retain, nonatomic) NSString *tpUrl; // @synthesize tpUrl=_tpUrl;
@property(retain, nonatomic) NSString *externUrl; // @synthesize externUrl=_externUrl;
@property(retain, nonatomic) NSString *externMd5; // @synthesize externMd5=_externMd5;
@property(retain, nonatomic) NSString *encryptUrl; // @synthesize encryptUrl=_encryptUrl;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl=_cdnUrl;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;

@end

