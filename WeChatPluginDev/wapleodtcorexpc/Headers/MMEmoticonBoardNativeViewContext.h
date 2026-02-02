//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterMethodChannel, UIViewController;

@interface MMEmoticonBoardNativeViewContext : NSObject
{
    UIViewController *_viewController;
    long long _viewId;
    FlutterMethodChannel *_channel;
    struct CGRect _frame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) FlutterMethodChannel *channel; // @synthesize channel=_channel;
@property(nonatomic) long long viewId; // @synthesize viewId=_viewId;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (id)description;

@end

