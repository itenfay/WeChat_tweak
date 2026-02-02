//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderBatchLoadObjectRequestID, WCFinderDataItem;

@interface WCFinderBatchGetDataItemResult : NSObject
{
    _Bool _hasFound;
    FinderBatchLoadObjectRequestID *_request;
    WCFinderDataItem *_dataItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) _Bool hasFound; // @synthesize hasFound=_hasFound;
@property(retain, nonatomic) FinderBatchLoadObjectRequestID *request; // @synthesize request=_request;

@end

