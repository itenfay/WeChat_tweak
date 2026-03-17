//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderJumpInfoBaseModel : NSObject
{
}

+ (_Bool)getJumpInfoBindHalfScreenLifeCycle:(int)arg1;
+ (_Bool)liteAppViewControllerIsHalf:(id)arg1;
- (void)jumpToLiteApp:(id)arg1 fromVC:(id)arg2 params:(id)arg3;
- (void)jumpToTemplateSearchPage:(id)arg1 fromVC:(id)arg2;
- (void)jumpToCutSameTemplateWithTemplateInfo:(id)arg1 params:(id)arg2 fromVC:(id)arg3;
- (void)jumpToMJTemplateCollectionPage:(id)arg1 fromVC:(id)arg2;
- (void)jumpToAppStoreWithAppStoreParams:(id)arg1 screenType:(int)arg2 fromVC:(id)arg3;
- (void)jumpToSchema:(id)arg1 fromVC:(id)arg2 params:(id)arg3;
- (void)jumpToNative:(id)arg1 fromVC:(id)arg2 params:(id)arg3;
- (void)jumpToH5:(id)arg1 fromVC:(id)arg2 params:(id)arg3;
- (id)miniAppAlertReportDict:(id)arg1;
- (void)jumpToMiniStore:(id)arg1 fromVC:(id)arg2 params:(id)arg3 productInfo:(id)arg4 widgetParameters:(id)arg5;
- (void)jumpToMiniApp:(id)arg1 fromVC:(id)arg2 params:(id)arg3;
- (void)jumpFromVC:(id)arg1 withInfo:(id)arg2 params:(id)arg3;
- (_Bool)dispatchStoreInfo:(id)arg1 bindFeedId:(id)arg2 fromVC:(id)arg3 liteAppVC:(id)arg4 params:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

