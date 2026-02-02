//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WASubscriptionMessagePageSheetViewModel;

@interface WASubscriptionMessageRequestSubscribeCGIModel : NSObject
{
    unsigned int _popupScene;
    WASubscriptionMessagePageSheetViewModel *_viewModel;
    NSString *_username;
    unsigned long long _scene;
    NSString *_appid;
    NSString *_sessionId;
    NSString *_extInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int popupScene; // @synthesize popupScene=_popupScene;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) WASubscriptionMessagePageSheetViewModel *viewModel; // @synthesize viewModel=_viewModel;

@end

