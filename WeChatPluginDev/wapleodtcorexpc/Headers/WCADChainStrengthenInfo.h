//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCADChainStrengthenInfo : NSObject
{
    int wordingType;
    NSString *directWording;
    NSString *replaceWording;
    NSString *wordingLink;
    NSMutableArray *arrUserName;
    NSString *wordingComplexString;
    unsigned int wordingComplexExchangeValue;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int wordingComplexExchangeValue; // @synthesize wordingComplexExchangeValue;
@property(retain, nonatomic) NSString *wordingComplexString; // @synthesize wordingComplexString;
@property(retain, nonatomic) NSMutableArray *arrUserName; // @synthesize arrUserName;
@property(retain, nonatomic) NSString *wordingLink; // @synthesize wordingLink;
@property(retain, nonatomic) NSString *replaceWording; // @synthesize replaceWording;
@property(retain, nonatomic) NSString *directWording; // @synthesize directWording;
@property(nonatomic) int wordingType; // @synthesize wordingType;
- (_Bool)isComplexWordingValid;
- (_Bool)isNormalWordingValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

