//
// WCPLSettingViewController.m
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WCPLSettingViewController.h"
#import "WCPLRedEnvelopConfig.h"
#import "WCPLMultiSelectGroupsViewController.h"
#import "WCPLFuncService.h"
#import "WeChatRedEnvelop.h"
#import <objc/runtime.h>
#import <UniformTypeIdentifiers/UniformTypeIdentifiers.h>

@interface WCPLSettingViewController () <MultiSelectGroupsViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIDocumentPickerDelegate>

@property (nonatomic, strong) WCTableViewManager *tableViewMgr;

@end

@implementation WCPLSettingViewController

- (instancetype)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if (self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil]) {
        CGFloat tabY = WCPLStatusBarAndNavigationBarHeight;
        CGFloat tabW = WCPLScreenWidth;
        CGFloat tabH = WCPLScreenHeight - WCPLStatusBarAndNavigationBarHeight - WCPLViewSafeBottomMargin;
        _tableViewMgr = [[objc_getClass("WCTableViewManager") alloc] initWithFrame:CGRectMake(0, tabY, tabW, tabH) style:UITableViewStyleGrouped];
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self initTitle];
    [self reloadTableData];
    
    MMTableView *tableView = [self.tableViewMgr getTableView];
    [self.view addSubview:tableView];

    self.view.backgroundColor = tableView.backgroundColor;
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self.navigationController setNavigationBarHidden:NO animated:animated];
}

- (void)viewDidDisappear:(BOOL)animated {
    [super viewDidDisappear:animated];
    [self stopLoading];
}

- (void)initTitle {
    self.title = @"微信辣椒 by guanxi";
    
    [self.navigationController.navigationBar setTitleTextAttributes:@{NSFontAttributeName: [UIFont boldSystemFontOfSize:17.0]}];
    self.navigationItem.leftBarButtonItem = [objc_getClass("MMUICommonUtil") getBarButtonWithImageName:@"ui-resource_back" target:self action:@selector(onBack:) style:0 accessibility:nil];
}

- (void)onBack:(UIBarButtonItem *)item {
    [self.navigationController popViewControllerAnimated:YES];
}

- (void)reloadTableData {
    [self.tableViewMgr clearAllSection];

    [self addBasicSettingSection];
    [self addAdvanceSettingSection];
    [self addOtherSettingSection];
    [self addMessageReplySettingSection];
    [self addSwipeQuoteSettingSection];

    MMTableView *tableView = [self.tableViewMgr getTableView];
    [tableView reloadData];
}

- (UIInterfaceOrientationMask)supportedInterfaceOrientations {
    return UIInterfaceOrientationMaskPortrait;
}

#pragma mark - BasicSetting

- (void)addBasicSettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"红包设置"];
    
    [section addCell:[self createAutoReceiveRedEnvelopCell]];
    [section addCell:[self createReceiveSelfRedEnvelopCell]];
    [section addCell:[self createDelaySettingCell]];
    
    [self.tableViewMgr addSection:section];
}

- (WCTableViewNormalCellManager *)createAutoReceiveRedEnvelopCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(switchRedEnvelop:) target:self title:@"自动抢红包" on:[WCPLRedEnvelopConfig sharedConfig].autoReceiveEnable];
}

- (void)switchRedEnvelop:(UISwitch *)envelopSwitch {
    [WCPLRedEnvelopConfig sharedConfig].autoReceiveEnable = envelopSwitch.on;
    [self reloadTableData];
}

- (WCTableViewNormalCellManager *)createReceiveSelfRedEnvelopCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingReceiveSelfRedEnvelop:) target:self title:@"抢自己发的红包" on:[WCPLRedEnvelopConfig sharedConfig].receiveSelfRedEnvelop];
}

- (void)settingReceiveSelfRedEnvelop:(UISwitch *)receiveSwitch {
    [WCPLRedEnvelopConfig sharedConfig].receiveSelfRedEnvelop = receiveSwitch.on;
}

- (WCTableViewNormalCellManager *)createDelaySettingCell {
    NSInteger delaySeconds = [WCPLRedEnvelopConfig sharedConfig].delaySeconds;
    NSString *delayString  = delaySeconds == 0 ? @"不延迟" : [NSString stringWithFormat:@"%ld 秒", (long)delaySeconds];
    
    WCTableViewNormalCellManager *cell;
    if ([WCPLRedEnvelopConfig sharedConfig].autoReceiveEnable) {
        cell = [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(settingDelay) target:self title:@"延迟抢红包" rightValue:delayString accessoryType:1];
    } else {
        cell = [objc_getClass("WCTableViewNormalCellManager") normalCellForTitle:@"延迟抢红包" rightValue:@"抢红包已关闭"];
    }
    
    return cell;
}

- (void)settingDelay {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"延迟抢红包(秒)"
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleAlert];

    [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
        textField.placeholder = @"延迟时长";
        textField.keyboardType = UIKeyboardTypeNumberPad;
    }];

    UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil];
    UIAlertAction *confirmAction = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        NSString *text = alert.textFields.firstObject.text;
        [WCPLRedEnvelopConfig sharedConfig].delaySeconds = [text integerValue];
        [self reloadTableData];
    }];

    [alert addAction:cancelAction];
    [alert addAction:confirmAction];

    [self presentViewController:alert animated:YES completion:nil];
}

#pragma mark - Advanced Setting

- (void)addAdvanceSettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"高级功能"];
    
    [section addCell:[self createQueueCell]];
    [section addCell:[self createBlackListCell]];
    
    [self.tableViewMgr addSection:section];
}

- (WCTableViewNormalCellManager *)createQueueCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingReceiveByQueue:) target:self title:@"防止同时抢多个红包" on:[WCPLRedEnvelopConfig sharedConfig].serialReceive];
}

- (void)settingReceiveByQueue:(UISwitch *)queueSwitch {
    [WCPLRedEnvelopConfig sharedConfig].serialReceive = queueSwitch.on;
}

- (WCTableViewNormalCellManager *)createBlackListCell {
    if ([WCPLRedEnvelopConfig sharedConfig].blackList.count == 0) {
        return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showBlackList) target:self title:@"群聊过滤" rightValue:@"已关闭" accessoryType:1];
    } else {
        NSString *blackListCountStr = [NSString stringWithFormat:@"已选 %lu 个群", (unsigned long)[WCPLRedEnvelopConfig sharedConfig].blackList.count];
        return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showBlackList) target:self title:@"群聊过滤" rightValue:blackListCountStr accessoryType:1];
    }
}

- (void)showBlackList {
    WCPLMultiSelectGroupsViewController *multiSGVC = [[WCPLMultiSelectGroupsViewController alloc] initWithBlackList:[WCPLRedEnvelopConfig sharedConfig].blackList];
    multiSGVC.delegate = self;
    
    MMUINavigationController *nc = [[objc_getClass("MMUINavigationController") alloc] initWithRootViewController:multiSGVC];
    
    [self presentViewController:nc animated:YES completion:nil];
}

#pragma mark - Other

- (void)addOtherSettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"其他"];
    
    [section addCell:[self createAbortRemokeMessageCell]];
    
    [self.tableViewMgr addSection:section];
}

- (WCTableViewNormalCellManager *)createAbortRemokeMessageCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingMessageRevoke:) target:self title:@"消息防撤回" on:[WCPLRedEnvelopConfig sharedConfig].revokeEnable];
}

- (void)settingMessageRevoke:(UISwitch *)sender {
    [WCPLRedEnvelopConfig sharedConfig].revokeEnable = sender.on;
}

#pragma mark - Message Reply Setting

- (void)addMessageReplySettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"消息复读机"];

    [section addCell:[self createMessageReplySwitchCell]];

    // 只有启用复读机时才显示按钮样式设置
    if ([WCPLRedEnvelopConfig sharedConfig].messageReplyEnable) {
        [section addCell:[self createRepeatButtonStyleCell]];
    }

    [self.tableViewMgr addSection:section];
}

#pragma mark - Swipe Quote Setting

- (void)addSwipeQuoteSettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"消息手势" Footer:@"提示：复读手势不支持媒体消息（图片、视频、表情包等）"];

    // 消息手势总开关
    [section addCell:[self createSwipeGestureSwitchCell]];

    // 只有启用总开关时才显示详细设置
    if ([WCPLRedEnvelopConfig sharedConfig].swipeGestureEnable) {
        // 左滑功能开关
        [section addCell:[self createSwipeQuoteSwitchCell]];

        // 只有启用左滑功能时才显示详细设置
        if ([WCPLRedEnvelopConfig sharedConfig].swipeQuoteEnable) {
            [section addCell:[self createSwipeLeftOtherActionCell]];
            [section addCell:[self createSwipeLeftSelfActionCell]];
        }

        // 右滑功能开关
        [section addCell:[self createSwipeRightSwitchCell]];

        // 只有启用右滑功能时才显示详细设置
        if ([WCPLRedEnvelopConfig sharedConfig].swipeRightEnable) {
            [section addCell:[self createSwipeRightOtherActionCell]];
            [section addCell:[self createSwipeRightSelfActionCell]];
        }

        // 引用消息点击跳转
        [section addCell:[self createTapReferJumpSwitchCell]];
    }

    [self.tableViewMgr addSection:section];
}

- (WCTableViewNormalCellManager *)createSwipeGestureSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingSwipeGesture:) target:self title:@"启用消息手势" on:[WCPLRedEnvelopConfig sharedConfig].swipeGestureEnable];
}

- (WCTableViewNormalCellManager *)createSwipeQuoteSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingSwipeQuote:) target:self title:@"  消息左滑功能" on:[WCPLRedEnvelopConfig sharedConfig].swipeQuoteEnable];
}

- (WCTableViewNormalCellManager *)createSwipeRightSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingSwipeRight:) target:self title:@"  消息右滑功能" on:[WCPLRedEnvelopConfig sharedConfig].swipeRightEnable];
}

- (WCTableViewNormalCellManager *)createTapReferJumpSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingTapReferJump:) target:self title:@"  引用消息点击跳转" on:[WCPLRedEnvelopConfig sharedConfig].tapReferJumpEnable];
}

// 获取对方消息操作名称（引用、复读、删除）
- (NSString *)actionNameForOtherMessage:(NSInteger)action {
    switch (action) {
        case 0: return @"引用";
        case 1: return @"复读";
        case 2: return @"删除";
        default: return @"引用";
    }
}

// 获取己方消息操作名称（引用、复读、删除、撤回）
- (NSString *)actionNameForSelfMessage:(NSInteger)action {
    switch (action) {
        case 0: return @"引用";
        case 1: return @"复读";
        case 2: return @"删除";
        case 3: return @"撤回";
        default: return @"引用";
    }
}

- (WCTableViewNormalCellManager *)createSwipeLeftOtherActionCell {
    NSInteger action = [WCPLRedEnvelopConfig sharedConfig].swipeLeftOtherAction;
    NSString *actionName = [self actionNameForOtherMessage:action];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showSwipeLeftOtherActionPicker) target:self title:@"      左滑对方消息" rightValue:actionName accessoryType:1];
}

- (WCTableViewNormalCellManager *)createSwipeLeftSelfActionCell {
    NSInteger action = [WCPLRedEnvelopConfig sharedConfig].swipeLeftSelfAction;
    NSString *actionName = [self actionNameForSelfMessage:action];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showSwipeLeftSelfActionPicker) target:self title:@"      左滑己方消息" rightValue:actionName accessoryType:1];
}

- (WCTableViewNormalCellManager *)createSwipeRightOtherActionCell {
    NSInteger action = [WCPLRedEnvelopConfig sharedConfig].swipeRightOtherAction;
    NSString *actionName = [self actionNameForOtherMessage:action];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showSwipeRightOtherActionPicker) target:self title:@"      右滑对方消息" rightValue:actionName accessoryType:1];
}

- (WCTableViewNormalCellManager *)createSwipeRightSelfActionCell {
    NSInteger action = [WCPLRedEnvelopConfig sharedConfig].swipeRightSelfAction;
    NSString *actionName = [self actionNameForSelfMessage:action];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showSwipeRightSelfActionPicker) target:self title:@"      右滑己方消息" rightValue:actionName accessoryType:1];
}

- (void)settingSwipeGesture:(UISwitch *)sender {
    [WCPLRedEnvelopConfig sharedConfig].swipeGestureEnable = sender.on;
    NSLog(@"[WCPL] Swipe gesture feature changed: %@", sender.on ? @"Enabled" : @"Disabled");
    [self reloadTableData];
}

- (void)settingSwipeQuote:(UISwitch *)sender {
    [WCPLRedEnvelopConfig sharedConfig].swipeQuoteEnable = sender.on;
    NSLog(@"[WCPL] Swipe left feature changed: %@", sender.on ? @"Enabled" : @"Disabled");
    [self reloadTableData];
}

- (void)settingSwipeRight:(UISwitch *)sender {
    [WCPLRedEnvelopConfig sharedConfig].swipeRightEnable = sender.on;
    NSLog(@"[WCPL] Swipe right feature changed: %@", sender.on ? @"Enabled" : @"Disabled");
    [self reloadTableData];
}

- (void)settingTapReferJump:(UISwitch *)sender {
    [WCPLRedEnvelopConfig sharedConfig].tapReferJumpEnable = sender.on;
    NSLog(@"[WCPL] Tap refer jump feature changed: %@", sender.on ? @"Enabled" : @"Disabled");
}

// 左滑对方消息操作选择器
- (void)showSwipeLeftOtherActionPicker {
    [self showActionPickerWithTitle:@"左滑对方消息操作"
                           isSelf:NO
                       completion:^(NSInteger action) {
        [WCPLRedEnvelopConfig sharedConfig].swipeLeftOtherAction = action;
        [self reloadTableData];
    }];
}

// 左滑己方消息操作选择器
- (void)showSwipeLeftSelfActionPicker {
    [self showActionPickerWithTitle:@"左滑己方消息操作"
                           isSelf:YES
                       completion:^(NSInteger action) {
        [WCPLRedEnvelopConfig sharedConfig].swipeLeftSelfAction = action;
        [self reloadTableData];
    }];
}

// 右滑对方消息操作选择器
- (void)showSwipeRightOtherActionPicker {
    [self showActionPickerWithTitle:@"右滑对方消息操作"
                           isSelf:NO
                       completion:^(NSInteger action) {
        [WCPLRedEnvelopConfig sharedConfig].swipeRightOtherAction = action;
        [self reloadTableData];
    }];
}

// 右滑己方消息操作选择器
- (void)showSwipeRightSelfActionPicker {
    [self showActionPickerWithTitle:@"右滑己方消息操作"
                           isSelf:YES
                       completion:^(NSInteger action) {
        [WCPLRedEnvelopConfig sharedConfig].swipeRightSelfAction = action;
        [self reloadTableData];
    }];
}

// 通用操作选择器
- (void)showActionPickerWithTitle:(NSString *)title isSelf:(BOOL)isSelf completion:(void(^)(NSInteger action))completion {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:title
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    // 引用
    UIAlertAction *quoteAction = [UIAlertAction actionWithTitle:@"引用" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        if (completion) completion(0);
    }];

    // 复读
    UIAlertAction *repeatAction = [UIAlertAction actionWithTitle:@"复读" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        if (completion) completion(1);
    }];

    // 删除
    UIAlertAction *deleteAction = [UIAlertAction actionWithTitle:@"删除" style:UIAlertActionStyleDestructive handler:^(UIAlertAction *action) {
        if (completion) completion(2);
    }];

    [alert addAction:quoteAction];
    [alert addAction:repeatAction];
    [alert addAction:deleteAction];

    // 己方消息额外有撤回选项
    if (isSelf) {
        UIAlertAction *revokeAction = [UIAlertAction actionWithTitle:@"撤回" style:UIAlertActionStyleDestructive handler:^(UIAlertAction *action) {
            if (completion) completion(3);
        }];
        [alert addAction:revokeAction];
    }

    UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil];
    [alert addAction:cancelAction];

    [self presentViewController:alert animated:YES completion:nil];
}

- (WCTableViewNormalCellManager *)createMessageReplySwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingMessageReply:) target:self title:@"启用复读机 (在消息旁显示按钮)" on:[WCPLRedEnvelopConfig sharedConfig].messageReplyEnable];
}

- (WCTableViewNormalCellManager *)createRepeatButtonStyleCell {
    NSArray *styleNames = @[@"+1 文字", @"内置图标", @"自定义图片"];
    NSInteger currentStyle = [WCPLRedEnvelopConfig sharedConfig].repeatButtonStyle;
    NSString *styleName = (currentStyle >= 0 && currentStyle < styleNames.count) ? styleNames[currentStyle] : styleNames[0];

    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showRepeatButtonStylePicker) target:self title:@"按钮样式" rightValue:styleName accessoryType:1];
}

- (void)showRepeatButtonStylePicker {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"选择按钮样式"
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    // 样式 0: +1 文字
    UIAlertAction *textAction = [UIAlertAction actionWithTitle:@"+1 文字 (默认)" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        [WCPLRedEnvelopConfig sharedConfig].repeatButtonStyle = 0;
        [self reloadTableData];
    }];

    // 样式 1: 内置图标
    UIAlertAction *iconAction = [UIAlertAction actionWithTitle:@"内置图标 (emoji)" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        [WCPLRedEnvelopConfig sharedConfig].repeatButtonStyle = 1;
        [self showBuiltInIconPicker];
    }];

    // 样式 2: 自定义图片
    UIAlertAction *customAction = [UIAlertAction actionWithTitle:@"自定义图片" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        [WCPLRedEnvelopConfig sharedConfig].repeatButtonStyle = 2;
        [self showImagePicker];
    }];

    UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil];

    [alert addAction:textAction];
    [alert addAction:iconAction];
    [alert addAction:customAction];
    [alert addAction:cancelAction];

    [self presentViewController:alert animated:YES completion:nil];
}

- (void)showBuiltInIconPicker {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"选择图标"
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    NSArray *icons = @[@"+1", @"👍", @"❤️", @"😂", @"🔥", @"👏", @"🎉"];

    for (NSInteger i = 0; i < icons.count; i++) {
        NSString *icon = icons[i];
        UIAlertAction *action = [UIAlertAction actionWithTitle:icon style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
            [WCPLRedEnvelopConfig sharedConfig].repeatButtonIconIndex = i;
            [self reloadTableData];
        }];
        [alert addAction:action];
    }

    UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:^(UIAlertAction *action) {
        [self reloadTableData];
    }];
    [alert addAction:cancelAction];

    [self presentViewController:alert animated:YES completion:nil];
}

- (void)showImagePicker {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"选择图片来源"
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    // 从相册选择
    UIAlertAction *albumAction = [UIAlertAction actionWithTitle:@"从相册选择" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        UIImagePickerController *picker = [[UIImagePickerController alloc] init];
        picker.sourceType = UIImagePickerControllerSourceTypePhotoLibrary;
        picker.delegate = self;
        picker.allowsEditing = YES;
        [self presentViewController:picker animated:YES completion:nil];
    }];

    // 从文件选择 (iOS 14+)
    UIAlertAction *fileAction = [UIAlertAction actionWithTitle:@"从文件选择" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        UIDocumentPickerViewController *documentPicker;
        if (@available(iOS 14.0, *)) {
            // iOS 14+ 使用新 API
            documentPicker = [[UIDocumentPickerViewController alloc] initForOpeningContentTypes:@[UTTypeImage] asCopy:YES];
        } else {
            // iOS 14 以下使用旧 API
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
            NSArray *documentTypes = @[@"public.image"];
            documentPicker = [[UIDocumentPickerViewController alloc] initWithDocumentTypes:documentTypes inMode:UIDocumentPickerModeImport];
#pragma clang diagnostic pop
        }
        documentPicker.delegate = self;
        documentPicker.allowsMultipleSelection = NO;
        [self presentViewController:documentPicker animated:YES completion:nil];
    }];

    // 输入图片 URL
    UIAlertAction *urlAction = [UIAlertAction actionWithTitle:@"输入图片路径" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        [self showImageURLInput];
    }];

    UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:^(UIAlertAction *action) {
        [self reloadTableData];
    }];

    [alert addAction:albumAction];
    [alert addAction:fileAction];
    [alert addAction:urlAction];
    [alert addAction:cancelAction];

    [self presentViewController:alert animated:YES completion:nil];
}

// 输入图片路径
- (void)showImageURLInput {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"输入图片路径"
                                                                   message:@"支持本地路径或网络 URL"
                                                            preferredStyle:UIAlertControllerStyleAlert];

    [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
        textField.placeholder = @"例如: /var/mobile/Documents/icon.png";
        textField.keyboardType = UIKeyboardTypeURL;
        textField.autocorrectionType = UITextAutocorrectionTypeNo;
    }];

    UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:^(UIAlertAction *action) {
        [self reloadTableData];
    }];

    UIAlertAction *confirmAction = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        NSString *path = alert.textFields.firstObject.text;
        [self loadImageFromPath:path];
    }];

    [alert addAction:cancelAction];
    [alert addAction:confirmAction];

    [self presentViewController:alert animated:YES completion:nil];
}

// 从路径加载图片
- (void)loadImageFromPath:(NSString *)path {
    if (!path || path.length == 0) {
        [self showErrorAlert:@"请输入有效的路径"];
        return;
    }

    UIImage *image = nil;

    // 判断是网络 URL 还是本地路径
    if ([path hasPrefix:@"http://"] || [path hasPrefix:@"https://"]) {
        // 网络图片 - 异步加载
        NSURL *url = [NSURL URLWithString:path];
        dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
            NSData *data = [NSData dataWithContentsOfURL:url];
            UIImage *downloadedImage = [UIImage imageWithData:data];
            dispatch_async(dispatch_get_main_queue(), ^{
                if (downloadedImage) {
                    [self saveCustomImage:downloadedImage];
                } else {
                    [self showErrorAlert:@"无法加载网络图片"];
                }
            });
        });
    } else {
        // 本地路径
        image = [UIImage imageWithContentsOfFile:path];
        if (image) {
            [self saveCustomImage:image];
        } else {
            [self showErrorAlert:@"无法加载本地图片，请检查路径是否正确"];
        }
    }
}

// 保存自定义图片
- (void)saveCustomImage:(UIImage *)image {
    // 保存图片到 Documents 目录
    NSString *documentsPath = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
    NSString *fileName = @"repeat_button_custom.png";
    NSString *filePath = [documentsPath stringByAppendingPathComponent:fileName];

    // 从图片中心裁剪圆形
    UIImage *circularImage = [self cropCircularImageFromCenter:image targetSize:CGSizeMake(48, 48)];

    // 保存为 PNG
    NSData *imageData = UIImagePNGRepresentation(circularImage);
    [imageData writeToFile:filePath atomically:YES];

    // 保存路径到配置
    [WCPLRedEnvelopConfig sharedConfig].repeatButtonCustomImagePath = fileName;
    [self reloadTableData];

    // 显示成功提示
    UIAlertController *successAlert = [UIAlertController alertControllerWithTitle:@"成功"
                                                                          message:@"自定义图片已保存（已裁剪为圆形）"
                                                                   preferredStyle:UIAlertControllerStyleAlert];
    [successAlert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];
    [self presentViewController:successAlert animated:YES completion:nil];
}

// 从图片中心裁剪圆形
- (UIImage *)cropCircularImageFromCenter:(UIImage *)image targetSize:(CGSize)targetSize {
    if (!image) return nil;

    CGFloat imageWidth = image.size.width;
    CGFloat imageHeight = image.size.height;

    // 计算中心正方形区域（取较短边作为边长）
    CGFloat squareSize = MIN(imageWidth, imageHeight);
    CGFloat originX = (imageWidth - squareSize) / 2.0;
    CGFloat originY = (imageHeight - squareSize) / 2.0;
    CGRect cropRect = CGRectMake(originX, originY, squareSize, squareSize);

    // 裁剪中心正方形
    CGImageRef cgImage = CGImageCreateWithImageInRect(image.CGImage, cropRect);
    UIImage *croppedImage = [UIImage imageWithCGImage:cgImage scale:image.scale orientation:image.imageOrientation];
    CGImageRelease(cgImage);

    // 创建圆形图片
    CGFloat diameter = targetSize.width;
    UIGraphicsBeginImageContextWithOptions(targetSize, NO, 0);
    CGContextRef context = UIGraphicsGetCurrentContext();

    // 创建圆形裁剪路径
    CGRect circleRect = CGRectMake(0, 0, diameter, diameter);
    CGContextAddEllipseInRect(context, circleRect);
    CGContextClip(context);

    // 绘制图片
    [croppedImage drawInRect:circleRect];

    UIImage *circularImage = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();

    return circularImage;
}

// 显示错误提示
- (void)showErrorAlert:(NSString *)message {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"错误"
                                                                   message:message
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        [self reloadTableData];
    }]];
    [self presentViewController:alert animated:YES completion:nil];
}

#pragma mark - UIDocumentPickerDelegate

- (void)documentPicker:(UIDocumentPickerViewController *)controller didPickDocumentsAtURLs:(NSArray<NSURL *> *)urls {
    if (urls.count > 0) {
        NSURL *url = urls.firstObject;

        // 开始访问安全范围资源
        BOOL accessing = [url startAccessingSecurityScopedResource];

        NSData *imageData = [NSData dataWithContentsOfURL:url];
        UIImage *image = [UIImage imageWithData:imageData];

        if (accessing) {
            [url stopAccessingSecurityScopedResource];
        }

        if (image) {
            [self saveCustomImage:image];
        } else {
            [self showErrorAlert:@"无法加载选择的图片"];
        }
    }
}

- (void)documentPickerWasCancelled:(UIDocumentPickerViewController *)controller {
    [self reloadTableData];
}

#pragma mark - UIImagePickerControllerDelegate

- (void)imagePickerController:(UIImagePickerController *)picker didFinishPickingMediaWithInfo:(NSDictionary<UIImagePickerControllerInfoKey,id> *)info {
    UIImage *image = info[UIImagePickerControllerEditedImage] ?: info[UIImagePickerControllerOriginalImage];

    [picker dismissViewControllerAnimated:YES completion:^{
        if (image) {
            [self saveCustomImage:image];
        } else {
            [self showErrorAlert:@"无法加载选择的图片"];
        }
    }];
}

- (void)imagePickerControllerDidCancel:(UIImagePickerController *)picker {
    [picker dismissViewControllerAnimated:YES completion:^{
        [self reloadTableData];
    }];
}

- (void)settingMessageReply:(UISwitch *)sender {
    [WCPLRedEnvelopConfig sharedConfig].messageReplyEnable = sender.on;
    NSLog(@"[WCPL] Message repeat feature changed: %@", sender.on ? @"Enabled" : @"Disabled");
    [self reloadTableData];
}

#pragma mark - MultiSelectGroupsViewControllerDelegate

- (void)onMultiSelectGroupCancel {
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)onMultiSelectGroupReturn:(NSArray *)arg1 {
    [WCPLRedEnvelopConfig sharedConfig].blackList = arg1;
    [self reloadTableData];
    [self dismissViewControllerAnimated:YES completion:nil];
}

@end
