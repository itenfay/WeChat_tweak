//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol KindaViewControllerRouteActionDelegate;

@interface KindaViewControllerRouteAction : NSObject
{
    id <KindaViewControllerRouteActionDelegate> _delegate;
    CDUnknownBlockType _action;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) __weak id <KindaViewControllerRouteActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)run:(id)arg1;
- (id)initWithAction:(CDUnknownBlockType)arg1;

@end

