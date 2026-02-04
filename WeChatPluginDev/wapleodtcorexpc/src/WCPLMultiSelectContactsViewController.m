//
// WCPLMultiSelectContactsViewController.m
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WCPLMultiSelectContactsViewController.h"
#import "WCPLFuncService.h"
#import "WeChatRedEnvelop.h"
#import <objc/runtime.h>

@interface WCPLMultiSelectContactsViewController () <ContactSelectViewDelegate>

@property (strong, nonatomic) ContactSelectView *selectView;
@property (copy  , nonatomic) NSArray *selectedContacts;

@end

@implementation WCPLMultiSelectContactsViewController

- (instancetype)initWithSelectedContacts:(NSArray *)selectedContacts {
    if (self = [super initWithNibName:nil bundle:nil]) {
        self.selectedContacts = selectedContacts;
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self initTitleArea];
    [self initSelectView];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    MMServiceCenter *serviceCenter = [objc_getClass("MMServiceCenter") defaultCenter];
    CContactMgr *contactMgr = [serviceCenter getService:objc_getClass("CContactMgr")];
    
    for (NSString *contactName in self.selectedContacts) {
        CContact *contact = [contactMgr getContactByName:contactName];
        if (contact) {
            [self.selectView addSelect:contact];
        }
    }
}

- (unsigned long long)supportedInterfaceOrientations {
    return (unsigned long long)UIInterfaceOrientationMaskPortrait;
}

- (void)initTitleArea {
    self.navigationItem.leftBarButtonItem = [objc_getClass("MMUICommonUtil") getBarButtonWithTitle:@"取消" target:self action:@selector(onCancel:) style:0];
    
    self.navigationItem.rightBarButtonItem = [self rightBarButtonWithSelectCount:self.selectedContacts.count];
    
    self.title = self.titleText.length > 0 ? self.titleText : @"屏蔽好友";
    
    [self.navigationController.navigationBar setTitleTextAttributes:@{NSFontAttributeName: [UIFont boldSystemFontOfSize:17.0]}];
}

- (UIBarButtonItem *)rightBarButtonWithSelectCount:(unsigned long)selectCount {
    UIBarButtonItem *barButtonItem;
    
    if (selectCount == 0) {
        barButtonItem = [objc_getClass("MMUICommonUtil") getBarButtonWithTitle:@"确定" target:self action:@selector(onDone:) style:2];
    } else {
        NSString *title = [NSString stringWithFormat:@"确定(%lu)", selectCount];
        barButtonItem = [objc_getClass("MMUICommonUtil") getBarButtonWithTitle:title target:self action:@selector(onDone:) style:4];
    }
    
    return barButtonItem;
}

- (void)onCancel:(UIBarButtonItem *)item {
    if (self.delegate && [self.delegate respondsToSelector:@selector(onMultiSelectContactCancel)]) {
        [self.delegate onMultiSelectContactCancel];
    }
}

- (void)onDone:(UIBarButtonItem *)item {
    if (self.delegate && [self.delegate respondsToSelector:@selector(onMultiSelectContactReturn:)]) {
        NSArray *contacts = [self wcpl_selectedUserNames];
        [self.delegate onMultiSelectContactReturn:contacts];
    }
}

- (void)initSelectView {
    CGFloat cY = WCPLStatusBarAndNavigationBarHeight;
    CGFloat cW = WCPLScreenWidth;
    CGFloat cH = WCPLScreenHeight - WCPLStatusBarAndNavigationBarHeight - WCPLViewSafeBottomMargin;
    self.selectView = [[objc_getClass("ContactSelectView") alloc] initWithFrame:CGRectMake(0, cY, cW, cH) delegate:self];
    
    self.selectView.m_uiGroupScene = 0;
    self.selectView.m_bMultiSelect = YES;
    [self.selectView initData:0];
    [self.selectView initView];
    
    [self.view addSubview:self.selectView];
}

#pragma mark - ContactSelectViewDelegate

- (UIViewController *)getViewController {
    return self;
}

- (void)onSelectContact:(CContact *)arg1 {
    self.navigationItem.rightBarButtonItem = [self rightBarButtonWithSelectCount:[self getTotalSelectCount]];
}

- (unsigned long)getTotalSelectCount {
    return (unsigned long)[self.selectView.m_dicMultiSelect count];
}

#pragma mark - Private

- (NSString *)wcpl_userNameFromObject:(id)obj {
    if (!obj) return nil;
    if ([obj isKindOfClass:[NSString class]]) {
        return (NSString *)obj;
    }
    Class contactClass = NSClassFromString(@"CContact");
    if (contactClass && [obj isKindOfClass:contactClass]) {
        NSString *usrName = nil;
        @try {
            usrName = [obj valueForKey:@"m_nsUsrName"];
        } @catch (__unused NSException *exception) {
            usrName = nil;
        }
        return usrName;
    }
    return nil;
}

- (NSArray<NSString *> *)wcpl_selectedUserNames {
    NSMutableArray<NSString *> *names = [NSMutableArray array];
    NSDictionary *selected = self.selectView.m_dicMultiSelect ?: @{};
    for (id key in selected) {
        NSString *name = [self wcpl_userNameFromObject:key];
        if (!name) {
            name = [self wcpl_userNameFromObject:selected[key]];
        }
        if (name.length > 0) {
            [names addObject:name];
        }
    }
    return names.copy;
}

@end
