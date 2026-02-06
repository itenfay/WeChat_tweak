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
#import <dispatch/dispatch.h>
#import <objc/runtime.h>

@interface WCPLMultiSelectContactsViewController () <ContactSelectViewDelegate>

@property (strong, nonatomic) ContactSelectView *selectView;
@property (copy  , nonatomic) NSArray *selectedContacts;
@property (nonatomic, assign) BOOL wcpl_didApplyInitialSelections;
@property (nonatomic, assign) BOOL wcpl_userDidChangeSelection;

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

    self.navigationItem.rightBarButtonItem = [self rightBarButtonWithSelectCount:[self getTotalSelectCount]];
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    [self wcpl_applyInitialSelectionsIfNeeded];
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
        NSArray *result = self.wcpl_userDidChangeSelection ? [self wcpl_selectedUserNames] : [self wcpl_sanitizedUserNames:self.selectedContacts];
        [self.delegate onMultiSelectContactReturn:result];
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

#pragma mark - Preselect

- (void)wcpl_applyInitialSelectionsIfNeeded {
    if (self.wcpl_didApplyInitialSelections) {
        return;
    }
    self.wcpl_didApplyInitialSelections = YES;
    if ([self.selectView respondsToSelector:@selector(reloadContacts)]) {
        @try {
            [self.selectView reloadContacts];
        } @catch (__unused NSException *exception) {
        }
    }
    [self wcpl_applySelectionsWithRetryCount:3 delay:0.25];
}

- (void)wcpl_applySelectionsWithRetryCount:(NSInteger)retryCount delay:(NSTimeInterval)delay {
    [self wcpl_applySelectionsOnce];
    NSUInteger expected = [self wcpl_sanitizedUserNames:self.selectedContacts].count;
    if (expected > 0 && [self getTotalSelectCount] >= expected) {
        return;
    }
    if (retryCount <= 0) {
        return;
    }

    __weak typeof(self) weakSelf = self;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        typeof(self) strongSelf = weakSelf;
        if (!strongSelf || !strongSelf.isViewLoaded || !strongSelf.view.window) {
            return;
        }
        [strongSelf wcpl_applySelectionsWithRetryCount:retryCount - 1 delay:delay];
    });
}

- (void)wcpl_applySelectionsOnce {
    NSArray *userNames = self.selectedContacts;
    if (![userNames isKindOfClass:[NSArray class]] || userNames.count == 0) {
        return;
    }

    CContactMgr *contactMgr = WCPLGetService(objc_getClass("CContactMgr"));
    for (NSString *contactName in userNames) {
        if (![contactName isKindOfClass:[NSString class]] || contactName.length == 0) {
            continue;
        }
        NSString *userName = [contactName stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (userName.length == 0) {
            continue;
        }

        id contact = [self wcpl_contactObjectForUserName:userName contactMgr:contactMgr];
        if (!contact) {
            continue;
        }

        BOOL alreadySelected = NO;
        if ([self.selectView respondsToSelector:@selector(isSelected:)]) {
            @try {
                alreadySelected = [self.selectView isSelected:contact];
            } @catch (__unused NSException *exception) {
                alreadySelected = NO;
            }
        }
        if (alreadySelected) {
            continue;
        }

        @try {
            [self.selectView addSelect:contact];
        } @catch (__unused NSException *exception2) {
            WCPLLog(@"好友预选 addSelect 失败: %@", userName);
        }
    }

    self.navigationItem.rightBarButtonItem = [self rightBarButtonWithSelectCount:[self getTotalSelectCount]];
}

#pragma mark - ContactSelectViewDelegate

- (UIViewController *)getViewController {
    return self;
}

- (void)onSelectContact:(CContact *)arg1 {
    self.wcpl_userDidChangeSelection = YES;
    self.navigationItem.rightBarButtonItem = [self rightBarButtonWithSelectCount:[self getTotalSelectCount]];
}

- (unsigned long)getTotalSelectCount {
    return (unsigned long)[self.selectView.m_dicMultiSelect count];
}

#pragma mark - Private

- (NSArray<NSString *> *)wcpl_sanitizedUserNames:(NSArray *)names {
    if (![names isKindOfClass:[NSArray class]]) {
        return @[];
    }
    NSMutableOrderedSet<NSString *> *results = [NSMutableOrderedSet orderedSet];
    for (id obj in names) {
        if (![obj isKindOfClass:[NSString class]]) {
            continue;
        }
        NSString *value = [(NSString *)obj stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (value.length > 0) {
            [results addObject:value];
        }
    }
    return results.array;
}

- (id)wcpl_contactObjectForUserName:(NSString *)userName contactMgr:(CContactMgr *)contactMgr {
    if (![userName isKindOfClass:[NSString class]] || userName.length == 0) {
        return nil;
    }

    id contact = nil;
    if (contactMgr) {
        @try {
            contact = [contactMgr getContactByName:userName];
        } @catch (__unused NSException *exception) {
            contact = nil;
        }
        if (!contact) {
            @try {
                contact = [contactMgr getContactByNameFromDB:userName];
            } @catch (__unused NSException *exception2) {
                contact = nil;
            }
        }
        if (!contact) {
            @try {
                contact = [contactMgr getContactByNameFromCache:userName];
            } @catch (__unused NSException *exception3) {
                contact = nil;
            }
        }
    }
    if (contact) {
        return contact;
    }

    ContactsDataLogic *logic = self.selectView.m_contactsDataLogic;
    if (logic && [logic respondsToSelector:@selector(getAllContactsDictionary)]) {
        NSDictionary *all = nil;
        @try {
            all = [logic getAllContactsDictionary];
        } @catch (__unused NSException *exception4) {
            all = nil;
        }
        id direct = all[userName];
        if (direct) {
            return direct;
        }
        for (id obj in all.allValues) {
            NSString *name = nil;
            @try {
                name = [obj valueForKey:@"m_nsUsrName"];
            } @catch (__unused NSException *exception5) {
                name = nil;
            }
            if ([name isKindOfClass:[NSString class]] && [name isEqualToString:userName]) {
                return obj;
            }
        }
    }

    return nil;
}

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
    NSDictionary *selected = @{};
    if ([self.selectView respondsToSelector:@selector(getDicSelectedContacts)]) {
        @try {
            id value = [self.selectView getDicSelectedContacts];
            if ([value isKindOfClass:[NSDictionary class]]) {
                selected = (NSDictionary *)value;
            }
        } @catch (__unused NSException *exception) {
            selected = @{};
        }
    }
    if (selected.count == 0) {
        selected = self.selectView.m_dicMultiSelect ?: @{};
    }
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
