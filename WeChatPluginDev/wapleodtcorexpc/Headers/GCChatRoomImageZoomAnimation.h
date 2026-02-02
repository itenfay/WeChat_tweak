//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;
@protocol GCChatRoomImageZoomAnimationDelegate;

@interface GCChatRoomImageZoomAnimation : NSObject
{
    UIImage *_image;
    UIImage *_blurImage;
    long long _operation;
    NSString *_sourcePosIdentifier;
    id <GCChatRoomImageZoomAnimationDelegate> _zoomAnimationDelegate;
    struct CGRect _imgViewFrame;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GCChatRoomImageZoomAnimationDelegate> zoomAnimationDelegate; // @synthesize zoomAnimationDelegate=_zoomAnimationDelegate;
@property(retain, nonatomic) NSString *sourcePosIdentifier; // @synthesize sourcePosIdentifier=_sourcePosIdentifier;
@property(nonatomic) long long operation; // @synthesize operation=_operation;
@property(nonatomic) struct CGRect imgViewFrame; // @synthesize imgViewFrame=_imgViewFrame;
@property(retain, nonatomic) UIImage *blurImage; // @synthesize blurImage=_blurImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)animateTransition:(id)arg1;
- (double)getMaxScaleFromSrcFrame:(struct CGRect)arg1 targetFrame:(struct CGRect)arg2;
- (id)getImgCopy:(id)arg1 frame:(struct CGRect)arg2 containerView:(id)arg3;
- (_Bool)isPushInAnimation;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

