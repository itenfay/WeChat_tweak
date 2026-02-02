//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol MMLiveCustomTransitionDelegate;

@interface MMLiveCustomTransition : NSObject
{
    id <MMLiveCustomTransitionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMLiveCustomTransitionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getExtendTransitionContainerBackView;
- (struct CGRect)getMaximizeToRect;
- (struct CGRect)getMinimizeFromRect;
- (id)getSnapShotImage;
- (long long)getPreviousOrientation;
- (struct CGRect)getMinimizeLiveFrameInScreen;
- (struct CGRect)getMinimizeFrame;
- (long long)getCurrentTransitionState;

@end

