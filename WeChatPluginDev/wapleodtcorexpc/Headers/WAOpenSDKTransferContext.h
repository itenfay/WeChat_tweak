//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_group;

@interface WAOpenSDKTransferContext : NSObject
{
    _Bool _sendReqBeforeEnd;
    int _errorCode;
    NSString *_errorMessage;
    NSObject<OS_dispatch_group> *_group;
}

- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(copy) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool sendReqBeforeEnd; // @synthesize sendReqBeforeEnd=_sendReqBeforeEnd;
- (void)addSendLaunchWxaRedirectingPageRespWithTicket:(id)arg1 appID:(id)arg2 universalLink:(id)arg3 context:(id)arg4 beforeCallback:(CDUnknownBlockType)arg5 afterCallback:(CDUnknownBlockType)arg6;
- (void)addUpdateDeepLinkRequestWithTicket:(id)arg1 result:(id)arg2 context:(id)arg3;

@end

