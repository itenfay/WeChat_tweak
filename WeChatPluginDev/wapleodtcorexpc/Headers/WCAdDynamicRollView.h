//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCAdDynamicFeedElementRollTextInfo;

@interface WCAdDynamicRollView
{
    WCAdDynamicFeedElementRollTextInfo *_styleInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdDynamicFeedElementRollTextInfo *styleInfo; // @synthesize styleInfo=_styleInfo;
- (void)layoutSubviews;
- (void)updateDynamicRollTextWithTextList:(id)arg1;
- (void)updateDynamicStyle;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2 iconUrl:(id)arg3 textList:(id)arg4 styleInfo:(id)arg5;

@end

