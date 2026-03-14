//
// WCPLUnifiedMultiSelectViewController.m
//
// Created by codex on 2026/2/16.
//

#import "WCPLUnifiedMultiSelectViewController.h"

#import "WCPLContactLookup.h"
#import "WCPLFuncService.h"
#import "WCPLLogger.h"
#import "WCPLPureHelpers.h"
#import "WCPLServiceCenter.h"
#import "WCPLTypeGuard.h"
#import "WCPLWeChatCompatibilityHeaders.h"
#import "WCPLWeChatContactHeaders.h"
#import "WCPLWeChatUIHeaders.h"
#import <dispatch/dispatch.h>
#import <objc/runtime.h>

@interface WCPLUnifiedMultiSelectViewController () <ContactSelectViewDelegate>

@property (nonatomic, assign, readwrite) WCPLUnifiedMultiSelectType selectType;
@property (nonatomic, copy) NSArray<NSString *> *initialUserNames;
@property (nonatomic, strong) ContactSelectView *selectView;
@property (nonatomic, assign) BOOL wcpl_didApplyInitialSelections;
@property (nonatomic, assign) BOOL wcpl_userDidChangeSelection;
@property (nonatomic, assign) BOOL wcpl_isApplyingInitialSelections;
@property (nonatomic, assign) NSInteger wcpl_initialSelectionToken;
@property (nonatomic, strong) NSMutableSet<NSString *> *wcpl_resolvedInitialUserNames;
@property (nonatomic, strong) NSDictionary<NSString *, id> *wcpl_contactIndex;

@end

@implementation WCPLUnifiedMultiSelectViewController

- (instancetype)initWithSelectType:(WCPLUnifiedMultiSelectType)selectType
                   initialUserNames:(NSArray<NSString *> *)initialUserNames {
    if (self = [super initWithNibName:nil bundle:nil]) {
        _selectType = selectType;
        _initialUserNames = [[self wcpl_sanitizedUserNames:initialUserNames] copy];
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];

    [self wcpl_initTitleArea];
    [self wcpl_initSelectView];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    self.navigationItem.rightBarButtonItem = [self wcpl_rightBarButtonWithSelectCount:[self getTotalSelectCount]];
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

- (void)wcpl_initTitleArea {
    self.navigationItem.leftBarButtonItem = [objc_getClass("MMUICommonUtil") getBarButtonWithTitle:@"取消"
                                                                                               target:self
                                                                                               action:@selector(wcpl_onCancel:)
                                                                                                style:0];
    self.navigationItem.rightBarButtonItem = [self wcpl_rightBarButtonWithSelectCount:self.initialUserNames.count];
    self.title = self.titleText.length > 0 ? self.titleText : [self wcpl_defaultTitle];
    [self.navigationController.navigationBar setTitleTextAttributes:@{NSFontAttributeName: [UIFont boldSystemFontOfSize:17.0]}];
}

- (NSString *)wcpl_defaultTitle {
    return self.selectType == WCPLUnifiedMultiSelectTypeChatroom ? @"群聊" : @"联系人";
}

- (UIBarButtonItem *)wcpl_rightBarButtonWithSelectCount:(unsigned long)selectCount {
    if (selectCount == 0) {
        return [objc_getClass("MMUICommonUtil") getBarButtonWithTitle:@"确定"
                                                                target:self
                                                                action:@selector(wcpl_onDone:)
                                                                 style:2];
    }

    NSString *title = [NSString stringWithFormat:@"确定(%lu)", selectCount];
    return [objc_getClass("MMUICommonUtil") getBarButtonWithTitle:title
                                                           target:self
                                                           action:@selector(wcpl_onDone:)
                                                            style:4];
}

- (void)wcpl_onCancel:(__unused UIBarButtonItem *)item {
    if (self.onCancelBlock) {
        self.onCancelBlock();
        return;
    }
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)wcpl_onDone:(__unused UIBarButtonItem *)item {
    NSArray<NSString *> *initial = [self wcpl_sanitizedUserNames:self.initialUserNames];
    NSArray<NSString *> *current = [self wcpl_selectedUserNames];

    BOOL didChange = self.wcpl_userDidChangeSelection;
    if (!didChange) {
        NSSet<NSString *> *initialSet = [NSSet setWithArray:initial];
        NSSet<NSString *> *currentSet = [NSSet setWithArray:current];
        didChange = ![initialSet isEqualToSet:currentSet];
    }

    if (didChange) {
        NSSet<NSString *> *resolvedSet = [NSSet setWithArray:self.wcpl_resolvedInitialUserNames.allObjects ?: @[]];
        NSMutableOrderedSet<NSString *> *merged = [NSMutableOrderedSet orderedSetWithArray:current];
        NSUInteger unresolvedCount = 0;
        for (NSString *name in initial) {
            if (![resolvedSet containsObject:name]) {
                unresolvedCount += 1;
                [merged addObject:name];
            }
        }
        if (unresolvedCount > 0) {
            current = merged.array;
            WCPLLogWarning(@"[统一多选] 检测到%lu个初始项未回显，自动保留（type=%lu）",
                           (unsigned long)unresolvedCount,
                           (unsigned long)self.selectType);
        }
    } else {
        current = initial;
    }

    WCPLLogInfo(@"[统一多选] Done: type=%lu expected=%lu selected=%lu total=%lu changed=%d",
                (unsigned long)self.selectType,
                (unsigned long)initial.count,
                (unsigned long)current.count,
                (unsigned long)[self getTotalSelectCount],
                didChange);

    if (self.onDoneBlock) {
        self.onDoneBlock(current);
        return;
    }
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)wcpl_initSelectView {
    CGFloat cY = WCPLStatusBarAndNavigationBarHeight;
    CGFloat cW = WCPLScreenWidth;
    CGFloat cH = WCPLScreenHeight - WCPLStatusBarAndNavigationBarHeight - WCPLViewSafeBottomMargin;
    self.selectView = [[objc_getClass("ContactSelectView") alloc] initWithFrame:CGRectMake(0, cY, cW, cH)
                                                                         delegate:self];

    unsigned int scene = self.selectType == WCPLUnifiedMultiSelectTypeChatroom ? 5 : 0;
    self.selectView.m_uiGroupScene = scene;
    self.selectView.m_bMultiSelect = YES;
    [self.selectView initData:scene];
    [self.selectView initView];

    [self.view addSubview:self.selectView];
}

#pragma mark - Preselect

- (void)wcpl_applyInitialSelectionsIfNeeded {
    NSUInteger expected = [self wcpl_sanitizedUserNames:self.initialUserNames].count;
    if (expected == 0) {
        return;
    }

    if (!self.wcpl_didApplyInitialSelections) {
        self.wcpl_didApplyInitialSelections = YES;
        if ([self.selectView respondsToSelector:@selector(reloadContacts)]) {
            @try {
                [self.selectView reloadContacts];
            } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
        }
    }

    self.wcpl_initialSelectionToken += 1;
    NSInteger token = self.wcpl_initialSelectionToken;
    [self wcpl_applySelectionsWithRetryCount:24 delay:0.12 token:token];
}

- (void)wcpl_applySelectionsWithRetryCount:(NSInteger)retryCount delay:(NSTimeInterval)delay token:(NSInteger)token {
    if (token != self.wcpl_initialSelectionToken) {
        return;
    }

    [self wcpl_applySelectionsOnce];

    NSUInteger expected = [self wcpl_sanitizedUserNames:self.initialUserNames].count;
    if (expected == 0 || retryCount <= 0) {
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
    NSArray<NSString *> *userNames = [self wcpl_sanitizedUserNames:self.initialUserNames];
    if (userNames.count == 0) {
        return;
    }

    if (!self.wcpl_isContactsLogicReady) {
        return;
    }

    if (!self.wcpl_resolvedInitialUserNames) {
        self.wcpl_resolvedInitialUserNames = [NSMutableSet set];
    }
    [self wcpl_rebuildContactIndexIfNeeded];

    self.wcpl_isApplyingInitialSelections = YES;

    CContactMgr *contactMgr = WCPLGetService(objc_getClass("CContactMgr"));
    ContactsDataLogic *logic = self.selectView.m_contactsDataLogic;
    NSMutableSet<NSString *> *selectedNames = [NSMutableSet setWithArray:[self wcpl_selectedUserNames]];
    BOOL canCheckSelected = [self.selectView respondsToSelector:@selector(isSelected:)];
    BOOL didAddSelection = NO;

    @try {
        for (NSString *userName in userNames) {
            id contact = [self wcpl_contactObjectForUserName:userName contactMgr:contactMgr dataLogic:logic];
            if (!contact) {
                continue;
            }
            [self.wcpl_resolvedInitialUserNames addObject:userName];

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
                [selectedNames addObject:userName];
                didAddSelection = YES;
            } @catch (__unused NSException *exception2) { WCPLCatchLog(exception2); }
        }
    } @finally {
        self.wcpl_isApplyingInitialSelections = NO;
    }

    if (didAddSelection) {
        [self wcpl_refreshSelectionUI];
    }
    self.navigationItem.rightBarButtonItem = [self wcpl_rightBarButtonWithSelectCount:[self getTotalSelectCount]];
}

- (void)wcpl_refreshSelectionUI {
    ContactSelectView *selectView = self.selectView;
    if (!selectView) {
        return;
    }

    if ([selectView respondsToSelector:@selector(loadHeaderViewSelection)]) {
        @try {
            [selectView loadHeaderViewSelection];
        } @catch (__unused NSException *exception0) { WCPLCatchLog(exception0); }
    }

    if ([selectView respondsToSelector:@selector(updateMultiSelectView)]) {
        @try {
            [selectView updateMultiSelectView];
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    if ([selectView respondsToSelector:@selector(reloadTableView)]) {
        @try {
            [selectView reloadTableView];
        } @catch (__unused NSException *exception2) { WCPLCatchLog(exception2); }
        return;
    }

    if ([selectView respondsToSelector:@selector(getTableView)]) {
        @try {
            id tableView = [selectView getTableView];
            if ([tableView respondsToSelector:@selector(reloadData)]) {
                [tableView reloadData];
            }
        } @catch (__unused NSException *exception3) { WCPLCatchLog(exception3); }
    }
}

- (void)wcpl_rebuildContactIndexIfNeeded {
    if (self.wcpl_contactIndex) {
        return;
    }

    ContactsDataLogic *logic = self.selectView.m_contactsDataLogic;
    if (!logic || ![logic respondsToSelector:@selector(getAllContactsDictionary)]) {
        self.wcpl_contactIndex = @{};
        return;
    }

    NSDictionary *all = nil;
    @try {
        all = [logic getAllContactsDictionary];
    } @catch (__unused NSException *exception) {
        all = nil;
    }
    NSDictionary *allContacts = WCPLDictionaryOrNil(all);
    if (allContacts.count == 0) {
        self.wcpl_contactIndex = @{};
        return;
    }

    NSMutableDictionary<NSString *, id> *index = [NSMutableDictionary dictionaryWithCapacity:allContacts.count];
    for (id key in allContacts) {
        id value = allContacts[key];

        NSString *keyName = [self wcpl_userNameFromObject:key];
        NSString *valueName = [self wcpl_userNameFromObject:value];
        NSString *directName = nil;
        directName = WCPLNonEmptyStringOrNil(key);

        if (directName.length > 0 && !index[directName] && [self wcpl_isSelectableContactObject:value expectedUserName:directName]) {
            index[directName] = value;
        }
        if (keyName.length > 0 && !index[keyName] && [self wcpl_isSelectableContactObject:key expectedUserName:keyName]) {
            index[keyName] = key;
        }
        if (valueName.length > 0 && !index[valueName] && [self wcpl_isSelectableContactObject:value expectedUserName:valueName]) {
            index[valueName] = value;
        }
    }

    self.wcpl_contactIndex = index.copy ?: @{};
}

#pragma mark - ContactSelectViewDelegate

- (UIViewController *)getViewController {
    return self;
}

- (void)onSelectContact:(__unused CContact *)arg1 {
    [self wcpl_markUserDidChangeSelection];
}

- (void)onSelectNormalContact:(__unused CContact *)arg1 {
    [self wcpl_markUserDidChangeSelection];
}

- (void)onExistContactDidSelected:(__unused CContact *)arg1 {
    [self wcpl_markUserDidChangeSelection];
}

- (void)onSelectRecommendGroup:(__unused CContact *)arg1 {
    [self wcpl_markUserDidChangeSelection];
}

- (void)onSelectHistoryGroup {
    [self wcpl_markUserDidChangeSelection];
}

- (void)onContactsDataChange {
    self.wcpl_contactIndex = nil;
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
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    return (unsigned long)[selectView.m_dicMultiSelect count];
}

#pragma mark - Private

- (void)wcpl_markUserDidChangeSelection {
    if (!self.wcpl_isApplyingInitialSelections) {
        self.wcpl_userDidChangeSelection = YES;
    }
    self.navigationItem.rightBarButtonItem = [self wcpl_rightBarButtonWithSelectCount:[self getTotalSelectCount]];
}

- (BOOL)wcpl_shouldKeepUserName:(NSString *)userName {
    NSString *normalizedUserName = WCPLNonEmptyStringOrNil(userName);
    if (normalizedUserName.length == 0) {
        return NO;
    }
    BOOL isChatroom = WCPLIsChatRoomName(normalizedUserName);
    if (self.selectType == WCPLUnifiedMultiSelectTypeChatroom) {
        return isChatroom;
    }
    return !isChatroom;
}

- (BOOL)wcpl_isSelectableContactObject:(id)obj expectedUserName:(NSString *)expectedUserName {
    if (!obj) {
        return NO;
    }

    NSString *candidateUserName = [self wcpl_userNameFromObject:obj];
    if (expectedUserName.length > 0 && ![candidateUserName isEqualToString:expectedUserName]) {
        return NO;
    }
    if (![self wcpl_shouldKeepUserName:candidateUserName]) {
        return NO;
    }

    Class contactClass = objc_getClass("CContact");
    if (contactClass && [obj isKindOfClass:contactClass]) {
        return YES;
    }
    if ([obj respondsToSelector:@selector(isOpenImContact)]) {
        return YES;
    }
    return NO;
}

- (NSArray<NSString *> *)wcpl_sanitizedUserNames:(NSArray *)names {
    NSArray *sourceNames = WCPLArrayOrNil(names);
    if (sourceNames.count == 0) {
        return @[];
    }

    NSMutableArray<NSString *> *rawNames = [NSMutableArray arrayWithCapacity:sourceNames.count];
    for (id obj in sourceNames) {
        NSString *value = [self wcpl_userNameFromObject:obj];
        if (value.length > 0) {
            [rawNames addObject:value];
        }
    }

    NSArray<NSString *> *sanitized = WCPLSanitizeIdentifierArray(rawNames);
    if (sanitized.count == 0) {
        return @[];
    }

    NSMutableArray<NSString *> *filtered = [NSMutableArray arrayWithCapacity:sanitized.count];
    for (NSString *value in sanitized) {
        if ([self wcpl_shouldKeepUserName:value]) {
            [filtered addObject:value];
        }
    }
    return filtered.copy ?: @[];
}

- (id)wcpl_contactObjectForUserName:(NSString *)userName
                         contactMgr:(CContactMgr *)contactMgr
                          dataLogic:(ContactsDataLogic *)dataLogic {
    NSString *targetUserName = [self wcpl_userNameFromObject:userName];
    if (![self wcpl_shouldKeepUserName:targetUserName]) {
        return nil;
    }

    id indexed = self.wcpl_contactIndex[targetUserName];
    if ([self wcpl_isSelectableContactObject:indexed expectedUserName:targetUserName]) {
        return indexed;
    }

    id contact = WCPLFindContactByUserName(targetUserName, contactMgr, dataLogic);
    if ([self wcpl_isSelectableContactObject:contact expectedUserName:targetUserName]) {
        return contact;
    }
    return nil;
}

- (NSString *)wcpl_userNameFromObject:(id)obj {
    if (!obj) {
        return nil;
    }
    NSString *directName = WCPLNonEmptyStringOrNil(obj);
    if (directName.length > 0) {
        return directName;
    }

    NSArray<NSString *> *keys = @[@"m_nsUsrName", @"m_nsUserName", @"userName", @"username", @"m_nsChatRoomName"];
    for (NSString *key in keys) {
        @try {
            id value = [obj valueForKey:key];
            NSString *usrName = WCPLTrimText(value);
            if (usrName.length > 0) {
                return usrName;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }
    return nil;
}

- (NSArray<NSString *> *)wcpl_selectedUserNames {
    NSMutableArray<NSString *> *candidateNames = [NSMutableArray array];

    NSArray *orderKeys = nil;
    if ([self.selectView respondsToSelector:@selector(multiSelectOrderKey)]) {
        @try {
            orderKeys = [self.selectView multiSelectOrderKey];
        } @catch (__unused NSException *exception0) {
            orderKeys = nil;
        }
    }
    NSArray *orderedKeys = WCPLArrayOrNil(orderKeys);
    if (orderedKeys.count > 0) {
        for (id obj in orderedKeys) {
            NSString *name = [self wcpl_userNameFromObject:obj];
            if (name.length > 0) {
                [candidateNames addObject:name];
            }
        }
        NSArray<NSString *> *orderedNames = [self wcpl_sanitizedUserNames:candidateNames];
        if (orderedNames.count > 0) {
            return orderedNames;
        }
    }

    NSDictionary *selected = @{};
    if ([self.selectView respondsToSelector:@selector(getDicSelectedContacts)]) {
        @try {
            id value = [self.selectView getDicSelectedContacts];
            selected = WCPLDictionaryOrNil(value) ?: @{};
        } @catch (__unused NSException *exception) {
            selected = @{};
        }
    }
    if (selected.count == 0) {
        selected = self.selectView.m_dicMultiSelect ?: @{};
    }

    for (id key in selected) {
        NSString *keyName = [self wcpl_userNameFromObject:key];
        NSString *valueName = [self wcpl_userNameFromObject:selected[key]];
        NSString *name = nil;

        if ([self wcpl_shouldKeepUserName:valueName]) {
            name = valueName;
        } else if ([self wcpl_shouldKeepUserName:keyName]) {
            name = keyName;
        }

        if (name.length > 0) {
            [candidateNames addObject:name];
        }
    }
    return [self wcpl_sanitizedUserNames:candidateNames];
}

- (BOOL)wcpl_isContactsLogicReady {
    ContactsDataLogic *logic = self.selectView.m_contactsDataLogic;
    if (!logic || ![logic respondsToSelector:@selector(getAllContactsDictionary)]) {
        return NO;
    }
    @try {
        NSDictionary *all = [logic getAllContactsDictionary];
        return WCPLDictionaryOrNil(all).count > 0;
    } @catch (__unused NSException *exception) {
        return NO;
    }
}

@end
