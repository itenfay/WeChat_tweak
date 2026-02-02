//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WCSessionConfigModel
{
    NSString *_sid;
    NSMutableArray *_pageNames;
    NSString *_prePage;
    NSMutableArray *_sessionParams;
}

+ (void)initialize;
+ (void)PBArrayAdd_sessionParams;
+ (void)PBArrayAdd_prePage;
+ (void)PBArrayAdd_pageNames;
+ (void)PBArrayAdd_sid;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *sessionParams; // @synthesize sessionParams=_sessionParams;
@property(retain, nonatomic) NSString *prePage; // @synthesize prePage=_prePage;
@property(retain, nonatomic) NSMutableArray *pageNames; // @synthesize pageNames=_pageNames;
@property(retain, nonatomic) NSString *sid; // @synthesize sid=_sid;
- (id)toString;
- (id)initWithSid:(id)arg1 withPageNames:(id)arg2 withPrePage:(id)arg3;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

