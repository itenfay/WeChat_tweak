//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCAdGetCouponResultModel
{
    int _source;
    int _actionType;
    NSString *_appId;
    NSString *_stockId;
    long long _result;
    NSString *_msg;
}

- (void).cxx_destruct;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) int source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) long long result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *stockId; // @synthesize stockId=_stockId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;

@end

