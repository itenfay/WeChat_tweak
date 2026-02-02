//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WASyncBaseCmd
{
    unsigned int _squence;
    unsigned int _reportId;
    unsigned int _receiveCmdTimeStamp;
    NSString *_username;
    NSString *_appid;
    unsigned long long _cmdType;
    NSString *_cmdKey;
    NSString *_preDownloadRequestkey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *preDownloadRequestkey; // @synthesize preDownloadRequestkey=_preDownloadRequestkey;
@property(nonatomic) unsigned int receiveCmdTimeStamp; // @synthesize receiveCmdTimeStamp=_receiveCmdTimeStamp;
@property(copy, nonatomic) NSString *cmdKey; // @synthesize cmdKey=_cmdKey;
@property(nonatomic) unsigned int reportId; // @synthesize reportId=_reportId;
@property(nonatomic) unsigned int squence; // @synthesize squence=_squence;
@property(nonatomic) unsigned long long cmdType; // @synthesize cmdType=_cmdType;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void)parseBasePropertyFromWxaBaseCmd:(id)arg1;
- (id)cmdUniqueIdentifier;
- (id)description;

@end

