//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCAdDynamicFeedElementInfo, WCAdvertiseInfo;

@interface WCAdDynamicFeedTagView
{
    WCAdDynamicFeedElementInfo *_elementInfo;
    WCAdvertiseInfo *_adInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdvertiseInfo *adInfo; // @synthesize adInfo=_adInfo;
@property(retain, nonatomic) WCAdDynamicFeedElementInfo *elementInfo; // @synthesize elementInfo=_elementInfo;
- (void)layoutSubviews;
- (void)generateTagElements;
- (id)initWithFrame:(struct CGRect)arg1 elementInfo:(id)arg2 adInfo:(id)arg3;

@end

