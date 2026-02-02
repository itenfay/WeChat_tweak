//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMListenFinderInfo, NSError, WCFinderDataItem;

@interface TingFinderInfoDataItemWrapper
{
    WCFinderDataItem *_dataItem;
    NSError *_error;
    MMListenFinderInfo *_finderInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMListenFinderInfo *finderInfo; // @synthesize finderInfo=_finderInfo;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;

@end

