//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@interface OMJTextOverlayDesc
{
    NSString *_text;
    double _maximumWidth;
    NSDictionary *_textStyles;
    NSDictionary *_layerStyles;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *layerStyles; // @synthesize layerStyles=_layerStyles;
@property(retain, nonatomic) NSDictionary *textStyles; // @synthesize textStyles=_textStyles;
@property(nonatomic) double maximumWidth; // @synthesize maximumWidth=_maximumWidth;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (id)initWithText:(id)arg1 maximumWidth:(double)arg2 textStyles:(id)arg3 layerStyles:(id)arg4 spatialInfo:(id)arg5;

@end

