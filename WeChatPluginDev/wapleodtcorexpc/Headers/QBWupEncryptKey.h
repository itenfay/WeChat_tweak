//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QBWupEncryptKey : NSObject
{
    NSString *_aesKey;
    NSString *_qbKey;
    NSString *_token;
}

@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *qbKey; // @synthesize qbKey=_qbKey;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
- (void).cxx_destruct;
- (id)init;

@end

