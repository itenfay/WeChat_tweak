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
    self.title = @"小微同学";
    
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
    [self addFakeLocSettingSection];
    [self addTPSettingSection];
    [self addAboutSection];
    [self addSupportSection];
    
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
        NSArray *documentTypes = @[@"public.image"];
        UIDocumentPickerViewController *documentPicker = [[UIDocumentPickerViewController alloc] initWithDocumentTypes:documentTypes inMode:UIDocumentPickerModeImport];
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

    // 缩放图片到合适大小
    CGSize targetSize = CGSizeMake(48, 48);
    UIGraphicsBeginImageContextWithOptions(targetSize, NO, 0);
    [image drawInRect:CGRectMake(0, 0, targetSize.width, targetSize.height)];
    UIImage *scaledImage = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();

    // 保存为 PNG
    NSData *imageData = UIImagePNGRepresentation(scaledImage);
    [imageData writeToFile:filePath atomically:YES];

    // 保存路径到配置
    [WCPLRedEnvelopConfig sharedConfig].repeatButtonCustomImagePath = fileName;
    [self reloadTableData];

    // 显示成功提示
    UIAlertController *successAlert = [UIAlertController alertControllerWithTitle:@"成功"
                                                                          message:@"自定义图片已保存"
                                                                   preferredStyle:UIAlertControllerStyleAlert];
    [successAlert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];
    [self presentViewController:successAlert animated:YES completion:nil];
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

#pragma mark - Fake location

- (void)addFakeLocSettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"开启后，为你修改当前的坐标"];
    
    [section addCell:[self createFakeLocSwitchCell]];
    
    if ([WCPLRedEnvelopConfig sharedConfig].fakeLocEnable) {
        [section addCell:[self createLongitudeSettingCell]];
        [section addCell:[self createLatitudeSettingCell]];
    }
    
    [self.tableViewMgr addSection:section];
}

- (WCTableViewNormalCellManager *)createFakeLocSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(switchFakeLocation:) target:self title:@"设置坐标" on:[WCPLRedEnvelopConfig sharedConfig].fakeLocEnable];
}

- (WCTableViewNormalCellManager *)createLongitudeSettingCell {
    WCTableViewNormalCellManager *cell = [objc_getClass("WCTableViewNormalCellManager") normalCellForTitle:@"经度" rightValue:[NSString stringWithFormat:@"%f", [WCPLRedEnvelopConfig sharedConfig].lng]];
    return cell;
}

- (WCTableViewNormalCellManager *)createLatitudeSettingCell {
    WCTableViewNormalCellManager *cell = [objc_getClass("WCTableViewNormalCellManager") normalCellForTitle:@"纬度" rightValue:[NSString stringWithFormat:@"%f", [WCPLRedEnvelopConfig sharedConfig].lat]];
    return cell;
}

- (void)switchFakeLocation:(UISwitch *)sender {
    [WCPLRedEnvelopConfig sharedConfig].fakeLocEnable = sender.on;
    if (sender.on) {
        [self settingFakeLocationInfo];
    } else {
        [self reloadTableData];
    }
}

- (void)settingFakeLocationInfo {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"设置坐标"
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleAlert];

    [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
        textField.placeholder = @"经度";
        textField.text = [NSString stringWithFormat:@"%f", [WCPLRedEnvelopConfig sharedConfig].lng];
        textField.keyboardType = UIKeyboardTypeDecimalPad;
    }];

    [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
        textField.placeholder = @"纬度";
        textField.text = [NSString stringWithFormat:@"%f", [WCPLRedEnvelopConfig sharedConfig].lat];
        textField.keyboardType = UIKeyboardTypeDecimalPad;
    }];

    UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:^(UIAlertAction *action) {
        [WCPLRedEnvelopConfig sharedConfig].fakeLocEnable = NO;
        [self reloadTableData];
    }];

    UIAlertAction *confirmAction = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        NSString *lngText = alert.textFields[0].text;
        NSString *latText = alert.textFields[1].text;
        [WCPLRedEnvelopConfig sharedConfig].lng = [lngText doubleValue];
        [WCPLRedEnvelopConfig sharedConfig].lat = [latText doubleValue];
        [self reloadTableData];
    }];

    [alert addAction:cancelAction];
    [alert addAction:confirmAction];

    [self presentViewController:alert animated:YES completion:nil];
}

#pragma mark - TP

- (void)addTPSettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"开启后，将实景应用到所有聊天场景"];
    
    [section addCell:[self createTPSwitchCell]];
    
    [self.tableViewMgr addSection:section];
}

- (WCTableViewNormalCellManager *)createTPSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(switchLiveView:) target:self title:@"实时取景" on:[WCPLRedEnvelopConfig sharedConfig].TPOn];
}

- (void)switchLiveView:(UISwitch *)sender {
    [WCPLRedEnvelopConfig sharedConfig].TPOn = sender.on;
}

#pragma mark - About

- (void)addAboutSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoDefaut];
    
    [section addCell:[self createGithubCell]];
    [section addCell:[self createBlogCell]];
    
    [self.tableViewMgr addSection:section];
}

- (WCTableViewNormalCellManager *)createGithubCell {
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showGithub) target:self title:@"我的Github" rightValue:@"★ Star" accessoryType:1];
}

- (WCTableViewNormalCellManager *)createBlogCell {
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showBlog) target:self title:@"我的简书" accessoryType:1];
}

- (void)showGithub {
    NSURL *githubUrl = [NSURL URLWithString:@"https://github.com/dgynfi/WeChat_tweak"];
    MMWebViewController *webViewController = [[objc_getClass("MMWebViewController") alloc] initWithURL:githubUrl presentModal:NO extraInfo:nil];
    [self.navigationController PushViewController:webViewController animated:YES];
}

- (void)showBlog {
    NSURL *blogUrl = [NSURL URLWithString:@"https://www.jianshu.com/u/7fc76f1179cc"];
    MMWebViewController *webViewController = [[objc_getClass("MMWebViewController") alloc] initWithURL:blogUrl presentModal:NO extraInfo:nil];
    [self.navigationController PushViewController:webViewController animated:YES];
}

#pragma mark - Support

- (void)addSupportSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoDefaut];
    
    [section addCell:[self createWeChatPayingCell]];
    
    [self.tableViewMgr addSection:section];
}

- (WCTableViewNormalCellManager *)createWeChatPayingCell {
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(payingToAuthor) target:self title:@"微信支持" rightValue:@"Thanks!" accessoryType:1];
}

- (void)payingToAuthor {
    [self startLoadingNonBlock];
    
    ScanQRCodeLogicController *scanQRCodeLogic = [[objc_getClass("ScanQRCodeLogicController") alloc] initWithViewController:self CodeType:1];
    scanQRCodeLogic.fromScene = 2;
    
    NewQRCodeScanner *QRCodeScanner = [[objc_getClass("NewQRCodeScanner") alloc] initWithDelegate:scanQRCodeLogic CodeType:1];
    [QRCodeScanner notifyResult:@"wxp://f2f0v0mlRgGt7NP6Unvmr7jNXaQaJ4SFwjKO" type:@"QR_CODE" version:6 rawData:nil];
}

@end
