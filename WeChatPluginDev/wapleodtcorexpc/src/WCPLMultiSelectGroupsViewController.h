//
// WCPLMultiSelectGroupsViewController.h
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MultiSelectGroupsViewControllerDelegate <NSObject>

- (void)onMultiSelectGroupReturn:(NSArray *)arg1;

@optional
- (void)onMultiSelectGroupCancel;

@end

@interface WCPLMultiSelectGroupsViewController : UIViewController
__attribute__((deprecated("Use WCPLGroupPickerViewController")))

- (instancetype)initWithBlackList:(NSArray *)blackList;

@property (nonatomic, weak) id<MultiSelectGroupsViewControllerDelegate> delegate;
@property (nonatomic, copy) NSString *titleText;

@end
