//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface WCMicroMerchantFoldInfo : NSObject
{
    NSDate *_generatedTime;
    NSArray *_unfoldedUsernames;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *unfoldedUsernames; // @synthesize unfoldedUsernames=_unfoldedUsernames;
@property(retain, nonatomic) NSDate *generatedTime; // @synthesize generatedTime=_generatedTime;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithUnfoldUsernames:(id)arg1 generatedTime:(id)arg2;

@end

