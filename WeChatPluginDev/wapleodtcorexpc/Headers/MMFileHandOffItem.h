//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, NSString;

@interface MMFileHandOffItem
{
    unsigned int _sdkversion;
    NSString *_filetype;
    NSString *_md5;
    unsigned long long _size;
    long long _source;
    long long _id;
    NSString *_extid;
    NSString *_cdnurl;
    NSString *_aeskey;
    NSString *_authkey;
    long long _filestatus;
    NSString *_appid;
    NSString *_mediaid;
    CMessageWrap *_messageWrap;
}

+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_messageWrap;
@property(copy, nonatomic) NSString *mediaid; // @synthesize mediaid=_mediaid;
@property(nonatomic) unsigned int sdkversion; // @synthesize sdkversion=_sdkversion;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(nonatomic) long long filestatus; // @synthesize filestatus=_filestatus;
@property(copy, nonatomic) NSString *authkey; // @synthesize authkey=_authkey;
@property(copy, nonatomic) NSString *aeskey; // @synthesize aeskey=_aeskey;
@property(copy, nonatomic) NSString *cdnurl; // @synthesize cdnurl=_cdnurl;
@property(copy, nonatomic) NSString *extid; // @synthesize extid=_extid;
@property(nonatomic) long long id; // @synthesize id=_id;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *filetype; // @synthesize filetype=_filetype;
- (id)getRecordClientMsgID;
- (id)getFilePath;
- (_Bool)canUpload;
- (id)getMessageWrap;
- (id)getChatName;
- (id)initFromMinimizeTaskData:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

