//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMWebCanvasLayoutData
{
    NSString *_layoutStr;
    struct CGRect _frame;
}

+ (void)initialize;
+ (void)PBArrayAdd_layoutStr;
+ (void)PBArrayAdd_frame;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *layoutStr; // @synthesize layoutStr=_layoutStr;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

