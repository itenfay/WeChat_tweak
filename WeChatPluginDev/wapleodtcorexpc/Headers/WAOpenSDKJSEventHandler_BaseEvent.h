//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WAOpenSDKJSEventHandlerContext;
@protocol WAOpenSDKJSEventHandlerDelegate;

@interface WAOpenSDKJSEventHandler_BaseEvent : NSObject
{
    NSString *_transitiveData;
    WAOpenSDKJSEventHandlerContext *_context;
    id <WAOpenSDKJSEventHandlerDelegate> _delegate;
    long long _resultType;
}

+ (id)getResultDic:(id)arg1 dic:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long resultType; // @synthesize resultType=_resultType;
@property(nonatomic) __weak id <WAOpenSDKJSEventHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAOpenSDKJSEventHandlerContext *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *transitiveData; // @synthesize transitiveData=_transitiveData;
- (void)sendQRMsg:(id)arg1 result:(id)arg2 qrState:(long long)arg3;
- (void)endWithResult:(id)arg1;
- (void)endWithMsg:(id)arg1 dic:(id)arg2;
- (void)endWithCancel:(id)arg1;
- (void)endWithCancel;
- (void)endWithErrMsg:(id)arg1 dic:(id)arg2;
- (void)endWithErrMsg:(id)arg1;
- (void)endWithSuccess:(id)arg1;
- (void)handleJSEvent:(id)arg1;

@end

