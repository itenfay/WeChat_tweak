//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol FBSDKBridgeAPIProtocol;

@interface FBSDKBridgeAPIRequest : NSObject
{
    NSString *_actionID;
    NSString *_methodName;
    NSString *_methodVersion;
    NSDictionary *_parameters;
    unsigned long long _protocolType;
    NSString *_scheme;
    NSDictionary *_userInfo;
    id <FBSDKBridgeAPIProtocol> _protocol;
}

+ (id)_protocolForType:(unsigned long long)arg1 scheme:(id)arg2;
+ (id)protocolMap;
+ (id)bridgeAPIRequestWithProtocolType:(unsigned long long)arg1 scheme:(id)arg2 methodName:(id)arg3 methodVersion:(id)arg4 parameters:(id)arg5 userInfo:(id)arg6;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <FBSDKBridgeAPIProtocol> protocol; // @synthesize protocol=_protocol;
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(readonly, nonatomic) unsigned long long protocolType; // @synthesize protocolType=_protocolType;
@property(readonly, copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) NSString *methodVersion; // @synthesize methodVersion=_methodVersion;
@property(readonly, copy, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
@property(readonly, copy, nonatomic) NSString *actionID; // @synthesize actionID=_actionID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)requestURL:(id *)arg1;
- (id)initWithProtocol:(id)arg1 protocolType:(unsigned long long)arg2 scheme:(id)arg3 methodName:(id)arg4 methodVersion:(id)arg5 parameters:(id)arg6 userInfo:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

