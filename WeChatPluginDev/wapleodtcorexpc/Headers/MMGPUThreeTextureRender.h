//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMGPUThreeTextureRender
{
    int filterThirdTextureCoordinateAttribute;
    int filterInputTextureUniform3;
}

- (int)renderToTextue:(int)arg1 inputSecondTexture:(int)arg2 inputThirdTexture:(int)arg3 inputRes:(struct CGSize)arg4;
- (void)initializeAttributes;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderString:(id)arg2;
- (id)initWithFragmentShaderFromString:(id)arg1;

@end

