//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMRsaEncryptResult : NSObject
{
    int _ret;
    NSString *_base64Str;
}

+ (id)RsaEncryptResultWithBase64Str:(id)arg1 ret:(int)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) int ret; // @synthesize ret=_ret;
@property(readonly, nonatomic) NSString *base64Str; // @synthesize base64Str=_base64Str;
- (id)description;
- (id)initWithBase64Str:(id)arg1 ret:(int)arg2;

@end

