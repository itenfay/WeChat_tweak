//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>
typedef void (^CDUnknownBlockType)(void);

@interface YtBaseViewController : UIViewController
{
    CDUnknownBlockType _succeedBlock;
    CDUnknownBlockType _failedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType succeedBlock; // @synthesize succeedBlock=_succeedBlock;
- (id)YtCreateImageWithColor:(id)arg1;
- (void)quitViewController;
- (void)naviBack;
- (void)viewWillAppear:(_Bool)arg1;

@end
