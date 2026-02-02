//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface TXCSharpFilter
{
    double _sharpness;
}

@property(nonatomic) double sharpness; // @synthesize sharpness=_sharpness;
- (void)setUniformsForFilter:(id)arg1 fboSize:(struct CGSize)arg2;
- (id)fragmentShaderString;
- (id)vertexShaderString;

@end

