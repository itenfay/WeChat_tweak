//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdQuicklyAddBrandInfo : NSObject
{
    _Bool _brandDirectJump;
    NSString *_brandUsername;
    NSString *_brandName;
    NSString *_brandHeadImageUrl;
    NSString *_brandDesc;
    NSString *_compatibleJumpUrl;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool brandDirectJump; // @synthesize brandDirectJump=_brandDirectJump;
@property(retain, nonatomic) NSString *compatibleJumpUrl; // @synthesize compatibleJumpUrl=_compatibleJumpUrl;
@property(retain, nonatomic) NSString *brandDesc; // @synthesize brandDesc=_brandDesc;
@property(retain, nonatomic) NSString *brandHeadImageUrl; // @synthesize brandHeadImageUrl=_brandHeadImageUrl;
@property(retain, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
@property(retain, nonatomic) NSString *brandUsername; // @synthesize brandUsername=_brandUsername;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

