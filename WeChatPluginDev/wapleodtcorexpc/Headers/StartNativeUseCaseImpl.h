//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LiteAppDynamicModuleCallback, NSDictionary, UIViewController;

@interface StartNativeUseCaseImpl
{
    LiteAppDynamicModuleCallback *_callBack;
    UIViewController *_vc;
    NSDictionary *_option;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *option; // @synthesize option=_option;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) LiteAppDynamicModuleCallback *callBack; // @synthesize callBack=_callBack;
- (void)call:(id)arg1;
- (void)startUseCase:(id)arg1 currentVc:(id)arg2 resultCallback:(id)arg3;
- (void)dealloc;
- (id)init;

@end

