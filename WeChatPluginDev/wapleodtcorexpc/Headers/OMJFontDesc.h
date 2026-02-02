//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJFontDesc : NSObject
{
    NSString *_fontName;
    double _fontSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(readonly, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (id)calcFontNameWithFamilyName:(id)arg1 fontWeight:(unsigned long long)arg2;
- (id)initWithFamilyName:(id)arg1 fontWeight:(unsigned long long)arg2 fontSize:(double)arg3;
- (id)initWithFontName:(id)arg1 fontSize:(double)arg2;

@end

