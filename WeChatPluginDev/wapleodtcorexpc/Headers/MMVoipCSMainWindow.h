//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView;
@protocol MMVoipCSMainWindowDelegate;

@interface MMVoipCSMainWindow
{
    _Bool _m_hasStartQuitAnimation;
    id <MMVoipCSMainWindowDelegate> m_mainWindowDelegate;
    UIImageView *m_blurView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_hasStartQuitAnimation; // @synthesize m_hasStartQuitAnimation=_m_hasStartQuitAnimation;
@property(retain, nonatomic) UIImageView *m_blurView; // @synthesize m_blurView;
@property(nonatomic) __weak id <MMVoipCSMainWindowDelegate> m_mainWindowDelegate; // @synthesize m_mainWindowDelegate;
- (void)quitWithAnimationDidStop;
- (void)collapseWithAnimationDidStop;
- (_Bool)hasStartQuitAnimation;
- (void)quitWithAnimation;
- (void)extendFromCollapseWithAnimation;
- (void)collapseWithAnimation;
- (void)extendWithAnimation;
- (void)dealloc;
- (id)init;

@end

