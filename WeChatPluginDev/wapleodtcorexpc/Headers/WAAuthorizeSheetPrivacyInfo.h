//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAAuthorizeSheetPrivacyInfo : NSObject
{
    NSString *_title;
    NSString *_word;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *word; // @synthesize word=_word;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 word:(id)arg2;

@end

