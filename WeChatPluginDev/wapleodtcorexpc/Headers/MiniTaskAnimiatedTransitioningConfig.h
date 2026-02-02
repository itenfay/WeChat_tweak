//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MinimizeTaskData, UIImage;
@protocol MiniTaskTransitionAnimationDelegate;

@interface MiniTaskAnimiatedTransitioningConfig : NSObject
{
    _Bool _isFlutterScenes;
    UIImage *_snapshotImage;
    UIImage *_iconImage;
    UIImage *_frontImage;
    MinimizeTaskData *_taskData;
    id <MiniTaskTransitionAnimationDelegate> _animationDelegate;
    double _fadeAnimateDuration;
    struct CGRect _snapshotFrameToSuperView;
    struct CGRect _snapshotFrameToWindow;
}

+ (struct CGRect)cellRectToSnapshotRect:(struct CGRect)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isFlutterScenes; // @synthesize isFlutterScenes=_isFlutterScenes;
@property(nonatomic) double fadeAnimateDuration; // @synthesize fadeAnimateDuration=_fadeAnimateDuration;
@property(nonatomic) __weak id <MiniTaskTransitionAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
@property(nonatomic) MinimizeTaskData *taskData; // @synthesize taskData=_taskData;
@property(nonatomic) struct CGRect snapshotFrameToWindow; // @synthesize snapshotFrameToWindow=_snapshotFrameToWindow;
@property(nonatomic) struct CGRect snapshotFrameToSuperView; // @synthesize snapshotFrameToSuperView=_snapshotFrameToSuperView;
@property(retain, nonatomic) UIImage *frontImage; // @synthesize frontImage=_frontImage;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIImage *snapshotImage; // @synthesize snapshotImage=_snapshotImage;

@end

