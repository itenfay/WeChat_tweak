//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, WCStoryDataItem;

@interface WCStoryPageObj : NSObject
{
    WCStoryDataItem *_dataItem;
    NSMutableArray *_arrPageIndexObj;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrPageIndexObj; // @synthesize arrPageIndexObj=_arrPageIndexObj;
@property(retain, nonatomic) WCStoryDataItem *dataItem; // @synthesize dataItem=_dataItem;

@end

