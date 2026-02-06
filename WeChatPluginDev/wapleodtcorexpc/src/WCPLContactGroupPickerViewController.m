#import "WCPLContactGroupPickerViewController.h"
#import "WCPLPickerItem.h"

typedef NS_ENUM(NSUInteger, WCPLPickerTypeSegment) {
    WCPLPickerTypeSegmentAll = 0,
    WCPLPickerTypeSegmentGroup = 1,
    WCPLPickerTypeSegmentUser = 2,
};

@interface WCPLContactGroupPickerViewController () <UITableViewDataSource, UITableViewDelegate, UISearchResultsUpdating>

@property (nonatomic, copy) NSArray<WCPLPickerItem *> *allItems;
@property (nonatomic, copy) NSArray<WCPLPickerItem *> *filteredItems;
@property (nonatomic, assign) WCPLContactGroupPickerMode pickerMode;
@property (nonatomic, assign) WCPLPickerTypeSegment typeSegment;

@property (nonatomic, strong) UITableView *tableView;
@property (nonatomic, strong) UISearchController *searchController;
@property (nonatomic, strong, nullable) UISegmentedControl *typeSegmentControl;

@property (nonatomic, strong) NSMutableOrderedSet<NSString *> *selectedIdentifierSet;
@property (nonatomic, strong) NSDictionary<NSString *, WCPLPickerItem *> *itemByIdentifier;

@end

@implementation WCPLContactGroupPickerViewController

- (instancetype)initWithItems:(NSArray<WCPLPickerItem *> *)items
                   pickerMode:(WCPLContactGroupPickerMode)pickerMode
       preselectedIdentifiers:(NSSet<NSString *> *)preselectedIdentifiers {
    self = [super initWithNibName:nil bundle:nil];
    if (self) {
        _allItems = [self wcpl_sanitizedItems:items];
        _filteredItems = _allItems;
        _pickerMode = pickerMode;
        _enableTypeSegment = YES;
        _enableSectionByType = NO;
        _typeSegment = WCPLPickerTypeSegmentAll;
        _selectedIdentifierSet = [NSMutableOrderedSet orderedSet];

        if (pickerMode == WCPLContactGroupPickerModeSingle) {
            NSString *first = preselectedIdentifiers.allObjects.firstObject;
            if (first.length > 0) {
                [_selectedIdentifierSet addObject:first];
            }
        } else {
            for (NSString *identifier in preselectedIdentifiers) {
                if ([identifier isKindOfClass:[NSString class]] && identifier.length > 0) {
                    [_selectedIdentifierSet addObject:identifier];
                }
            }
        }

        NSMutableDictionary<NSString *, WCPLPickerItem *> *map = [NSMutableDictionary dictionary];
        for (WCPLPickerItem *item in _allItems) {
            if (item.identifier.length == 0 || map[item.identifier] != nil) {
                continue;
            }
            map[item.identifier] = item;
        }
        _itemByIdentifier = map.copy;
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];

    self.view.backgroundColor = [UIColor systemBackgroundColor];
    [self wcpl_setupNavigation];
    [self wcpl_setupTableView];
    [self wcpl_setupSearch];
    [self wcpl_setupTypeSegmentIfNeeded];
    [self wcpl_applyFilterAndReload];
}

#pragma mark - Public

- (NSArray<NSString *> *)selectedIdentifiers {
    return self.selectedIdentifierSet.array;
}

- (NSArray<WCPLPickerItem *> *)selectedItems {
    NSMutableArray<WCPLPickerItem *> *results = [NSMutableArray array];
    for (NSString *identifier in self.selectedIdentifierSet) {
        WCPLPickerItem *item = self.itemByIdentifier[identifier];
        if (item) {
            [results addObject:item];
        }
    }
    return results.copy;
}

#pragma mark - Setup

- (void)wcpl_setupNavigation {
    self.title = self.titleText.length > 0 ? self.titleText : @"选择";
    self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc] initWithTitle:@"取消"
                                                                              style:UIBarButtonItemStylePlain
                                                                             target:self
                                                                             action:@selector(wcpl_onCancel)];

    if (self.pickerMode == WCPLContactGroupPickerModeMulti) {
        self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc] initWithTitle:@"完成"
                                                                                   style:UIBarButtonItemStyleDone
                                                                                  target:self
                                                                                  action:@selector(wcpl_onDone)];
        [self wcpl_updateTitleForSelectionCount];
    }
}

- (void)wcpl_setupTableView {
    UITableViewStyle style = UITableViewStyleGrouped;
    if (@available(iOS 13.0, *)) {
        style = UITableViewStyleInsetGrouped;
    }
    self.tableView = [[UITableView alloc] initWithFrame:CGRectZero style:style];
    self.tableView.translatesAutoresizingMaskIntoConstraints = NO;
    self.tableView.dataSource = self;
    self.tableView.delegate = self;
    self.tableView.rowHeight = 56.0f;
    [self.view addSubview:self.tableView];

    [NSLayoutConstraint activateConstraints:@[
        [self.tableView.topAnchor constraintEqualToAnchor:self.view.topAnchor],
        [self.tableView.leadingAnchor constraintEqualToAnchor:self.view.leadingAnchor],
        [self.tableView.trailingAnchor constraintEqualToAnchor:self.view.trailingAnchor],
        [self.tableView.bottomAnchor constraintEqualToAnchor:self.view.bottomAnchor],
    ]];
}

- (void)wcpl_setupSearch {
    self.searchController = [[UISearchController alloc] initWithSearchResultsController:nil];
    self.searchController.obscuresBackgroundDuringPresentation = NO;
    self.searchController.searchResultsUpdater = self;
    self.searchController.searchBar.placeholder = @"搜索联系人或群聊";
    self.navigationItem.searchController = self.searchController;
    self.navigationItem.hidesSearchBarWhenScrolling = NO;
    self.definesPresentationContext = YES;
}

- (void)wcpl_setupTypeSegmentIfNeeded {
    if (!self.enableTypeSegment) {
        return;
    }

    UISegmentedControl *segment = [[UISegmentedControl alloc] initWithItems:@[@"全部", @"仅群聊", @"仅联系人"]];
    segment.selectedSegmentIndex = 0;
    [segment addTarget:self action:@selector(wcpl_onTypeSegmentChange:) forControlEvents:UIControlEventValueChanged];
    self.typeSegmentControl = segment;

    UIView *container = [[UIView alloc] initWithFrame:CGRectMake(0, 0, CGRectGetWidth(self.view.bounds), 48.0f)];
    segment.translatesAutoresizingMaskIntoConstraints = NO;
    [container addSubview:segment];
    [NSLayoutConstraint activateConstraints:@[
        [segment.leadingAnchor constraintEqualToAnchor:container.leadingAnchor constant:16.0f],
        [segment.trailingAnchor constraintEqualToAnchor:container.trailingAnchor constant:-16.0f],
        [segment.centerYAnchor constraintEqualToAnchor:container.centerYAnchor],
    ]];
    self.tableView.tableHeaderView = container;
    CGRect frame = container.frame;
    frame.size.height = 48.0f;
    container.frame = frame;
    self.tableView.tableHeaderView = container;
}

#pragma mark - Actions

- (void)wcpl_onCancel {
    if (self.onCancel) {
        self.onCancel();
    }
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)wcpl_onDone {
    if (self.onFinish) {
        self.onFinish([self selectedItems], [self selectedIdentifiers]);
    }
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)wcpl_onTypeSegmentChange:(UISegmentedControl *)sender {
    self.typeSegment = (WCPLPickerTypeSegment)sender.selectedSegmentIndex;
    [self wcpl_applyFilterAndReload];
}

#pragma mark - UITableViewDataSource

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    if (!self.enableSectionByType) {
        return 1;
    }

    BOOL hasGroup = NO;
    BOOL hasUser = NO;
    for (WCPLPickerItem *item in self.filteredItems) {
        if (item.type == WCPLPickerItemTypeGroup) {
            hasGroup = YES;
        } else {
            hasUser = YES;
        }
    }
    return (hasGroup ? 1 : 0) + (hasUser ? 1 : 0);
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    if (!self.enableSectionByType) {
        return self.filteredItems.count;
    }
    return [self wcpl_itemsForSection:section].count;
}

- (NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section {
    if (!self.enableSectionByType) {
        return nil;
    }
    NSArray<WCPLPickerItem *> *items = [self wcpl_itemsForSection:section];
    if (items.count == 0) {
        return nil;
    }
    return (items.firstObject.type == WCPLPickerItemTypeGroup) ? @"群聊" : @"联系人";
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"WCPLPickerCell"];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:@"WCPLPickerCell"];
    }
    cell.selectionStyle = UITableViewCellSelectionStyleDefault;

    WCPLPickerItem *item = [self wcpl_itemAtIndexPath:indexPath];
    cell.textLabel.text = item.displayName.length > 0 ? item.displayName : item.identifier;
    cell.detailTextLabel.text = item.subtitle;
    cell.detailTextLabel.textColor = [UIColor secondaryLabelColor];

    if (item.avatarImage) {
        cell.imageView.image = item.avatarImage;
    } else {
        UIImage *placeholder = [self wcpl_placeholderAvatarForItem:item];
        cell.imageView.image = placeholder;
    }

    BOOL selected = [self.selectedIdentifierSet containsObject:item.identifier];
    cell.accessoryType = selected ? UITableViewCellAccessoryCheckmark : UITableViewCellAccessoryNone;
    cell.userInteractionEnabled = item.isSelectable;
    cell.textLabel.enabled = item.isSelectable;
    cell.detailTextLabel.enabled = item.isSelectable;
    cell.contentView.alpha = item.isSelectable ? 1.0f : 0.45f;

    return cell;
}

#pragma mark - UITableViewDelegate

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    [tableView deselectRowAtIndexPath:indexPath animated:YES];

    WCPLPickerItem *item = [self wcpl_itemAtIndexPath:indexPath];
    if (!item.isSelectable || item.identifier.length == 0) {
        return;
    }

    if (self.pickerMode == WCPLContactGroupPickerModeSingle) {
        [self.selectedIdentifierSet removeAllObjects];
        [self.selectedIdentifierSet addObject:item.identifier];
        [self.tableView reloadData];

        if (self.onSelect) {
            self.onSelect(item);
        }
        [self dismissViewControllerAnimated:YES completion:nil];
        return;
    }

    if ([self.selectedIdentifierSet containsObject:item.identifier]) {
        [self.selectedIdentifierSet removeObject:item.identifier];
    } else {
        [self.selectedIdentifierSet addObject:item.identifier];
    }

    [self wcpl_updateTitleForSelectionCount];
    [self.tableView reloadRowsAtIndexPaths:@[indexPath] withRowAnimation:UITableViewRowAnimationNone];
}

#pragma mark - UISearchResultsUpdating

- (void)updateSearchResultsForSearchController:(UISearchController *)searchController {
    [self wcpl_applyFilterAndReload];
}

#pragma mark - Private

- (NSArray<WCPLPickerItem *> *)wcpl_sanitizedItems:(NSArray<WCPLPickerItem *> *)items {
    if (![items isKindOfClass:[NSArray class]]) {
        return @[];
    }

    NSMutableArray<WCPLPickerItem *> *results = [NSMutableArray array];
    NSMutableSet<NSString *> *seen = [NSMutableSet set];
    for (id obj in items) {
        if (![obj isKindOfClass:[WCPLPickerItem class]]) {
            continue;
        }
        WCPLPickerItem *item = (WCPLPickerItem *)obj;
        NSString *identifier = [item.identifier stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (identifier.length == 0 || [seen containsObject:identifier]) {
            continue;
        }
        item.identifier = identifier;
        if (item.displayName.length == 0) {
            item.displayName = identifier;
        }
        [seen addObject:identifier];
        [results addObject:item];
    }
    return results.copy;
}

- (NSArray<WCPLPickerItem *> *)wcpl_itemsForSection:(NSInteger)section {
    NSMutableArray<WCPLPickerItem *> *groups = [NSMutableArray array];
    NSMutableArray<WCPLPickerItem *> *users = [NSMutableArray array];
    for (WCPLPickerItem *item in self.filteredItems) {
        if (item.type == WCPLPickerItemTypeGroup) {
            [groups addObject:item];
        } else {
            [users addObject:item];
        }
    }

    if (groups.count > 0 && users.count > 0) {
        return (section == 0) ? groups : users;
    }
    if (groups.count > 0) {
        return groups;
    }
    return users;
}

- (WCPLPickerItem *)wcpl_itemAtIndexPath:(NSIndexPath *)indexPath {
    if (!self.enableSectionByType) {
        return self.filteredItems[indexPath.row];
    }
    return [self wcpl_itemsForSection:indexPath.section][indexPath.row];
}

- (void)wcpl_applyFilterAndReload {
    NSString *searchText = [self.searchController.searchBar.text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    NSMutableArray<WCPLPickerItem *> *results = [NSMutableArray array];

    for (WCPLPickerItem *item in self.allItems) {
        if (![self wcpl_itemPassesTypeSegment:item]) {
            continue;
        }

        if (self.itemFilter && !self.itemFilter(item)) {
            continue;
        }

        if (searchText.length > 0) {
            BOOL matchName = [item.displayName rangeOfString:searchText options:NSCaseInsensitiveSearch].location != NSNotFound;
            BOOL matchSubtitle = (item.subtitle.length > 0) && ([item.subtitle rangeOfString:searchText options:NSCaseInsensitiveSearch].location != NSNotFound);
            BOOL matchIdentifier = [item.identifier rangeOfString:searchText options:NSCaseInsensitiveSearch].location != NSNotFound;
            if (!matchName && !matchSubtitle && !matchIdentifier) {
                continue;
            }
        }

        [results addObject:item];
    }

    self.filteredItems = results.copy;
    [self.tableView reloadData];
}

- (BOOL)wcpl_itemPassesTypeSegment:(WCPLPickerItem *)item {
    switch (self.typeSegment) {
        case WCPLPickerTypeSegmentGroup:
            return item.type == WCPLPickerItemTypeGroup;
        case WCPLPickerTypeSegmentUser:
            return item.type == WCPLPickerItemTypeUser;
        case WCPLPickerTypeSegmentAll:
        default:
            return YES;
    }
}

- (UIImage *)wcpl_placeholderAvatarForItem:(WCPLPickerItem *)item {
    CGSize size = CGSizeMake(36.0f, 36.0f);
    UIGraphicsBeginImageContextWithOptions(size, NO, 0.0f);
    CGContextRef context = UIGraphicsGetCurrentContext();

    UIColor *fill = (item.type == WCPLPickerItemTypeGroup)
                    ? [UIColor colorWithRed:0.30 green:0.60 blue:0.95 alpha:1.0]
                    : [UIColor colorWithRed:0.42 green:0.76 blue:0.55 alpha:1.0];
    CGContextSetFillColorWithColor(context, fill.CGColor);
    UIBezierPath *path = [UIBezierPath bezierPathWithRoundedRect:CGRectMake(0, 0, size.width, size.height)
                                                    cornerRadius:8.0f];
    [path fill];

    NSString *text = (item.type == WCPLPickerItemTypeGroup) ? @"群" : @"人";
    NSDictionary *attributes = @{
        NSFontAttributeName: [UIFont boldSystemFontOfSize:15.0f],
        NSForegroundColorAttributeName: [UIColor whiteColor]
    };
    CGSize textSize = [text sizeWithAttributes:attributes];
    CGRect textRect = CGRectMake((size.width - textSize.width) / 2.0f,
                                 (size.height - textSize.height) / 2.0f,
                                 textSize.width,
                                 textSize.height);
    [text drawInRect:textRect withAttributes:attributes];

    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return image;
}

- (void)wcpl_updateTitleForSelectionCount {
    if (self.pickerMode != WCPLContactGroupPickerModeMulti) {
        return;
    }

    NSUInteger count = self.selectedIdentifierSet.count;
    NSString *baseTitle = self.titleText.length > 0 ? self.titleText : @"选择";
    self.title = [NSString stringWithFormat:@"%@ (%lu)", baseTitle, (unsigned long)count];

    NSString *doneTitle = (count == 0) ? @"完成" : [NSString stringWithFormat:@"完成(%lu)", (unsigned long)count];
    self.navigationItem.rightBarButtonItem.title = doneTitle;
}

@end
