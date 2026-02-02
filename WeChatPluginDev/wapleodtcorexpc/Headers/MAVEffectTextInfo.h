//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MAVEffectTextInfo : NSObject
{
    _Bool _italic;
    _Bool _bold;
    float _fontSize;
    NSString *_text;
    NSString *_fontFamily;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bold; // @synthesize bold=_bold;
@property(nonatomic) _Bool italic; // @synthesize italic=_italic;
@property(retain, nonatomic) NSString *fontFamily; // @synthesize fontFamily=_fontFamily;
@property(nonatomic) float fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (id)initWithText:(id)arg1 fontSize:(float)arg2 fontFamily:(id)arg3 italic:(_Bool)arg4 bold:(_Bool)arg5;
- (id)initWithText:(id)arg1;

@end

