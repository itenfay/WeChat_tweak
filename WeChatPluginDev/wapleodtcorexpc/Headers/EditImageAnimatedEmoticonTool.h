//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView;

@interface EditImageAnimatedEmoticonTool
{
    UIImageView *m_imageView;
    NSString *m_emoticonMd5;
    double _imageScale;
}

- (void).cxx_destruct;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
@property(readonly, nonatomic) NSString *emoticonMd5; // @synthesize emoticonMd5=m_emoticonMd5;
- (id)accessibilityLabel;
- (double)widgetHeight;
- (double)widgetWidth;
- (_Bool)startEditingText;
- (id)exportAnimatedLayerWithTimingObject:(id)arg1;
- (void)resetToFirstFrame;
- (void)didSelectEmoticonMd5:(id)arg1;

@end

