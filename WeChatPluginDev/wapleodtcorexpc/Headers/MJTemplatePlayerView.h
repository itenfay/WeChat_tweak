//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MJTemplateCompositeTask, UIImageView;

@interface MJTemplatePlayerView : UIView
{
    _Bool _needsResumePlay;
    MJTemplateCompositeTask *_compositeTask;
    UIImageView *_backgroundImageView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needsResumePlay; // @synthesize needsResumePlay=_needsResumePlay;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) MJTemplateCompositeTask *compositeTask; // @synthesize compositeTask=_compositeTask;
- (void)layoutSubviews;
- (struct CGRect)suitableBackgroundImageViewFrame;
- (void)initBackgroundImageView;
- (void)initView;
- (void)stopVideo;
- (void)playVideo;
- (id)initWithFrame:(struct CGRect)arg1 compositeTask:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;

@end

