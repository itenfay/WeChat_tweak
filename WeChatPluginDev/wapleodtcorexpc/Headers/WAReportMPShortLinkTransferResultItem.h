//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportMPShortLinkTransferResultItem
{
    _Bool _isCache;
    int _result;
    unsigned int _resultAppVersion;
    unsigned int _resultAppState;
    NSString *_mpShortLink;
    NSString *_resultAppid;
    NSString *_resultPagePath;
    NSString *_resultNickName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *resultNickName; // @synthesize resultNickName=_resultNickName;
@property(copy, nonatomic) NSString *resultPagePath; // @synthesize resultPagePath=_resultPagePath;
@property(nonatomic) unsigned int resultAppState; // @synthesize resultAppState=_resultAppState;
@property(nonatomic) unsigned int resultAppVersion; // @synthesize resultAppVersion=_resultAppVersion;
@property(copy, nonatomic) NSString *resultAppid; // @synthesize resultAppid=_resultAppid;
@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
@property(nonatomic) int result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *mpShortLink; // @synthesize mpShortLink=_mpShortLink;
- (id)reportString;
- (int)reportID;

@end

