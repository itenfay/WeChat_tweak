//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, WCAdLookbookCardReportItemModel;

@interface WCAdLookbookCardReportModel
{
    unsigned int _scrollCount;
    unsigned int _slideCount;
    NSMutableArray *_reportItemList;
    WCAdLookbookCardReportItemModel *_brandNewItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdLookbookCardReportItemModel *brandNewItem; // @synthesize brandNewItem=_brandNewItem;
@property(retain, nonatomic) NSMutableArray *reportItemList; // @synthesize reportItemList=_reportItemList;
@property(nonatomic) unsigned int slideCount; // @synthesize slideCount=_slideCount;
@property(nonatomic) unsigned int scrollCount; // @synthesize scrollCount=_scrollCount;

@end

