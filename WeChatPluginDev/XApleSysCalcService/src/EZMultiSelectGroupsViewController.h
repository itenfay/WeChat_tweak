//
//  EZMultiSelectGroupsViewController.h
//
//  Created by ez on 17/4/6.
//  Copyright © 2017年 ez. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MultiSelectGroupsViewControllerDelegate <NSObject>
- (void)onMultiSelectGroupReturn:(NSArray *)arg1;

@optional
- (void)onMultiSelectGroupCancel;

@end

@interface EZMultiSelectGroupsViewController : UIViewController

- (instancetype)initWithBlackList:(NSArray *)blackList;

@property (nonatomic, assign) id<MultiSelectGroupsViewControllerDelegate> delegate;

@end
