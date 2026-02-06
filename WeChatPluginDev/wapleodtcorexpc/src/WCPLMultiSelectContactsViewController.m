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
@property (nonatomic, assign) BOOL wcpl_isApplyingInitialSelections;
@property (nonatomic, assign) NSInteger wcpl_initialSelectionToken;

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
        NSArray<NSString *> *initial = [self wcpl_sanitizedUserNames:self.selectedContacts];
        NSArray<NSString *> *current = [self wcpl_selectedUserNames];

        BOOL didChange = self.wcpl_userDidChangeSelection;
        if (!didChange) {
            NSSet<NSString *> *initialSet = [NSSet setWithArray:initial];
            NSSet<NSString *> *currentSet = [NSSet setWithArray:current];
            if (![initialSet isEqualToSet:currentSet]) {
                if (current.count == 0 && initial.count > 0) {
                    didChange = NO;
                } else {
                    NSMutableSet<NSString *> *added = [currentSet mutableCopy];
                    [added minusSet:initialSet];
                    if (added.count > 0) {
                        didChange = YES;
                    } else {
                        didChange = NO;
                    }
                }
            }
        }

        if (didChange) {
            current = [self wcpl_sanitizedUserNames:current];
        } else {
            current = initial;
        }

        WCPLLogInfo(@"[多选联系人] Done: expected=%lu selected=%lu total=%lu userChanged=%d didChange=%d",
                    (unsigned long)initial.count,
                    (unsigned long)current.count,
                    (unsigned long)[self getTotalSelectCount],
                    self.wcpl_userDidChangeSelection,
                    didChange);

        [self.delegate onMultiSelectContactReturn:current];
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
    NSUInteger expected = [self wcpl_sanitizedUserNames:self.selectedContacts].count;
    if (expected == 0) {
        return;
    }

    BOOL logicReady = [self wcpl_isContactsLogicReady];
    NSUInteger selectedCount = [self wcpl_selectedUserNames].count;

    if (!self.wcpl_didApplyInitialSelections) {
        self.wcpl_didApplyInitialSelections = YES;
        if ([self.selectView respondsToSelector:@selector(reloadContacts)]) {
            @try {
                [self.selectView reloadContacts];
            } @catch (__unused NSException *exception) {
            }
        }
    }

    self.wcpl_initialSelectionToken += 1;
    NSInteger token = self.wcpl_initialSelectionToken;
    WCPLLogDebug(@"[多选联系人] ApplyInitial: expected=%lu selected=%lu logicReady=%d token=%ld",
                 (unsigned long)expected,
                 (unsigned long)selectedCount,
                 logicReady,
                 (long)token);
    [self wcpl_applySelectionsWithRetryCount:20 delay:0.25 token:token];
}

- (void)wcpl_applySelectionsWithRetryCount:(NSInteger)retryCount delay:(NSTimeInterval)delay token:(NSInteger)token {
    if (token != self.wcpl_initialSelectionToken) {
        return;
    }

    [self wcpl_applySelectionsOnce];
    NSUInteger expected = [self wcpl_sanitizedUserNames:self.selectedContacts].count;
    if (expected == 0) {
        return;
    }

    if (retryCount <= 0) {
        return;
    }

    BOOL logicReady = [self wcpl_isContactsLogicReady];
    NSUInteger selectedCount = [self wcpl_selectedUserNames].count;
    if (logicReady && selectedCount >= expected) {
        return;
    }

    __weak typeof(self) weakSelf = self;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        typeof(self) strongSelf = weakSelf;
        if (!strongSelf || !strongSelf.isViewLoaded || !strongSelf.view.window) {
            return;
        }
        if (token != strongSelf.wcpl_initialSelectionToken) {
            return;
        }
        [strongSelf wcpl_applySelectionsWithRetryCount:retryCount - 1 delay:delay token:token];
    });
}

- (void)wcpl_applySelectionsOnce {
    NSArray<NSString *> *userNames = [self wcpl_sanitizedUserNames:self.selectedContacts];
    if (userNames.count == 0) {
        return;
    }

    self.wcpl_isApplyingInitialSelections = YES;

    CContactMgr *contactMgr = WCPLGetService(objc_getClass("CContactMgr"));
    NSMutableSet<NSString *> *selectedNames = [NSMutableSet setWithArray:[self wcpl_selectedUserNames]];
    BOOL canCheckSelected = [self.selectView respondsToSelector:@selector(isSelected:)];
    BOOL didAddSelection = NO;
    NSUInteger tried = 0;
    NSUInteger added = 0;
    @try {
        for (NSString *userName in userNames) {
            if (userName.length == 0) {
                continue;
            }
            tried += 1;

            id contact = [self wcpl_contactObjectForUserName:userName contactMgr:contactMgr];
            if (!contact) {
                continue;
            }

            BOOL alreadySelected = NO;
            if (canCheckSelected) {
                @try {
                    alreadySelected = [self.selectView isSelected:contact];
                } @catch (__unused NSException *exception) {
                    alreadySelected = NO;
                }
            } else if ([selectedNames containsObject:userName]) {
                alreadySelected = YES;
            }
            if (alreadySelected) {
                continue;
            }

            @try {
                [self.selectView addSelect:contact];
                didAddSelection = YES;
                [selectedNames addObject:userName];
                added += 1;
            } @catch (__unused NSException *exception2) {
                WCPLLog(@"好友预选 addSelect 失败: %@", userName);
            }
        }
    } @finally {
        self.wcpl_isApplyingInitialSelections = NO;
    }

    if (didAddSelection) {
        [self wcpl_refreshSelectionUI];
    }
    WCPLLogDebug(@"[多选联系人] ApplyOnce: tried=%lu added=%lu selected=%lu expected=%lu logicReady=%d",
                 (unsigned long)tried,
                 (unsigned long)added,
                 (unsigned long)[self wcpl_selectedUserNames].count,
                 (unsigned long)[self wcpl_sanitizedUserNames:self.selectedContacts].count,
                 [self wcpl_isContactsLogicReady]);
    self.navigationItem.rightBarButtonItem = [self rightBarButtonWithSelectCount:[self getTotalSelectCount]];
}

- (void)wcpl_refreshSelectionUI {
    ContactSelectView *selectView = self.selectView;
    if (!selectView) {
        return;
    }

    if ([selectView respondsToSelector:@selector(loadHeaderViewSelection)]) {
        @try {
            [selectView loadHeaderViewSelection];
        } @catch (__unused NSException *exception0) {
        }
    }

    if ([selectView respondsToSelector:@selector(updateMultiSelectView)]) {
        @try {
            [selectView updateMultiSelectView];
        } @catch (__unused NSException *exception) {
        }
    }

    if ([selectView respondsToSelector:@selector(reloadTableView)]) {
        @try {
            [selectView reloadTableView];
        } @catch (__unused NSException *exception2) {
        }
        return;
    }

    if ([selectView respondsToSelector:@selector(getTableView)]) {
        @try {
            id tableView = [selectView getTableView];
            if ([tableView respondsToSelector:@selector(reloadData)]) {
                [tableView reloadData];
            }
        } @catch (__unused NSException *exception3) {
        }
    }
}

#pragma mark - ContactSelectViewDelegate

- (UIViewController *)getViewController {
    return self;
}

- (void)onSelectContact:(CContact *)arg1 {
    [self wcpl_markUserDidChangeSelection];
}

- (void)onSelectNormalContact:(CContact *)arg1 {
    [self wcpl_markUserDidChangeSelection];
}

- (void)onExistContactDidSelected:(CContact *)arg1 {
    [self wcpl_markUserDidChangeSelection];
}

- (void)onSelectRecommendGroup:(CContact *)arg1 {
    [self wcpl_markUserDidChangeSelection];
}

- (void)onSelectHistoryGroup {
    [self wcpl_markUserDidChangeSelection];
}

- (void)onContactsDataChange {
    [self wcpl_applyInitialSelectionsIfNeeded];
}

- (unsigned long)getTotalSelectCount {
    ContactSelectView *selectView = self.selectView;
    if (!selectView) {
        return 0;
    }

    if ([selectView respondsToSelector:@selector(getTotalSelectCount)]) {
        @try {
            return (unsigned long)[selectView getTotalSelectCount];
        } @catch (__unused NSException *exception) {
        }
    }

    return (unsigned long)[selectView.m_dicMultiSelect count];
}

#pragma mark - Private

- (void)wcpl_markUserDidChangeSelection {
    if (!self.wcpl_isApplyingInitialSelections) {
        self.wcpl_userDidChangeSelection = YES;
    }
    self.navigationItem.rightBarButtonItem = [self rightBarButtonWithSelectCount:[self getTotalSelectCount]];
}

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
    return contact;
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

    NSArray *orderKeys = nil;
    if ([self.selectView respondsToSelector:@selector(multiSelectOrderKey)]) {
        @try {
            orderKeys = [self.selectView multiSelectOrderKey];
        } @catch (__unused NSException *exception0) {
            orderKeys = nil;
        }
    }
    if ([orderKeys isKindOfClass:[NSArray class]] && orderKeys.count > 0) {
        for (id obj in orderKeys) {
            NSString *name = [self wcpl_userNameFromObject:obj];
            if ([name isKindOfClass:[NSString class]]) {
                name = [name stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
                if (name.length > 0) {
                    [names addObject:name];
                }
            }
        }
        if (names.count > 0) {
            return names.array;
        }
    }

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

- (BOOL)wcpl_isContactsLogicReady {
    ContactsDataLogic *logic = self.selectView.m_contactsDataLogic;
    if (!logic || ![logic respondsToSelector:@selector(getAllContactsDictionary)]) {
        return NO;
    }
    @try {
        NSDictionary *all = [logic getAllContactsDictionary];
        return [all isKindOfClass:[NSDictionary class]] && all.count > 0;
    } @catch (__unused NSException *exception) {
        return NO;
    }
}

@end
