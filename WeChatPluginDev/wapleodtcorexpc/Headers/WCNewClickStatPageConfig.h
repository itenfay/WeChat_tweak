//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCNewClickStatPageConfig
{
    _Bool _bNeedAction;
    NSString *_pageID;
}

+ (void)initialize;
+ (void)PBArrayAdd_bNeedAction;
+ (void)PBArrayAdd_pageID;
- (void).cxx_destruct;
@property(nonatomic) _Bool bNeedAction; // @synthesize bNeedAction=_bNeedAction;
@property(retain, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

