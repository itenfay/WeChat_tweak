//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, WCAdDynamicFeedElementInfo, WCAdTagNode, WCAdURLImageView;

@interface WCAdDynamicFeedTagElementView : UIView
{
    WCAdDynamicFeedElementInfo *_styleInfo;
    WCAdTagNode *_nodeInfo;
    WCAdURLImageView *_iconView;
    MMUILabel *_textView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) WCAdURLImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) WCAdTagNode *nodeInfo; // @synthesize nodeInfo=_nodeInfo;
@property(retain, nonatomic) WCAdDynamicFeedElementInfo *styleInfo; // @synthesize styleInfo=_styleInfo;
- (void)layoutSubviews;
- (void)generateTagElement;
- (id)initWithFrame:(struct CGRect)arg1 styleInfo:(id)arg2 nodeInfo:(id)arg3;

@end

