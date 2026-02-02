//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCSpecialPVPageConfig
{
    NSString *_prePageID;
    NSString *_pageID;
}

+ (void)initialize;
+ (void)PBArrayAdd_pageID;
+ (void)PBArrayAdd_prePageID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property(retain, nonatomic) NSString *prePageID; // @synthesize prePageID=_prePageID;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

