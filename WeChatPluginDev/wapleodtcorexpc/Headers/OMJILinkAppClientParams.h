//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, OMJILinkLoginParams;

@interface OMJILinkAppClientParams : NSObject
{
    NSString *_appID;
    OMJILinkLoginParams *_loginParams;
    CDUnknownBlockType _loginParamsGetterBlock;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType loginParamsGetterBlock; // @synthesize loginParamsGetterBlock=_loginParamsGetterBlock;
@property(readonly, nonatomic) OMJILinkLoginParams *loginParams; // @synthesize loginParams=_loginParams;
@property(readonly, copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (id)initWithAppID:(id)arg1 loginParamsGetterBlock:(CDUnknownBlockType)arg2;
- (id)initWithAppID:(id)arg1 loginParams:(id)arg2;

@end

