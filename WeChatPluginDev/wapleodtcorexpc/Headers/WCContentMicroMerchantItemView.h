//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, RichTextView, WCDataItem, WCMicroMerchantFeedsGroup;

@interface WCContentMicroMerchantItemView
{
    WCDataItem *_dataItem;
    WCMicroMerchantFeedsGroup *_wsGroup;
    RichTextView *_leftTitle;
    MMUILabel *_rightTitle;
}

+ (double)heightForDataItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *rightTitle; // @synthesize rightTitle=_rightTitle;
@property(retain, nonatomic) RichTextView *leftTitle; // @synthesize leftTitle=_leftTitle;
@property(retain, nonatomic) WCMicroMerchantFeedsGroup *wsGroup; // @synthesize wsGroup=_wsGroup;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)openMicroMerchantSubTimeline;
- (void)onVoiceOverClick;
- (void)throwUrlMessage;
- (void)initViewsWithWCDataItem:(id)arg1;

@end

