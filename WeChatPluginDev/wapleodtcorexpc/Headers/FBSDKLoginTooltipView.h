//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol FBSDKLoginTooltipViewDelegate;

@interface FBSDKLoginTooltipView
{
    _Bool _forceDisplay;
    id <FBSDKLoginTooltipViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic, getter=shouldForceDisplay) _Bool forceDisplay; // @synthesize forceDisplay=_forceDisplay;
@property(nonatomic) __weak id <FBSDKLoginTooltipViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)presentInView:(id)arg1 withArrowPosition:(struct CGPoint)arg2 direction:(unsigned long long)arg3;
- (id)init;

@end

