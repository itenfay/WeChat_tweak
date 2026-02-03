//
// WCPLMultiSelectContactsViewController.h
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MMUIViewController.h"

@protocol WCPLMultiSelectContactsViewControllerDelegate <NSObject>

- (void)onMultiSelectContactReturn:(NSArray *)arg1;

@optional
- (void)onMultiSelectContactCancel;

@end

@interface WCPLMultiSelectContactsViewController : MMUIViewController

- (instancetype)initWithSelectedContacts:(NSArray *)selectedContacts;

@property (nonatomic, weak) id<WCPLMultiSelectContactsViewControllerDelegate> delegate;
@property (nonatomic, copy) NSString *titleText;

@end
