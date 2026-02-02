//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class WCAdDynamicFeedElementInfo;

@interface WCAdDynamicFeedSeparatorView : UIView
{
    WCAdDynamicFeedElementInfo *_elementInfo;
    UIView *_separatorLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) WCAdDynamicFeedElementInfo *elementInfo; // @synthesize elementInfo=_elementInfo;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 elementInfo:(id)arg2;

@end

