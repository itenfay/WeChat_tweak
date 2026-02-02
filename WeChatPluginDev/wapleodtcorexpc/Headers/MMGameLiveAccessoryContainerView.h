//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMGameLiveAccessoryContainerView
{
    unsigned long long _currControlState;
    struct CGSize _selfSize;
}

@property(nonatomic) unsigned long long currControlState; // @synthesize currControlState=_currControlState;
@property(nonatomic) struct CGSize selfSize; // @synthesize selfSize=_selfSize;
- (void)didMoveToWindow;
- (void)reportForControlStateChanged;
- (double)scaledPIPMaxWidthPercent;
- (_Bool)checkControlStateChanged;
- (void)delayCheckControlStateChanged;
- (void)checkSelfSizeChanged;
- (void)layoutSubviews;

@end

