//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCAdDynamicFeedElementPromotionInfo;

@interface WCAdDynamicCountdownView
{
    WCAdDynamicFeedElementPromotionInfo *_styleInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdDynamicFeedElementPromotionInfo *styleInfo; // @synthesize styleInfo=_styleInfo;
- (void)setDynamicMaxWidth:(double)arg1;
- (void)updateDynamicStyle;
- (id)initWithTitle:(id)arg1 endTime:(long long)arg2 maxWidth:(double)arg3 styleInfo:(id)arg4;

@end

