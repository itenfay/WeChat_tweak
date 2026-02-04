//
// WCPLMultiSelectContactsViewController.m
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WCPLMultiSelectContactsViewController.h"
#import "WCPLFuncService.h"
#import "WeChatRedEnvelop.h"
#import "WCPLContactLookup.h"
#import "WCPLServiceCenter.h"
#import "WCPLLogger.h"
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
    
    CContactMgr *contactMgr = WCPLGetService(objc_getClass("CContactMgr"));
    
    for (NSString *contactName in self.selectedContacts) {
        if (![contactName isKindOfClass:[NSString class]] || contactName.length == 0) {
            continue;
        }
        NSString *userName = [contactName stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (userName.length == 0) {
            continue;
        }

        CContact *contact = WCPLFindContactByUserName(userName, contactMgr, self.selectView.m_contactsDataLogic);
        if (!contact) {
            WCPLLog(@"好友预选跳过(未找到联系人): %@", userName);
            continue;
        }

        id selectObject = contact;
        BOOL alreadySelected = NO;
        if (selectObject && [self.selectView respondsToSelector:@selector(isSelected:)]) {
            @try {
                alreadySelected = [self.selectView isSelected:selectObject];
            } @catch (__unused NSException *exception) {
                alreadySelected = NO;
            }
        }
        if (alreadySelected) {
            continue;
        }

        @try {
            [self.selectView addSelect:contact];
        } @catch (__unused NSException *exception) {
            WCPLLog(@"好友 addSelect 失败: %@", userName);
        }
    }

    self.navigationItem.rightBarButtonItem = [self rightBarButtonWithSelectCount:[self getTotalSelectCount]];
}

- (UIInterfaceOrientationMask)supportedInterfaceOrientations {
    return UIInterfaceOrientationMaskPortrait;
}

- (id)getSafeSearchViewController {
    return self;
}

- (CGFloat)getSafeBottomInset {
    if (@available(iOS 11.0, *)) {
        return self.view.safeAreaInsets.bottom;
    }
    return 0.0f;
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
    NSString *usrName = nil;
    @try {
        id value = [obj valueForKey:@"m_nsUsrName"];
        if ([value isKindOfClass:[NSString class]]) {
            usrName = (NSString *)value;
        }
    } @catch (__unused NSException *exception) {
        usrName = nil;
    }
    return usrName;
}

- (NSArray<NSString *> *)wcpl_selectedUserNames {
    NSMutableOrderedSet<NSString *> *names = [NSMutableOrderedSet orderedSet];
    NSDictionary *selected = self.selectView.m_dicMultiSelect ?: @{};
    for (id key in selected) {
        NSString *name = [self wcpl_userNameFromObject:key];
        if (!name) {
            name = [self wcpl_userNameFromObject:selected[key]];
        }
        if ([name isKindOfClass:[NSString class]]) {
            name = [name stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
            if (name.length > 0) {
                [names addObject:name];
            }
        }
    }
    return names.array;
}

@end
