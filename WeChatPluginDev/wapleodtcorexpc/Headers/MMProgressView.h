//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface MMProgressView : UIView
{
    UIImageView *m_imgvBack;
    UIImageView *m_imgvFront;
    struct CGRect m_rectLayout;
    float m_fProgress;
    float m_fTopWidth;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *m_imgvFront; // @synthesize m_imgvFront;
@property(retain, nonatomic) UIImageView *m_imgvBack; // @synthesize m_imgvBack;
- (void)setProgressFontRect:(struct CGRect)arg1;
- (void)SetFrontImageByName:(id)arg1;
- (void)SetProgress:(float)arg1;
- (void)enableBrandProgress;
- (void)disableBrandProgress;
- (id)initBrandProgressWithFrame:(struct CGRect)arg1 layout:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1 BackImg:(id)arg2 FrontImg:(id)arg3 Layout:(struct CGRect)arg4 CapWidth:(float)arg5 CapHeight:(float)arg6;

@end

