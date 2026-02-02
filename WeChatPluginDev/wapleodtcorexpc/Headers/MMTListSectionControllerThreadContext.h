//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController;
@protocol MMTListTableViewContext;

@interface MMTListSectionControllerThreadContext : NSObject
{
    MMUIViewController *_viewController;
    id <MMTListTableViewContext> _tableViewContext;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMTListTableViewContext> tableViewContext; // @synthesize tableViewContext=_tableViewContext;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;

@end

