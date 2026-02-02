//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIColor;

@interface YTRoundProgressView : UIView
{
    _Bool _annular;
    float _progress;
    UIColor *_progressTintColor;
    UIColor *_backgroundTintColor;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isAnnular) _Bool annular; // @synthesize annular=_annular;
@property(retain, nonatomic) UIColor *backgroundTintColor; // @synthesize backgroundTintColor=_backgroundTintColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)observableKeypaths;
- (void)unregisterFromKVO;
- (void)registerForKVO;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

