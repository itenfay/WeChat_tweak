//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, WCFinderDataItem;

@interface WCFinderExtStatsReportBaseModel : NSObject
{
    int _feedActionType;
    int _commentScene;
    WCFinderDataItem *_dataItem;
    NSArray *_jumpInfoReportList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *jumpInfoReportList; // @synthesize jumpInfoReportList=_jumpInfoReportList;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) int feedActionType; // @synthesize feedActionType=_feedActionType;
- (id)generateOtherKVsDictionary;

@end

