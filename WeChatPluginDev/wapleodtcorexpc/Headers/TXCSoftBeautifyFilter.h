//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TXCSharpFilter;

@interface TXCSoftBeautifyFilter
{
    TXCSharpFilter *_sharpFilter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TXCSharpFilter *sharpFilter; // @synthesize sharpFilter=_sharpFilter;
- (id)processVideoFrame:(id)arg1;
- (void)setUniformsForFilter:(id)arg1 fboSize:(struct CGSize)arg2;
- (unsigned long long)beautyStyle;
- (id)fragmentShaderString;

@end

