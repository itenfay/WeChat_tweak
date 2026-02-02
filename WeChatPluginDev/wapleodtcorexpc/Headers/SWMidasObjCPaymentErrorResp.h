//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSError, NSString;

@interface SWMidasObjCPaymentErrorResp : NSObject
{
    MISSING_TYPE *errCode;
    MISSING_TYPE *step;
    MISSING_TYPE *innerCode;
    MISSING_TYPE *innerMsg;
    MISSING_TYPE *innerError;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSError *innerError;
@property(nonatomic, readonly) NSString *innerMsg;
@property(nonatomic, readonly) NSString *innerCode;
@property(nonatomic, readonly) long long step; // @synthesize step;
@property(nonatomic, readonly) long long errCode; // @synthesize errCode;

@end

