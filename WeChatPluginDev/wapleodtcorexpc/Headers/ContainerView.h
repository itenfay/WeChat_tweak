//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebViewController;

@interface ContainerView : NSObject
{
    MMWebViewController *_webViewController;
}

@property(retain, nonatomic) MMWebViewController *webViewController; // @synthesize webViewController=_webViewController;
- (void)layoutSubviews;

@end

