//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ForwardMessageLogicController, NSMutableArray, NSMutableDictionary, NSString, WAShareAppMessageCommonParamsModel, WAShareAppMessageContextModel, WAShareAppMessageForwardLogicControllerComponentModel;
@protocol WAShareAppMessageForwardLogicControllerComponentDelegate;

@interface WAShareAppMessageForwardLogicControllerComponent : NSObject
{
    unsigned int _currentEventID;
    id <WAShareAppMessageForwardLogicControllerComponentDelegate> _delegate;
    WAShareAppMessageContextModel *_shareContextModel;
    WAShareAppMessageCommonParamsModel *_paramsModel;
    WAShareAppMessageForwardLogicControllerComponentModel *_componentModel;
    ForwardMessageLogicController *_forwardLogic;
    NSMutableArray *_reportArray;
    NSMutableDictionary *_shareKeys;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int currentEventID; // @synthesize currentEventID=_currentEventID;
@property(retain, nonatomic) NSMutableDictionary *shareKeys; // @synthesize shareKeys=_shareKeys;
@property(retain, nonatomic) NSMutableArray *reportArray; // @synthesize reportArray=_reportArray;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(retain, nonatomic) WAShareAppMessageForwardLogicControllerComponentModel *componentModel; // @synthesize componentModel=_componentModel;
@property(retain, nonatomic) WAShareAppMessageCommonParamsModel *paramsModel; // @synthesize paramsModel=_paramsModel;
@property(retain, nonatomic) WAShareAppMessageContextModel *shareContextModel; // @synthesize shareContextModel=_shareContextModel;
@property(nonatomic) __weak id <WAShareAppMessageForwardLogicControllerComponentDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnForwardWeAppMessageSend:(id)arg1 appMsgItem:(id)arg2;
- (void)OnForwardMessageSelectSession:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)addReportShareParamWithContacts:(id)arg1;
- (void)addKey:(id)arg1 val:(id)arg2 toNodes:(id)arg3;
- (void)sendGetShareInfoWithRequest:(id)arg1;
- (void)getShareInfoWithContactList:(id)arg1;
- (id)initWithShareContextModel:(id)arg1 paramsModel:(id)arg2 componentModel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

