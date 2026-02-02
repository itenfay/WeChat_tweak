//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdCombineFollowBrandInfo : NSObject
{
    int _openType;
    NSString *_brandUsername;
    NSString *_brandDesc;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) int openType; // @synthesize openType=_openType;
@property(retain, nonatomic) NSString *brandDesc; // @synthesize brandDesc=_brandDesc;
@property(retain, nonatomic) NSString *brandUsername; // @synthesize brandUsername=_brandUsername;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

