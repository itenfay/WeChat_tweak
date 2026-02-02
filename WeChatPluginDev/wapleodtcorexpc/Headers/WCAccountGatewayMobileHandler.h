//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MobileInfo, NSMutableArray, NSString;

@interface WCAccountGatewayMobileHandler : NSObject
{
    _Bool _isRequesting;
    NSString *_business;
    NSString *_msgId;
    NSMutableArray *_tokens;
    NSMutableArray *_urlDownloaders;
    MobileInfo *_pureMobileResult;
}

+ (id)AllCelluarIpAddrList;
- (void).cxx_destruct;
@property(retain, nonatomic) MobileInfo *pureMobileResult; // @synthesize pureMobileResult=_pureMobileResult;
@property(retain, nonatomic) NSMutableArray *urlDownloaders; // @synthesize urlDownloaders=_urlDownloaders;
@property(retain, nonatomic) NSMutableArray *tokens; // @synthesize tokens=_tokens;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(retain, nonatomic) NSString *business; // @synthesize business=_business;
- (void)getMobileWithTokens:(id)arg1 msgId:(id)arg2 mobileType:(int)arg3 timeout:(unsigned int)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (_Bool)asyncGetPureMobileWithComplectionBlock:(CDUnknownBlockType)arg1;
- (void)batchRequestWithGatewayUrlResp:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)realStartGetMaskedMobileWithBusiness:(id)arg1 cellularIps:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)asyncGetMaskedMobileWithBusiness:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

