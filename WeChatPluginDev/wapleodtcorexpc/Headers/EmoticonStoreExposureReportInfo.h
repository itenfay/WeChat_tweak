//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface EmoticonStoreExposureReportInfo : NSObject
{
    NSMutableArray *_pidList;
    NSMutableArray *_linkIDList;
    NSMutableArray *_linkStatusList;
    NSMutableArray *_linkReportInfoList;
    NSMutableArray *_infoList;
    NSMutableArray *_indexList;
    NSMutableArray *_storeItemList;
    NSMutableArray *_reqIDList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *reqIDList; // @synthesize reqIDList=_reqIDList;
@property(retain, nonatomic) NSMutableArray *storeItemList; // @synthesize storeItemList=_storeItemList;
@property(retain, nonatomic) NSMutableArray *indexList; // @synthesize indexList=_indexList;
@property(retain, nonatomic) NSMutableArray *infoList; // @synthesize infoList=_infoList;
@property(retain, nonatomic) NSMutableArray *linkReportInfoList; // @synthesize linkReportInfoList=_linkReportInfoList;
@property(retain, nonatomic) NSMutableArray *linkStatusList; // @synthesize linkStatusList=_linkStatusList;
@property(retain, nonatomic) NSMutableArray *linkIDList; // @synthesize linkIDList=_linkIDList;
@property(retain, nonatomic) NSMutableArray *pidList; // @synthesize pidList=_pidList;

@end

