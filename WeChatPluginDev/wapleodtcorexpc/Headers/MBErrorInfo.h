//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MBErrorInfo : NSObject
{
    int _errCode;
    NSString *_errMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) int errCode; // @synthesize errCode=_errCode;
- (id)toNSError;
- (id)initWithErrCode:(int)arg1 Msg:(id)arg2;

@end

