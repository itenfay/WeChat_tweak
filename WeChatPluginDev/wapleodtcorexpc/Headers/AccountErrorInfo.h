//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BaseResponseErrMsg;

@interface AccountErrorInfo : NSObject
{
    unsigned int _uiMessage;
    int _baseResponseRet;
    BaseResponseErrMsg *_errMsg;
}

+ (id)errorInfoFromBaseResponse:(id)arg1 networkError:(id)arg2;
+ (id)errorInfoFromBaseResponse:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) BaseResponseErrMsg *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) int baseResponseRet; // @synthesize baseResponseRet=_baseResponseRet;
@property(nonatomic) unsigned int uiMessage; // @synthesize uiMessage=_uiMessage;
- (void)parseErrMsgXml:(id)arg1;
- (id)init;

@end

