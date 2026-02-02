//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayVerifyCreTailInfo : NSObject
{
    long long _is_can_verify_tail;
    NSString *_verify_tail_wording;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *verify_tail_wording; // @synthesize verify_tail_wording=_verify_tail_wording;
@property(nonatomic) long long is_can_verify_tail; // @synthesize is_can_verify_tail=_is_can_verify_tail;
- (void)genFromDic:(id)arg1;

@end

