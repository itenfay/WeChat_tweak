//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TipsReportInfo : NSObject
{
    unsigned long long _filteredType;
    unsigned long long _reportStayTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_reportStayTime;
+ (void)PBArrayAdd_filteredType;
@property(nonatomic) unsigned long long reportStayTime; // @synthesize reportStayTime=_reportStayTime;
@property(nonatomic) unsigned long long filteredType; // @synthesize filteredType=_filteredType;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

