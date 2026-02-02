//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface AppleIDAuthorizationWrap : NSObject
{
    _Bool _isAppleIDBound;
    NSString *_username;
    NSString *_password;
    NSString *_appleRegisterTicket;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appleRegisterTicket; // @synthesize appleRegisterTicket=_appleRegisterTicket;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) _Bool isAppleIDBound; // @synthesize isAppleIDBound=_isAppleIDBound;
- (_Bool)isValid;
- (id)description;

@end

