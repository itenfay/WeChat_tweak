//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIImage;

@interface WCCanvasLongPressCoverView : UIView
{
    double _duration;
    long long _spriteType;
    long long _spriteSizeType;
    NSString *_spriteImageUrl;
    UIImage *_spriteImage;
    NSMutableArray *_spriteImages;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *spriteImages; // @synthesize spriteImages=_spriteImages;
@property(retain, nonatomic) UIImage *spriteImage; // @synthesize spriteImage=_spriteImage;
@property(retain, nonatomic) NSString *spriteImageUrl; // @synthesize spriteImageUrl=_spriteImageUrl;
@property(nonatomic) long long spriteSizeType; // @synthesize spriteSizeType=_spriteSizeType;
@property(nonatomic) long long spriteType; // @synthesize spriteType=_spriteType;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (id)fetchImageForUrl:(id)arg1;
- (struct CGRect)fetchCoreFrameForView:(id)arg1;
- (id)generateDelayArrayWithCapacity:(unsigned long long)arg1;
- (void)generateRandomCenterForView:(id)arg1;
- (unsigned int)generateRandomNumFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (unsigned int)generateSpriteCountForDensity;
- (void)beginSpriteAnimationForHorizontalMoving;
- (void)beginSpriteAnimationForSpin;
- (void)beginSpriteAnimationForVerticalMovingFromTop:(_Bool)arg1;
- (void)beginSpriteAnimation;
- (void)generateSpriteImages;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 duration:(double)arg2 spriteType:(long long)arg3 spriteSizeType:(long long)arg4 spriteImageUrl:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

