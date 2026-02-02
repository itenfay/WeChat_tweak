//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, SearchVoiceInputViewController, UIViewController;
@protocol WSInputProviderDelegate, WSWebViewPluginableProtocol;

@interface WCWebSearchInputProvider : NSObject
{
    unsigned int _searchScene;
    id <WSInputProviderDelegate> _delegate;
    NSString *_searchSessionId;
    id <WSWebViewPluginableProtocol> _webViewOwner;
    unsigned long long _buttonType;
    unsigned long long _scene;
    SearchVoiceInputViewController *_searchVoiceInputViewController;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) SearchVoiceInputViewController *searchVoiceInputViewController; // @synthesize searchVoiceInputViewController=_searchVoiceInputViewController;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long buttonType; // @synthesize buttonType=_buttonType;
@property(nonatomic) __weak id <WSWebViewPluginableProtocol> webViewOwner; // @synthesize webViewOwner=_webViewOwner;
@property(nonatomic) unsigned int searchScene; // @synthesize searchScene=_searchScene;
@property(copy, nonatomic) NSString *searchSessionId; // @synthesize searchSessionId=_searchSessionId;
@property(nonatomic) __weak id <WSInputProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)streamVoiceInputBoardDidHide;
- (void)onVoiceInputEndWithText:(id)arg1;
- (void)animateShowVoiceInputController;
- (void)tryShowStreamVoiceInputViewController;
- (void)startVoiceInputProcess;
- (void)onClickButton;
- (id)genNormalInputButton;
- (id)genNavInputButton;
- (id)extraInputButtonImageName;
- (_Bool)initiativeImageSearchEnabled;
- (id)initWithViewController:(id)arg1 scene:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

