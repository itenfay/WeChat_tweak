//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WASemverRange;

@interface WASemverRequirement : NSObject
{
    WASemverRange *_range;
    WASemverRequirement *_req1;
    unsigned long long _op;
    WASemverRequirement *_req2;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WASemverRequirement *req2; // @synthesize req2=_req2;
@property(nonatomic) unsigned long long op; // @synthesize op=_op;
@property(retain, nonatomic) WASemverRequirement *req1; // @synthesize req1=_req1;
@property(retain, nonatomic) WASemverRange *range; // @synthesize range=_range;
- (_Bool)isSatisfiedBy:(id)arg1;
- (id)createTildeRequirement:(id)arg1;
- (id)createCaretRequirement:(id)arg1;
- (id)parseString2Req:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithReqStr:(id)arg1;
- (id)initWithReq1:(id)arg1 op:(unsigned long long)arg2 req2:(id)arg3;
- (id)initWithRange:(id)arg1;

@end

