//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayResetPwdByFaceResp : NSObject
{
    int _retCode;
    NSString *_retMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *retMsg; // @synthesize retMsg=_retMsg;
@property(nonatomic) int retCode; // @synthesize retCode=_retCode;

@end

