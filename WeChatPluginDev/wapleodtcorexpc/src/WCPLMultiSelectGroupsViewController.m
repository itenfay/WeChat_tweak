//
// WCPLMultiSelectGroupsViewController.m
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WCPLMultiSelectGroupsViewController.h"
#import "WCPLFuncService.h"
#import "WeChatRedEnvelop.h"
#import "WCPLContactLookup.h"
#import "WCPLServiceCenter.h"
#import "WCPLLogger.h"
#import <objc/runtime.h>

@interface WCPLMultiSelectGroupsViewController () <ContactSelectViewDelegate>

@property (strong, nonatomic) ContactSelectView *selectView;
@property (copy  , nonatomic) NSArray *blackList;

@end

@implementation WCPLMultiSelectGroupsViewController

- (instancetype)initWithBlackList:(NSArray *)blackList {
    if (self = [super initWithNibName:nil bundle:nil]) {
        self.blackList = blackList;
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

    for (NSString *contactName in self.blackList) {
        if (![contactName isKindOfClass:[NSString class]] || contactName.length == 0) {
            continue;
        }
        NSString *userName = [contactName stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (userName.length == 0) {
            continue;
        }

        BOOL alreadySelected = NO;
        if ([self.selectView respondsToSelector:@selector(isSelected:)]) {
            @try {
                alreadySelected = [self.selectView isSelected:userName];
            } @catch (__unused NSException *exception) {
                alreadySelected = NO;
            }
        }

        CContact *contact = nil;
        if (!alreadySelected) {
            contact = WCPLFindContactByUserName(userName, contactMgr, self.selectView.m_contactsDataLogic);
            if (contact && [self.selectView respondsToSelector:@selector(isSelected:)]) {
                @try {
                    alreadySelected = [self.selectView isSelected:contact];
                } @catch (__unused NSException *exception2) {
                    alreadySelected = NO;
                }
            }
        }
        if (alreadySelected) {
            continue;
        }

        BOOL didAdd = NO;
        if (contact) {
            @try {
                [self.selectView addSelect:contact];
                didAdd = YES;
            } @catch (__unused NSException *exception) {
                didAdd = NO;
            }
        }
        if (!didAdd) {
            @try {
                [self.selectView addSelect:userName];
            } @catch (__unused NSException *exception2) {
                // ignore
            }
        }

        BOOL selectedNow = NO;
        if ([self.selectView respondsToSelector:@selector(isSelected:)]) {
            @try {
                selectedNow = [self.selectView isSelected:userName];
            } @catch (__unused NSException *exception3) {
                selectedNow = NO;
            }
        }
        if (!selectedNow) {
            @try {
                NSMutableDictionary *multi = self.selectView.m_dicMultiSelect;
                if (![multi isKindOfClass:[NSMutableDictionary class]]) {
                    multi = [multi isKindOfClass:[NSDictionary class]] ? [((NSDictionary *)multi) mutableCopy] : [NSMutableDictionary dictionary];
                }
                multi[userName] = userName;
                self.selectView.m_dicMultiSelect = multi;

                if ([self.selectView respondsToSelector:@selector(updateMultiSelectView)]) {
                    [self.selectView updateMultiSelectView];
                }
                if ([self.selectView respondsToSelector:@selector(reloadTableView)]) {
                    [self.selectView reloadTableView];
                }
            } @catch (__unused NSException *exception4) {
                WCPLLog(@"群聊预选失败: %@", userName);
            }
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
    
    self.navigationItem.rightBarButtonItem = [self rightBarButtonWithSelectCount:self.blackList.count];
    
    self.title = self.titleText.length > 0 ? self.titleText : @"白名单";
    
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
    if (self.delegate && [self.delegate respondsToSelector:@selector(onMultiSelectGroupCancel)]) {
        [self.delegate onMultiSelectGroupCancel];
    }
}

- (void)onDone:(UIBarButtonItem *)item {
    if (self.delegate && [self.delegate respondsToSelector:@selector(onMultiSelectGroupReturn:)]) {
        NSArray *blacklist = [self wcpl_selectedUserNames];
        [self.delegate onMultiSelectGroupReturn:blacklist];
    }
}

- (void)initSelectView {
    CGFloat cY = WCPLStatusBarAndNavigationBarHeight;
    CGFloat cW = WCPLScreenWidth;
    CGFloat cH = WCPLScreenHeight - WCPLStatusBarAndNavigationBarHeight - WCPLViewSafeBottomMargin;
    self.selectView = [[objc_getClass("ContactSelectView") alloc] initWithFrame:CGRectMake(0, cY, cW, cH) delegate:self];
    
    self.selectView.m_uiGroupScene = 5;
    self.selectView.m_bMultiSelect = YES;
    [self.selectView initData:5];
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
