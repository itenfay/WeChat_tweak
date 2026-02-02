//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class RingToneVideoFeedViewController;

@interface RingToneVideoFeedLayout
{
    RingToneVideoFeedViewController *_currentVC;
    unsigned long long _autoPlaySection;
    double _barHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double barHeight; // @synthesize barHeight=_barHeight;
@property(nonatomic) unsigned long long autoPlaySection; // @synthesize autoPlaySection=_autoPlaySection;
@property(nonatomic) __weak RingToneVideoFeedViewController *currentVC; // @synthesize currentVC=_currentVC;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (double)scrollForDirection:(unsigned long long)arg1 section:(long long)arg2 needPadding:(_Bool)arg3;

@end

