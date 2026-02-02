//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCAdDynamicFeedElementInfo;

@interface WCAdDynamicFeedRichTextView
{
    WCAdDynamicFeedElementInfo *_elementInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdDynamicFeedElementInfo *elementInfo; // @synthesize elementInfo=_elementInfo;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)appendNotifications;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;

@end

