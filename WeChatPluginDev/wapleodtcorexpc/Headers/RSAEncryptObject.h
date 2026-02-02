//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface RSAEncryptObject : NSObject
{
    NSString *_m_publicPemKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_publicPemKey; // @synthesize m_publicPemKey=_m_publicPemKey;
- (id)encryptWithSourceString:(id)arg1;
- (id)initWithRSAPublicPemKey:(id)arg1;

@end

