//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, WCAdDynamicFeedElementInfo, WCAdvertiseInfo, WCDataItem;

@interface WCAdDynamicFeedGridView
{
    WCAdDynamicFeedElementInfo *_elementInfo;
    WCAdvertiseInfo *_adInfo;
    WCDataItem *_dataItem;
    NSMutableArray *_gridElements;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *gridElements; // @synthesize gridElements=_gridElements;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCAdvertiseInfo *adInfo; // @synthesize adInfo=_adInfo;
@property(retain, nonatomic) WCAdDynamicFeedElementInfo *elementInfo; // @synthesize elementInfo=_elementInfo;
- (id)fetchGridElements;
- (void)generateGridElements;
- (struct CGSize)calcGridViewSize;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 elementInfo:(id)arg2 adInfo:(id)arg3 dataItem:(id)arg4;

@end

