//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CRReportAPIClient;

@interface CRChannelReport : NSObject
{
    CRReportAPIClient *_reportClient;
}

+ (void)setLogLevel:(long long)arg1;
+ (void)setLogging:(_Bool)arg1;
+ (void)presentStoreProductViewController:(id)arg1 root:(id)arg2 completionWithBlock:(CDUnknownBlockType)arg3;
+ (void)presentStoreProductViewController:(id)arg1 root:(id)arg2 report:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)jumpToAppStore:(id)arg1 completionWithBlock:(CDUnknownBlockType)arg2;
+ (void)jumpToAppStore:(id)arg1 report:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) CRReportAPIClient *reportClient; // @synthesize reportClient=_reportClient;
- (id)initSingleton;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

