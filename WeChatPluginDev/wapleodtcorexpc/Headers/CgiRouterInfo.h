//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CgiRouterInfo : NSObject
{
    unsigned int _businessId;
    unsigned int _cmdId;
    unsigned int _tryCount;
    NSString *_cgiPath;
    NSString *_cgiName;
    NSString *_cgiUri;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cgiUri; // @synthesize cgiUri=_cgiUri;
@property(retain, nonatomic) NSString *cgiName; // @synthesize cgiName=_cgiName;
@property(nonatomic) unsigned int tryCount; // @synthesize tryCount=_tryCount;
@property(retain, nonatomic) NSString *cgiPath; // @synthesize cgiPath=_cgiPath;
@property(nonatomic) unsigned int cmdId; // @synthesize cmdId=_cmdId;
@property(nonatomic) unsigned int businessId; // @synthesize businessId=_businessId;
- (id)toString;
@property(readonly, copy) NSString *description;
- (id)init:(unsigned int)arg1 cmdId:(unsigned int)arg2 tryCount:(unsigned int)arg3 cgiPath:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

