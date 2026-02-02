//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BrandServiceContinueLocationReportLogic;

@interface BrandLocationReportLogicAlertOberserver : NSObject
{
    BrandServiceContinueLocationReportLogic *weakReportLogic;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak BrandServiceContinueLocationReportLogic *weakReportLogic; // @synthesize weakReportLogic;
- (void)askIsAllowReportLocation:(id)arg1;

@end

