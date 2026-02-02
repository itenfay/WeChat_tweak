//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, WASubscriptionMessageDataReporter, WASubscriptionMessagePageSheet;
@protocol WASubscriptionMessageLogicDataSource, WASubscriptionMessageLogicDelegate;

@interface WASubscriptionMessageLogic
{
    unsigned int _appType;
    id <WASubscriptionMessageLogicDelegate> _delegate;
    id <WASubscriptionMessageLogicDataSource> _dataSource;
    NSArray *_templateIDArray;
    NSString *_username;
    NSString *_appid;
    WASubscriptionMessageDataReporter *_dataReporter;
    WASubscriptionMessagePageSheet *_pageSheet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WASubscriptionMessagePageSheet *pageSheet; // @synthesize pageSheet=_pageSheet;
@property(retain, nonatomic) WASubscriptionMessageDataReporter *dataReporter; // @synthesize dataReporter=_dataReporter;
@property(nonatomic) unsigned int appType; // @synthesize appType=_appType;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSArray *templateIDArray; // @synthesize templateIDArray=_templateIDArray;
@property(nonatomic) __weak id <WASubscriptionMessageLogicDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <WASubscriptionMessageLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)authDecline:(id)arg1;
- (void)authorizeReject:(id)arg1;
- (void)authorizeAccept:(id)arg1;
- (void)pageSheetWillClose:(id)arg1;
- (void)pageSheetWillShow:(id)arg1;
- (void)callWillDismissDelegate;
- (void)callWillShowDelegate;
- (void)callFinishedDelegateWithResult:(id)arg1 success:(_Bool)arg2 cancel:(_Bool)arg3 errorMessage:(id)arg4 errorCode:(long long)arg5;
- (id)containerViewController;
- (CDUnknownBlockType)requestSubscribeFailHandler;
- (CDUnknownBlockType)requestSubscribeSuccessHandler;
- (CDUnknownBlockType)requestListByIDFailHandler;
- (CDUnknownBlockType)requestListByIDSucceessHandler;
- (void)sendSubscribeRequestWithViewModel:(id)arg1;
- (void)sendListRequest;
- (void)start;
- (id)initWithTemplateIDArray:(id)arg1 username:(id)arg2 appid:(id)arg3 appType:(unsigned int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

