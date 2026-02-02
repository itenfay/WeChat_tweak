//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderGeneralReportModel : NSObject
{
    NSString *_svrReportJsonString;
}

+ (id)convertFromGeneralReportPB:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_svrReportJsonString;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *svrReportJsonString; // @synthesize svrReportJsonString=_svrReportJsonString;
- (id)genPBGeneralReportInfo;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

