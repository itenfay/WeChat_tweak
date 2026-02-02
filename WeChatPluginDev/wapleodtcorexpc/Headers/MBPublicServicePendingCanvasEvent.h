//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIView;

@interface MBPublicServicePendingCanvasEvent : NSObject
{
    _Bool _pendingFirstFrame;
    UIView *_pendingView;
    struct CGRect _pendingLayout;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect pendingLayout; // @synthesize pendingLayout=_pendingLayout;
@property(nonatomic) _Bool pendingFirstFrame; // @synthesize pendingFirstFrame=_pendingFirstFrame;
@property(retain, nonatomic) UIView *pendingView; // @synthesize pendingView=_pendingView;

@end

