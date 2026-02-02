//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdWeAppInfo : NSObject
{
    _Bool _relievedBuyFlag;
    _Bool _flagshipFlag;
    unsigned int version;
    int miniProgramType;
    NSString *appUserName;
    NSString *relativePagePath;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool flagshipFlag; // @synthesize flagshipFlag=_flagshipFlag;
@property(nonatomic) _Bool relievedBuyFlag; // @synthesize relievedBuyFlag=_relievedBuyFlag;
@property(nonatomic) int miniProgramType; // @synthesize miniProgramType;
@property(nonatomic) unsigned int version; // @synthesize version;
@property(retain, nonatomic) NSString *relativePagePath; // @synthesize relativePagePath;
@property(retain, nonatomic) NSString *appUserName; // @synthesize appUserName;
- (_Bool)isValidForJump;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

