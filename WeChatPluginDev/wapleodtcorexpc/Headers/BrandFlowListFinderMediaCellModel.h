//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderFeedContentVM;

@interface BrandFlowListFinderMediaCellModel
{
    WCFinderFeedContentVM *_feedContentVM;
    NSString *_exportId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *exportId; // @synthesize exportId=_exportId;
@property(retain, nonatomic) WCFinderFeedContentVM *feedContentVM; // @synthesize feedContentVM=_feedContentVM;
- (void)refreshWithFinderDataItem:(id)arg1;
- (id)finderExportId;
- (id)getFinderFeedContentVM;
- (id)initWithFinderDataItem:(id)arg1 fromScene:(unsigned long long)arg2;

@end

