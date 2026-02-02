//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WePkgSingleFileInfo
{
    unsigned int _downloadNetworkType;
    unsigned int _sizeInBytes;
    NSString *_rid;
    NSString *_mimeType;
    NSString *_md5;
    NSString *_downloadUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_sizeInBytes;
+ (void)PBArrayAdd_downloadNetworkType;
+ (void)PBArrayAdd_downloadUrl;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_mimeType;
+ (void)PBArrayAdd_rid;
- (void).cxx_destruct;
@property(nonatomic) unsigned int sizeInBytes; // @synthesize sizeInBytes=_sizeInBytes;
@property(nonatomic) unsigned int downloadNetworkType; // @synthesize downloadNetworkType=_downloadNetworkType;
@property(retain, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) NSString *rid; // @synthesize rid=_rid;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

