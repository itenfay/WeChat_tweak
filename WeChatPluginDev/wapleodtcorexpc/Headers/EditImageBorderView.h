//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface EditImageBorderView
{
    double _viewScale;
    unsigned long long _editImageUIStyle;
}

@property(nonatomic) unsigned long long editImageUIStyle; // @synthesize editImageUIStyle=_editImageUIStyle;
@property(nonatomic) double _viewScale; // @synthesize _viewScale;
- (void)resizeFrame:(struct CGRect)arg1 withScale:(double)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withScale:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

