//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderModFeedSettingCGI
{
    _Bool _isSwitchOn;
    int _settingScene;
    int _oplogScene;
    unsigned long long _feedID;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    NSString *_userName;
    NSString *_nonceID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) int oplogScene; // @synthesize oplogScene=_oplogScene;
@property(nonatomic) int settingScene; // @synthesize settingScene=_settingScene;
@property(nonatomic) _Bool isSwitchOn; // @synthesize isSwitchOn=_isSwitchOn;
@property(nonatomic) unsigned long long feedID; // @synthesize feedID=_feedID;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)defaultErrorMsg:(int)arg1;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFeedID:(unsigned long long)arg1 nonceID:(id)arg2 userName:(id)arg3 isSwitchON:(_Bool)arg4 settingScene:(int)arg5 oplogScene:(int)arg6 successBlock:(CDUnknownBlockType)arg7 failBlock:(CDUnknownBlockType)arg8;

@end

