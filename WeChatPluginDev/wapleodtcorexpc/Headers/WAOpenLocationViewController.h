//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAOpenLocationViewControllerHandler;
@protocol WAOpenLocationViewControllerDelegate;

@interface WAOpenLocationViewController
{
    WAOpenLocationViewControllerHandler *_handler;
    id <WAOpenLocationViewControllerDelegate> _waDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WAOpenLocationViewControllerDelegate> waDelegate; // @synthesize waDelegate=_waDelegate;
@property(retain, nonatomic) WAOpenLocationViewControllerHandler *handler; // @synthesize handler=_handler;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (id)initWithPOIInfo:(id)arg1;

@end

