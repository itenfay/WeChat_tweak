//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSString;

@interface WCAdTypewriterLabel
{
    MMTimer *_typewriterTimer;
    NSString *_typewriterText;
    double _animationInterval;
}

- (void).cxx_destruct;
@property(nonatomic) double animationInterval; // @synthesize animationInterval=_animationInterval;
@property(retain, nonatomic) NSString *typewriterText; // @synthesize typewriterText=_typewriterText;
@property(retain, nonatomic) MMTimer *typewriterTimer; // @synthesize typewriterTimer=_typewriterTimer;
- (void)dealloc;
- (void)stopTimer;
- (void)startTimer;
- (void)typewriterPrint;
- (void)setTypewriterText:(id)arg1 animationDuration:(double)arg2;

@end

