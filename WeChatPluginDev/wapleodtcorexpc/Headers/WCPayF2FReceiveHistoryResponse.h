//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCPayF2FReceiveHistoryResponse : NSObject
{
    _Bool _bIsAllDataLoadEnd;
    unsigned int _svrRetTrynum;
    long long _retCode;
    NSString *_retMsg;
    NSArray *_historyList;
    unsigned long long _chooseFlag;
    unsigned long long _loadMoreDirection;
    unsigned long long _svrFromTimestamp;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int svrRetTrynum; // @synthesize svrRetTrynum=_svrRetTrynum;
@property(nonatomic) unsigned long long svrFromTimestamp; // @synthesize svrFromTimestamp=_svrFromTimestamp;
@property(nonatomic) _Bool bIsAllDataLoadEnd; // @synthesize bIsAllDataLoadEnd=_bIsAllDataLoadEnd;
@property(nonatomic) unsigned long long loadMoreDirection; // @synthesize loadMoreDirection=_loadMoreDirection;
@property(nonatomic) unsigned long long chooseFlag; // @synthesize chooseFlag=_chooseFlag;
@property(retain, nonatomic) NSArray *historyList; // @synthesize historyList=_historyList;
@property(retain, nonatomic) NSString *retMsg; // @synthesize retMsg=_retMsg;
@property(nonatomic) long long retCode; // @synthesize retCode=_retCode;

@end

