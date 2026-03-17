//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface WCAdConsecutiveAdReportModel : NSObject
{
    unsigned long long _totalCount;
    NSArray *_reportItemList;
}

@property(retain, nonatomic) NSArray *reportItemList; // @synthesize reportItemList=_reportItemList;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;

@end

