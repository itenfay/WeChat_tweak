//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UINavigationController, WAAppOpenParameter, WAAppTaskExtInfo;

@interface WAAppTaskHotLaunchContext
{
    _Bool _redirectPage;
    _Bool _keepContextPage;
    NSString *_relativeURL;
    WAAppTaskExtInfo *_oldTaskExtInfo;
    WAAppOpenParameter *_openInfo;
    unsigned long long _oldTaskRunningState;
    UINavigationController *_presentingNavigationController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool keepContextPage; // @synthesize keepContextPage=_keepContextPage;
@property(nonatomic) __weak UINavigationController *presentingNavigationController; // @synthesize presentingNavigationController=_presentingNavigationController;
@property(nonatomic) unsigned long long oldTaskRunningState; // @synthesize oldTaskRunningState=_oldTaskRunningState;
@property(retain, nonatomic) WAAppOpenParameter *openInfo; // @synthesize openInfo=_openInfo;
@property(retain, nonatomic) WAAppTaskExtInfo *oldTaskExtInfo; // @synthesize oldTaskExtInfo=_oldTaskExtInfo;
@property(copy, nonatomic) NSString *relativeURL; // @synthesize relativeURL=_relativeURL;
@property(nonatomic) _Bool redirectPage; // @synthesize redirectPage=_redirectPage;

@end

