//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WebviewLocalResItem
{
    NSString *_localResId;
    NSString *_savePath;
    NSString *_svrId;
    NSString *_appId;
    NSString *_cdnUrl;
    NSString *_cdnAESKey;
    unsigned int _fileSize;
    NSString *_mediaType;
    NSString *_fileExt;
    _Bool _needMediaId;
    _Bool _bNeedStorage;
    NSString *_fileUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_needMediaId;
+ (void)PBArrayAdd_fileUrl;
+ (void)PBArrayAdd_fileExt;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_cdnAESKey;
+ (void)PBArrayAdd_cdnUrl;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_svrId;
+ (void)PBArrayAdd_savePath;
+ (void)PBArrayAdd_localResId;
- (void).cxx_destruct;
@property(nonatomic) _Bool bNeedStorage; // @synthesize bNeedStorage=_bNeedStorage;
@property(nonatomic) _Bool needMediaId; // @synthesize needMediaId=_needMediaId;
@property(retain, nonatomic) NSString *fileUrl; // @synthesize fileUrl=_fileUrl;
@property(retain, nonatomic) NSString *fileExt; // @synthesize fileExt=_fileExt;
@property(retain, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) unsigned int fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *cdnAESKey; // @synthesize cdnAESKey=_cdnAESKey;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl=_cdnUrl;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *svrId; // @synthesize svrId=_svrId;
@property(retain, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
@property(retain, nonatomic) NSString *localResId; // @synthesize localResId=_localResId;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

