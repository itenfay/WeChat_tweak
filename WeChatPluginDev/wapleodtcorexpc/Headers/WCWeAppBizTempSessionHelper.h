//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WAPermissionHandler, WCWeAppBizTempSessionInfo;
@protocol WCWeAppBizTempSessionHelperDelegate;

@interface WCWeAppBizTempSessionHelper : NSObject
{
    id <WCWeAppBizTempSessionHelperDelegate> _delegate;
    WCWeAppBizTempSessionInfo *_bizInfo;
    WAPermissionHandler *_permissionHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAPermissionHandler *permissionHandler; // @synthesize permissionHandler=_permissionHandler;
@property(retain, nonatomic) WCWeAppBizTempSessionInfo *bizInfo; // @synthesize bizInfo=_bizInfo;
@property(nonatomic) __weak id <WCWeAppBizTempSessionHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)endWithError:(id)arg1;
- (void)endWithSuccess:(id)arg1;
- (void)didJumpToTempSession:(id)arg1;
- (void)stopLoadingView;
- (void)startLoadingView;
- (void)enterBizTempSessionWithInfo:(id)arg1 contact:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)enterBizTempSessionWithInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)onGetSubBusinessInfoResponse:(id)arg1;
- (void)requestWithBusinessID:(id)arg1;
- (void)enterSessionWithBizInfo:(id)arg1;
- (void)enterContact;
- (void)jumpToWeAppBizTempSessionWithInfo:(id)arg1;
- (void)dealloc;

@end

