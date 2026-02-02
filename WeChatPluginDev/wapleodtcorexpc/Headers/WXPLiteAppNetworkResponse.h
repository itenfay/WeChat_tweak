//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface WXPLiteAppNetworkResponse : NSObject
{
    long long _errCode;
    NSString *_errMsg;
    NSData *_data;
    NSDictionary *_extraInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) long long errCode; // @synthesize errCode=_errCode;
- (id)toDictionary;
- (id)initWithErrCode:(long long)arg1 errMsg:(id)arg2 data:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

