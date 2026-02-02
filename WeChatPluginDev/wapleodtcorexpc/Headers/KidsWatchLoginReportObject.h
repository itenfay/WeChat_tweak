//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface KidsWatchLoginReportObject : NSObject
{
    unsigned long long _loginType;
    NSString *_qrCode;
    unsigned long long _kidsCount;
    unsigned long long _accountType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long accountType; // @synthesize accountType=_accountType;
@property(nonatomic) unsigned long long kidsCount; // @synthesize kidsCount=_kidsCount;
@property(retain, nonatomic) NSString *qrCode; // @synthesize qrCode=_qrCode;
@property(nonatomic) unsigned long long loginType; // @synthesize loginType=_loginType;
- (void)reportAction:(unsigned long long)arg1 withErrorCode:(int)arg2;

@end

