//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface EmotionProgressView : UIView
{
    double _progress;
    UIView *_foregroundView;
    UIView *_backgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)updateSizeIfNeeded;
- (void)setPrsColor:(id)arg1;
- (void)setBackColor:(id)arg1;
- (void)setupViews;
- (void)setupFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

