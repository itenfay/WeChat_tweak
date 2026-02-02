//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayPaidDetailLeadTailCmdData : NSObject
{
    NSString *_busi_param;
    NSString *_trans_id;
    NSString *_mmpay_mkt_sign;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *mmpay_mkt_sign; // @synthesize mmpay_mkt_sign=_mmpay_mkt_sign;
@property(retain, nonatomic) NSString *trans_id; // @synthesize trans_id=_trans_id;
@property(retain, nonatomic) NSString *busi_param; // @synthesize busi_param=_busi_param;

@end

