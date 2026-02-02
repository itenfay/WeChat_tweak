//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCFinderLiveFullScreenGestureDelegate;

@interface WCFinderLiveFullScreenGestureRecognizer
{
    id <WCFinderLiveFullScreenGestureDelegate> _fullScreenGestureDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderLiveFullScreenGestureDelegate> fullScreenGestureDelegate; // @synthesize fullScreenGestureDelegate=_fullScreenGestureDelegate;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)cancelPressEvents;
- (void)LongPressEvents;
- (id)m_delegate;

@end

