//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface IAPErrInfo : NSObject
{
    unsigned int _errCode;
    long long _IAPErrCode;
    NSString *_IAPErrDesc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *IAPErrDesc; // @synthesize IAPErrDesc=_IAPErrDesc;
@property(nonatomic) long long IAPErrCode; // @synthesize IAPErrCode=_IAPErrCode;
@property(nonatomic) unsigned int errCode; // @synthesize errCode=_errCode;

@end

