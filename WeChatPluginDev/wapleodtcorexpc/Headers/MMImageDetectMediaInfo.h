//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMImageDetectMediaInfo
{
    _Bool _mayUseCDNCache;
    _Bool _isReuploadFileOK;
    _Bool _isCdnCacheExpired;
    unsigned int _encodeIdx;
    NSString *_clientMsgID;
    NSString *_snsFileUrl;
    NSString *_snsToken;
    unsigned long long _encodeKey;
    NSString *_forwardFileID;
    NSString *_forwardAesKey;
    NSString *_reuplodFileID;
    NSString *_reuploadAaesKey;
    NSString *_hdFilePath;
    NSString *_middleFilePath;
    NSString *_reuploadFilePath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reuploadFilePath; // @synthesize reuploadFilePath=_reuploadFilePath;
@property(retain, nonatomic) NSString *middleFilePath; // @synthesize middleFilePath=_middleFilePath;
@property(retain, nonatomic) NSString *hdFilePath; // @synthesize hdFilePath=_hdFilePath;
@property(retain, nonatomic) NSString *reuploadAaesKey; // @synthesize reuploadAaesKey=_reuploadAaesKey;
@property(retain, nonatomic) NSString *reuplodFileID; // @synthesize reuplodFileID=_reuplodFileID;
@property(retain, nonatomic) NSString *forwardAesKey; // @synthesize forwardAesKey=_forwardAesKey;
@property(retain, nonatomic) NSString *forwardFileID; // @synthesize forwardFileID=_forwardFileID;
@property(nonatomic) _Bool isCdnCacheExpired; // @synthesize isCdnCacheExpired=_isCdnCacheExpired;
@property(nonatomic) _Bool isReuploadFileOK; // @synthesize isReuploadFileOK=_isReuploadFileOK;
@property(nonatomic) _Bool mayUseCDNCache; // @synthesize mayUseCDNCache=_mayUseCDNCache;
@property(nonatomic) unsigned long long encodeKey; // @synthesize encodeKey=_encodeKey;
@property(nonatomic) unsigned int encodeIdx; // @synthesize encodeIdx=_encodeIdx;
@property(retain, nonatomic) NSString *snsToken; // @synthesize snsToken=_snsToken;
@property(retain, nonatomic) NSString *snsFileUrl; // @synthesize snsFileUrl=_snsFileUrl;
@property(retain, nonatomic) NSString *clientMsgID; // @synthesize clientMsgID=_clientMsgID;
- (id)generateFileImageInfoList;
- (id)generateSnsImageInfoList;
- (id)generateChatImageInfoList;

@end

