//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAInputEncrypter : NSObject
{
    NSString *_certPem;
    NSString *_encryptExtra;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *encryptExtra; // @synthesize encryptExtra=_encryptExtra;
@property(retain, nonatomic) NSString *certPem; // @synthesize certPem=_certPem;
- (id)encryptPlainString:(id)arg1 encryptError:(id *)arg2;
- (void)sendError:(id *)arg1 err:(id)arg2;

@end

