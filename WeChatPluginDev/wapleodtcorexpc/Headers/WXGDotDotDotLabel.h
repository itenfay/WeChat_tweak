//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UILabel.h>

@class MMTimer, NSArray;

@interface WXGDotDotDotLabel : UILabel
{
    MMTimer *m_animationTimer;
    unsigned long long m_imageIndex;
    NSArray *_wordList;
    double _duration;
}

- (void).cxx_destruct;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSArray *wordList; // @synthesize wordList=_wordList;
- (void)_startAnimations;
- (void)animateforDuration:(double)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

