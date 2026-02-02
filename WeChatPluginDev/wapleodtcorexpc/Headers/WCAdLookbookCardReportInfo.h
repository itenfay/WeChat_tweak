//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, WCAdLookbookCardReportItem;

@interface WCAdLookbookCardReportInfo : NSObject
{
    unsigned int _scrollCount;
    unsigned int _slideCount;
    NSMutableArray *_reportItemList;
    WCAdLookbookCardReportItem *_brandNewReportItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdLookbookCardReportItem *brandNewReportItem; // @synthesize brandNewReportItem=_brandNewReportItem;
@property(nonatomic) unsigned int slideCount; // @synthesize slideCount=_slideCount;
@property(nonatomic) unsigned int scrollCount; // @synthesize scrollCount=_scrollCount;
@property(retain, nonatomic) NSMutableArray *reportItemList; // @synthesize reportItemList=_reportItemList;

@end

