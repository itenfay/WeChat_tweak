//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCAdDynamicFeedElementRollTextInfo;

@interface WCAdDynamicRollTextView
{
    _Bool _didLayoutOnce;
    WCAdDynamicFeedElementRollTextInfo *_styleInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdDynamicFeedElementRollTextInfo *styleInfo; // @synthesize styleInfo=_styleInfo;
@property(nonatomic) _Bool didLayoutOnce; // @synthesize didLayoutOnce=_didLayoutOnce;
- (void)layoutSubviews;
- (void)updateDynamicStyle;
- (id)initWithFrame:(struct CGRect)arg1 styleInfo:(id)arg2;

@end

