//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface CountryFormatConfig
{
    NSString *nsCountryCode;
    NSString *nsISOCode;
    NSMutableArray *arrayFormats;
    unsigned int uiMinLength;
    unsigned int uiMaxLength;
    _Bool bHasLeading;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bHasLeading; // @synthesize bHasLeading;
@property(nonatomic) unsigned int uiMaxLength; // @synthesize uiMaxLength;
@property(nonatomic) unsigned int uiMinLength; // @synthesize uiMinLength;
@property(retain, nonatomic) NSMutableArray *arrayFormats; // @synthesize arrayFormats;
@property(retain, nonatomic) NSString *nsISOCode; // @synthesize nsISOCode;
@property(retain, nonatomic) NSString *nsCountryCode; // @synthesize nsCountryCode;
- (id)init;

@end

