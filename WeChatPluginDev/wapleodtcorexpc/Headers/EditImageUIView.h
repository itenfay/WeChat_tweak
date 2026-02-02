//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView;

@interface EditImageUIView
{
    UIImageView *_imageView;
    int _toolType;
    unsigned int _fromEntrance;
    unsigned long long _editImageUIStyle;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int fromEntrance; // @synthesize fromEntrance=_fromEntrance;
@property(nonatomic) unsigned long long editImageUIStyle; // @synthesize editImageUIStyle=_editImageUIStyle;
@property(nonatomic) int _toolType; // @synthesize _toolType;
- (void)setFrame:(struct CGRect)arg1;
- (void)renderImageWithBlankView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withToolType:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

