//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

@interface WCFinderNavTabTitle : NSObject
{
    NSString *_text;
    NSAttributedString *_richText;
}

+ (id)defaultFont;
+ (id)titleWithIcon:(id)arg1 text:(id)arg2;
+ (id)titleWithView:(id)arg1;
+ (id)titleWithText:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSAttributedString *richText; // @synthesize richText=_richText;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;

@end

