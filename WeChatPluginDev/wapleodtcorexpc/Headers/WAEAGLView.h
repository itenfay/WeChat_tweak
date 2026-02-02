//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView;
@protocol WAEAGLViewGestureDelegate;

@interface WAEAGLView
{
    int _interactionMode;
    id <WAEAGLViewGestureDelegate> _gestureDelegate;
    UIImageView *_snapshotImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *snapshotImageView; // @synthesize snapshotImageView=_snapshotImageView;
@property(nonatomic) __weak id <WAEAGLViewGestureDelegate> gestureDelegate; // @synthesize gestureDelegate=_gestureDelegate;
@property(nonatomic) int interactionMode; // @synthesize interactionMode=_interactionMode;
- (void)snapshotEnd;
- (void)snapshotBegin;
- (id)getImage;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

