//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPaySendBindCardAwardCgiResponse : NSObject
{
    long long _retcode;
    NSString *_retmsg;
    long long _result_code;
    NSString *_result_msg;
    NSString *_alert_wording;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *alert_wording; // @synthesize alert_wording=_alert_wording;
@property(retain, nonatomic) NSString *result_msg; // @synthesize result_msg=_result_msg;
@property(nonatomic) long long result_code; // @synthesize result_code=_result_code;
@property(retain, nonatomic) NSString *retmsg; // @synthesize retmsg=_retmsg;
@property(nonatomic) long long retcode; // @synthesize retcode=_retcode;
- (void)genFromDic:(id)arg1;

@end

