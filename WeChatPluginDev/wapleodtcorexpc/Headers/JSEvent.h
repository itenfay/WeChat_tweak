//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class JSEventInvokeContext, NSMutableDictionary, NSString;
@protocol JSEventHandler;

@interface JSEvent : NSObject
{
    NSMutableDictionary *m_params;
    id <JSEventHandler> m_delegate;
    NSString *m_callbackID;
    NSString *m_funcName;
    CDUnknownBlockType m_kvReportBlock;
    CDUnknownBlockType _eventCompleteBlock;
    JSEventInvokeContext *_eventInvokeContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JSEventInvokeContext *eventInvokeContext; // @synthesize eventInvokeContext=_eventInvokeContext;
@property(copy, nonatomic) CDUnknownBlockType eventCompleteBlock; // @synthesize eventCompleteBlock=_eventCompleteBlock;
@property(copy, nonatomic) CDUnknownBlockType kvReportBlock; // @synthesize kvReportBlock=m_kvReportBlock;
@property(nonatomic) __weak id <JSEventHandler> m_delegate; // @synthesize m_delegate;
- (void)endWithError:(id)arg1 andDescription:(id)arg2 extraParams:(id)arg3;
- (void)endWithError:(id)arg1 andDescription:(id)arg2;
- (void)endWithError:(id)arg1;
- (void)endWithResutl:(id)arg1;
- (id)webviewController;
- (id)getCallbackID;
- (id)getParams;
- (id)getFuncName;
- (void)setFuncName:(id)arg1;
- (void)setCallbackID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 parameters:(id)arg2;

@end

