//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CADisplayLink;

@interface EmoticonCustomManageCollectionView
{
    unsigned long long _autoScrollType;
    double _speedPercent;
    CADisplayLink *_scrollDisplayLink;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CADisplayLink *scrollDisplayLink; // @synthesize scrollDisplayLink=_scrollDisplayLink;
@property(nonatomic) double speedPercent; // @synthesize speedPercent=_speedPercent;
@property(nonatomic) unsigned long long autoScrollType; // @synthesize autoScrollType=_autoScrollType;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
@property(readonly, nonatomic) _Bool canAutoScroll;
- (double)scrollSpeed;
- (void)autoScrollDown;
- (void)autoScrollUp;
- (void)cleanCurrentDisplayLink;

@end

