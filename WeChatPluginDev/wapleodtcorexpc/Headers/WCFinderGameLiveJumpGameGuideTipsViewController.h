//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton;

@interface WCFinderGameLiveJumpGameGuideTipsViewController
{
    _Bool _checked;
    _Bool _enableGuide;
    MMUIButton *_checkBox;
    CDUnknownBlockType _switchHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType switchHandler; // @synthesize switchHandler=_switchHandler;
@property(retain, nonatomic) MMUIButton *checkBox; // @synthesize checkBox=_checkBox;
@property(nonatomic) _Bool enableGuide; // @synthesize enableGuide=_enableGuide;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
- (void)onCheckBoxClick:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 handler:(CDUnknownBlockType)arg4 btnTitle:(id)arg5 handler:(CDUnknownBlockType)arg6 switchHandler:(CDUnknownBlockType)arg7;

@end

