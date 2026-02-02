//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FLTPlatformProto, NSString;

@interface FLTActionResponse : NSObject
{
    NSString *_cmdId;
    long long _errCode;
    NSString *_errMsg;
    FLTPlatformProto *_proto;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithCmdId:(id)arg1 errCode:(long long)arg2 errMsg:(id)arg3 proto:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) FLTPlatformProto *proto; // @synthesize proto=_proto;
@property(copy, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) long long errCode; // @synthesize errCode=_errCode;
@property(copy, nonatomic) NSString *cmdId; // @synthesize cmdId=_cmdId;
- (id)toList;

@end

