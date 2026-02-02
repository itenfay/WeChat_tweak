//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MMEasterEggKeyWord : NSObject
{
    NSString *m_nsKeyWord;
    NSString *m_nsLanguage;
    NSArray *m_arrSupportLanguages;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *m_arrSupportLanguages; // @synthesize m_arrSupportLanguages;
@property(retain, nonatomic) NSString *m_nsLanguage; // @synthesize m_nsLanguage;
@property(retain, nonatomic) NSString *m_nsKeyWord; // @synthesize m_nsKeyWord;

@end

