//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface PhoneNumberFormatInfo
{
    NSString *leadingDigitsRegex;
    NSString *pattern;
    NSString *formatRegex;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *formatRegex; // @synthesize formatRegex;
@property(retain, nonatomic) NSString *pattern; // @synthesize pattern;
@property(retain, nonatomic) NSString *leadingDigitsRegex; // @synthesize leadingDigitsRegex;
- (id)init;

@end

