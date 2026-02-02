//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, WASubscriptionMessageRequestListByIDCgi, WASubscriptionMessageRequestSubscribeCgi;
@protocol BrandTemplateMsgAuthLogicDelegate;

@interface BrandTemplateMsgAuthLogic
{
    _Bool _cancel;
    unsigned int _popupScene;
    id <BrandTemplateMsgAuthLogicDelegate> _delegate;
    NSString *_subscriptionUrl;
    NSString *_msgContentByUrlEncoded;
    NSArray *_templateIDArray;
    NSString *_username;
    NSString *_appid;
    NSString *_sessionId;
    NSString *_extInfo;
    WASubscriptionMessageRequestListByIDCgi *_requestListByIDCgi;
    WASubscriptionMessageRequestSubscribeCgi *_requestSubscribeCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WASubscriptionMessageRequestSubscribeCgi *requestSubscribeCgi; // @synthesize requestSubscribeCgi=_requestSubscribeCgi;
@property(retain, nonatomic) WASubscriptionMessageRequestListByIDCgi *requestListByIDCgi; // @synthesize requestListByIDCgi=_requestListByIDCgi;
@property(copy, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int popupScene; // @synthesize popupScene=_popupScene;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSArray *templateIDArray; // @synthesize templateIDArray=_templateIDArray;
@property(copy, nonatomic) NSString *msgContentByUrlEncoded; // @synthesize msgContentByUrlEncoded=_msgContentByUrlEncoded;
@property(copy, nonatomic) NSString *subscriptionUrl; // @synthesize subscriptionUrl=_subscriptionUrl;
@property(nonatomic) _Bool cancel; // @synthesize cancel=_cancel;
@property(nonatomic) __weak id <BrandTemplateMsgAuthLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)jsonFormatResult:(id)arg1;
- (void)pageSheet:(id)arg1 needToPushViewController:(id)arg2;
- (void)authDecline:(id)arg1;
- (void)authorizeReject:(id)arg1;
- (void)authorizeAccept:(id)arg1;
- (void)pageSheetWillClose:(id)arg1;
- (void)pageSheetWillShow:(id)arg1;
- (void)callFinishedDelegateWithResult:(id)arg1 extInfo:(id)arg2 success:(_Bool)arg3 errorCode:(long long)arg4 errorMessage:(id)arg5;
- (void)callFinishedDelegateWithResult:(id)arg1 extInfo:(id)arg2 success:(_Bool)arg3 errorKey:(unsigned long long)arg4;
- (void)subscribeSuccessWithResult:(id)arg1 cacheMaxAge:(unsigned int)arg2;
- (id)containerViewController;
- (CDUnknownBlockType)requestSubscribeFailHandler;
- (CDUnknownBlockType)requestSubscribeSuccessHandler;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (CDUnknownBlockType)requestListByIDFailHandler;
- (CDUnknownBlockType)requestListByIDSucceessHandler;
- (void)sendSubscribeRequestWithViewModel:(id)arg1;
- (void)startTemplateIDArray;
- (void)startSubscriptionUrl;
- (id)initWithTemplateIDArray:(id)arg1 username:(id)arg2 appid:(id)arg3 popupScene:(unsigned int)arg4 sessionId:(id)arg5 extInfo:(id)arg6;
- (id)initWithSubscriptionUrl:(id)arg1 username:(id)arg2 msgContent:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

