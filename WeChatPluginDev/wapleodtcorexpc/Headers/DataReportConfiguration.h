//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol DataReportDynamicPublicParamsProvider, DataReportParamsFormatProtocol;

@interface DataReportConfiguration : NSObject
{
    unsigned long long _viewExposeMinTime;
    double _viewExposeMinRate;
    unsigned long long _clickReportInterval;
    unsigned long long _pageReportPolicy;
    unsigned long long _viewReportPolicy;
    id <DataReportParamsFormatProtocol> _formatter;
    id <DataReportDynamicPublicParamsProvider> _dynamicPublicParamsProvider;
    NSMutableArray *_callbacks;
}

+ (id)build:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *callbacks; // @synthesize callbacks=_callbacks;
@property(retain, nonatomic) id <DataReportDynamicPublicParamsProvider> dynamicPublicParamsProvider; // @synthesize dynamicPublicParamsProvider=_dynamicPublicParamsProvider;
@property(retain, nonatomic) id <DataReportParamsFormatProtocol> formatter; // @synthesize formatter=_formatter;
@property(nonatomic) unsigned long long viewReportPolicy; // @synthesize viewReportPolicy=_viewReportPolicy;
@property(nonatomic) unsigned long long pageReportPolicy; // @synthesize pageReportPolicy=_pageReportPolicy;
@property(nonatomic) unsigned long long clickReportInterval; // @synthesize clickReportInterval=_clickReportInterval;
@property(nonatomic) double viewExposeMinRate; // @synthesize viewExposeMinRate=_viewExposeMinRate;
@property(nonatomic) unsigned long long viewExposeMinTime; // @synthesize viewExposeMinTime=_viewExposeMinTime;
- (id)init;

@end

