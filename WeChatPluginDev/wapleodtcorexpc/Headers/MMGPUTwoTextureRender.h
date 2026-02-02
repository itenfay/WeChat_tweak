//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMGPUTwoTextureRender
{
    int filterSecondTextureCoordinateAttribute;
    int filterInputTextureUniform2;
}

- (int)renderToTextue:(int)arg1 inputSecondTexture:(int)arg2 inputRes:(struct CGSize)arg3;
- (void)initializeAttributes;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderString:(id)arg2;
- (id)initWithFragmentShaderFromString:(id)arg1;

@end

