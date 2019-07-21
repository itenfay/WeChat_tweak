//
// WCPSettingViewController.m
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WCPSettingViewController.h"
#import "WCPRedEnvelopConfig.h"
#import "WCPMultiSelectGroupsViewController.h"
#import "WeChatRedEnvelop.h"
#import "WCPFuncService.h"
#import <objc/objc-runtime.h>

@interface WCPSettingViewController () <MultiSelectGroupsViewControllerDelegate>

@property (nonatomic, strong) MMTableViewInfo *tableViewInfo;

@end

@implementation WCPSettingViewController

- (instancetype)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if (self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil]) {
        _tableViewInfo = [[objc_getClass("MMTableViewInfo") alloc] initWithFrame:CGRectMake(0, WCPStatusBarAndNavigationBarHeight, WCPScreenWidth, WCPScreenHeight - WCPStatusBarAndNavigationBarHeight - WCPViewSafeBottomMargin) style:UITableViewStyleGrouped];
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self initTitle];
    [self reloadTableData];
    
    MMTableView *tableView = [self.tableViewInfo getTableView];
    [self.view addSubview:tableView];
}

- (void)viewDidDisappear:(BOOL)animated {
    [super viewDidDisappear:animated];
    [self stopLoading];
}

- (void)initTitle {
    self.title = @"微信扩展功能";
    
    [self.navigationController.navigationBar setTitleTextAttributes:@{NSFontAttributeName: [UIFont boldSystemFontOfSize:18.0]}];
}

- (void)reloadTableData {
    [self.tableViewInfo clearAllSection];
    
    [self addBasicSettingSection];
    [self addAdvanceSettingSection];
    [self addOtherSettingSection];
    [self addFakeLocSettingSection];
    [self addTPSettingSection];
    [self addAboutSection];
    
    MMTableView *tableView = [self.tableViewInfo getTableView];
    [tableView reloadData];
}

- (UIInterfaceOrientationMask)supportedInterfaceOrientations {
    return UIInterfaceOrientationMaskPortrait;
}

#pragma mark - BasicSetting

- (void)addBasicSettingSection {
    // Default section
    // MMTableViewSectionInfo *sectionInfo = [objc_getClass("MMTableViewSectionInfo") sectionInfoDefaut];
    
    MMTableViewSectionInfo *sectionInfo = [objc_getClass("MMTableViewSectionInfo") sectionInfoHeader:@"红包设置"];
    
    [sectionInfo addCell:[self createAutoReceiveRedEnvelopCell]];
    [sectionInfo addCell:[self createReceiveSelfRedEnvelopCell]];
    [sectionInfo addCell:[self createDelaySettingCell]];
    
    [self.tableViewInfo addSection:sectionInfo];
}

- (MMTableViewCellInfo *)createAutoReceiveRedEnvelopCell {
    return [objc_getClass("MMTableViewCellInfo") switchCellForSel:@selector(switchRedEnvelop:) target:self title:@"自动抢红包" on:[WCPRedEnvelopConfig sharedConfig].autoReceiveEnable];
}

- (void)switchRedEnvelop:(UISwitch *)envelopSwitch {
    [WCPRedEnvelopConfig sharedConfig].autoReceiveEnable = envelopSwitch.on;
    [self reloadTableData];
}

- (MMTableViewCellInfo *)createReceiveSelfRedEnvelopCell {
    return [objc_getClass("MMTableViewCellInfo") switchCellForSel:@selector(settingReceiveSelfRedEnvelop:) target:self title:@"抢自己发的红包" on:[WCPRedEnvelopConfig sharedConfig].receiveSelfRedEnvelop];
}

- (void)settingReceiveSelfRedEnvelop:(UISwitch *)receiveSwitch {
    [WCPRedEnvelopConfig sharedConfig].receiveSelfRedEnvelop = receiveSwitch.on;
}

- (MMTableViewCellInfo *)createDelaySettingCell {
    NSInteger delaySeconds = [WCPRedEnvelopConfig sharedConfig].delaySeconds;
    NSString *delayString  = delaySeconds == 0 ? @"不延迟" : [NSString stringWithFormat:@"%ld 秒", (long)delaySeconds];
    
    MMTableViewCellInfo *cellInfo;
    if ([WCPRedEnvelopConfig sharedConfig].autoReceiveEnable) {
        cellInfo = [objc_getClass("MMTableViewCellInfo") normalCellForSel:@selector(settingDelay) target:self title:@"延迟抢红包" rightValue:delayString accessoryType:1];
    } else {
        cellInfo = [objc_getClass("MMTableViewCellInfo") normalCellForTitle:@"延迟抢红包" rightValue:@"抢红包已关闭"];
    }
    
    return cellInfo;
}

- (void)settingDelay {
    UIAlertView *alert   = [UIAlertView new];
    alert.title          = @"延迟抢红包(秒)";
    
    alert.alertViewStyle = UIAlertViewStylePlainTextInput;
    alert.delegate       = self;
    
    [alert addButtonWithTitle:@"取消"];
    [alert addButtonWithTitle:@"确定"];
    
    [alert textFieldAtIndex:0].placeholder  = @"延迟时长";
    [alert textFieldAtIndex:0].keyboardType = UIKeyboardTypeNumberPad;
    [alert show];
}

#pragma mark - Advanced Setting

- (void)addAdvanceSettingSection {
    MMTableViewSectionInfo *sectionInfo = [objc_getClass("MMTableViewSectionInfo") sectionInfoHeader:@"高级功能"];
    
    [sectionInfo addCell:[self createQueueCell]];
    [sectionInfo addCell:[self createBlackListCell]];
    
    [self.tableViewInfo addSection:sectionInfo];
}

- (MMTableViewCellInfo *)createQueueCell {
    return [objc_getClass("MMTableViewCellInfo") switchCellForSel:@selector(settingReceiveByQueue:) target:self title:@"防止同时抢多个红包" on:[WCPRedEnvelopConfig sharedConfig].serialReceive];
}

- (void)settingReceiveByQueue:(UISwitch *)queueSwitch {
    [WCPRedEnvelopConfig sharedConfig].serialReceive = queueSwitch.on;
}

- (MMTableViewCellInfo *)createBlackListCell {
    if ([WCPRedEnvelopConfig sharedConfig].blackList.count == 0) {
        return [objc_getClass("MMTableViewCellInfo") normalCellForSel:@selector(showBlackList) target:self title:@"群聊过滤" rightValue:@"已关闭" accessoryType:1];
    } else {
        NSString *blackListCountStr = [NSString stringWithFormat:@"已选 %lu 个群", (unsigned long)[WCPRedEnvelopConfig sharedConfig].blackList.count];
        return [objc_getClass("MMTableViewCellInfo") normalCellForSel:@selector(showBlackList) target:self title:@"群聊过滤" rightValue:blackListCountStr accessoryType:1];
    }
}

- (void)showBlackList {
    WCPMultiSelectGroupsViewController *contactsViewController = [[WCPMultiSelectGroupsViewController alloc] initWithBlackList:[WCPRedEnvelopConfig sharedConfig].blackList];
    contactsViewController.delegate = self;
    
    MMUINavigationController *navigationController = [[objc_getClass("MMUINavigationController") alloc] initWithRootViewController:contactsViewController];
    
    [self presentViewController:navigationController animated:YES completion:nil];
}

#pragma mark - Other

- (void)addOtherSettingSection {
    MMTableViewSectionInfo *sectionInfo = [objc_getClass("MMTableViewSectionInfo") sectionInfoHeader:@"其他功能"];
    
    [sectionInfo addCell:[self createAbortRemokeMessageCell]];
    
    [self.tableViewInfo addSection:sectionInfo];
}

- (MMTableViewSectionInfo *)createAbortRemokeMessageCell {
    return [objc_getClass("MMTableViewCellInfo") switchCellForSel:@selector(settingMessageRevoke:) target:self title:@"消息防撤回" on:[WCPRedEnvelopConfig sharedConfig].revokeEnable];
}

- (void)settingMessageRevoke:(UISwitch *)sender {
    [WCPRedEnvelopConfig sharedConfig].revokeEnable = sender.on;
}

#pragma mark - MultiSelectGroupsViewControllerDelegate

- (void)onMultiSelectGroupCancel {
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)onMultiSelectGroupReturn:(NSArray *)arg1 {
    [WCPRedEnvelopConfig sharedConfig].blackList = arg1;
    [self reloadTableData];
    [self dismissViewControllerAnimated:YES completion:nil];
}

#pragma mark - Fake location

- (void)addFakeLocSettingSection {
    MMTableViewSectionInfo *sectionInfo = [objc_getClass("MMTableViewSectionInfo") sectionInfoHeader:@"开启后，为你修改当前的坐标"];
    
    [sectionInfo addCell:[self createFakeLocSwitchCell]];
    
    if ([WCPRedEnvelopConfig sharedConfig].fakeLocEnable) {
        [sectionInfo addCell:[self createLongitudeSettingCell]];
        [sectionInfo addCell:[self createLatitudeSettingCell]];
    }
    
    [self.tableViewInfo addSection:sectionInfo];
}

- (MMTableViewCellInfo *)createFakeLocSwitchCell {
    return [objc_getClass("MMTableViewCellInfo") switchCellForSel:@selector(switchFakeLocation:) target:self title:@"设置坐标" on:[WCPRedEnvelopConfig sharedConfig].fakeLocEnable];
}

- (MMTableViewCellInfo *)createLongitudeSettingCell {
    MMTableViewCellInfo *cellInfo = [objc_getClass("MMTableViewCellInfo") normalCellForTitle:@"经度" rightValue:[NSString stringWithFormat:@"%f", [WCPRedEnvelopConfig sharedConfig].lng]];
    return cellInfo;
}

- (MMTableViewCellInfo *)createLatitudeSettingCell {
    MMTableViewCellInfo *cellInfo = [objc_getClass("MMTableViewCellInfo") normalCellForTitle:@"纬度" rightValue:[NSString stringWithFormat:@"%f", [WCPRedEnvelopConfig sharedConfig].lat]];
    return cellInfo;
}

- (void)switchFakeLocation:(UISwitch *)sender {
    [WCPRedEnvelopConfig sharedConfig].fakeLocEnable = sender.on;
    if (sender.on) {
        [self settingFakeLocationInfo];
    } else {
        [self reloadTableData];
    }
}

- (void)settingFakeLocationInfo {
    UIAlertView *alert   = [UIAlertView new];
    alert.title          = @"设置坐标";
    alert.tag            = 666;
    
    alert.alertViewStyle = UIAlertViewStyleLoginAndPasswordInput;
    alert.delegate       = self;
    
    [alert addButtonWithTitle:@"取消"];
    [alert addButtonWithTitle:@"确定"];
    
    [alert textFieldAtIndex:0].placeholder     = @"经度";
    [alert textFieldAtIndex:0].text            = [NSString stringWithFormat:@"%f", [WCPRedEnvelopConfig sharedConfig].lng];
    [alert textFieldAtIndex:0].keyboardType    = UIKeyboardTypeDecimalPad;
    
    [alert textFieldAtIndex:1].secureTextEntry = NO;
    [alert textFieldAtIndex:1].placeholder     = @"纬度";
    [alert textFieldAtIndex:1].text            = [NSString stringWithFormat:@"%f", [WCPRedEnvelopConfig sharedConfig].lat];
    [alert textFieldAtIndex:1].keyboardType    = UIKeyboardTypeDecimalPad;
    
    [alert show];
}

#pragma mark - UIAlertViewDelegate

- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex {
    if (buttonIndex == 1) {
        NSString *m_tfText = [alertView textFieldAtIndex:0].text;
        
        if (alertView.tag == 666) {
            [WCPRedEnvelopConfig sharedConfig].lng = [m_tfText doubleValue];
            NSString *n_tfText = [alertView textFieldAtIndex:1].text;
            [WCPRedEnvelopConfig sharedConfig].lat = [n_tfText doubleValue];
        } else {
            [WCPRedEnvelopConfig sharedConfig].delaySeconds = [m_tfText integerValue];
        }
        
        [self reloadTableData];
    } else {
        if (alertView.tag == 666) {
            [WCPRedEnvelopConfig sharedConfig].fakeLocEnable = NO;
            [self reloadTableData];
        }
    }
}

#pragma mark - TP

- (void)addTPSettingSection {
    MMTableViewSectionInfo *sectionInfo = [objc_getClass("MMTableViewSectionInfo") sectionInfoHeader:@"开启后，将实景应用到所有聊天场景"];
    
    [sectionInfo addCell:[self createTPSwitchCell]];
    
    [self.tableViewInfo addSection:sectionInfo];
}

- (MMTableViewCellInfo *)createTPSwitchCell {
    return [objc_getClass("MMTableViewCellInfo") switchCellForSel:@selector(switchLiveView:) target:self title:@"实时取景" on:[WCPRedEnvelopConfig sharedConfig].TPOn];
}

- (void)switchLiveView:(UISwitch *)sender {
    [WCPRedEnvelopConfig sharedConfig].TPOn = sender.on;
}

#pragma mark - About

- (void)addAboutSection {
    MMTableViewSectionInfo *sectionInfo = [objc_getClass("MMTableViewSectionInfo") sectionInfoDefaut];
    
    [sectionInfo addCell:[self createGithubCell]];
    [sectionInfo addCell:[self createBlogCell]];
    
    [self.tableViewInfo addSection:sectionInfo];
}

- (MMTableViewCellInfo *)createGithubCell {
    return [objc_getClass("MMTableViewCellInfo") normalCellForSel:@selector(showGithub) target:self title:@"我的Github" rightValue:@"★ Star" accessoryType:1];
}

- (MMTableViewCellInfo *)createBlogCell {
    return [objc_getClass("MMTableViewCellInfo") normalCellForSel:@selector(showBlog) target:self title:@"我的简书" accessoryType:1];
}

- (void)showGithub {
    NSURL *gitHubUrl = [NSURL URLWithString:@"https://github.com/dgynfi/WeChat_tweak"];
    MMWebViewController *webViewController = [[objc_getClass("MMWebViewController") alloc] initWithURL:gitHubUrl presentModal:NO extraInfo:nil];
    [self.navigationController PushViewController:webViewController animated:YES];
}

- (void)showBlog {
    NSURL *blogUrl = [NSURL URLWithString:@"https://www.jianshu.com/u/7fc76f1179cc"];
    MMWebViewController *webViewController = [[objc_getClass("MMWebViewController") alloc] initWithURL:blogUrl presentModal:NO extraInfo:nil];
    [self.navigationController PushViewController:webViewController animated:YES];
}

#pragma mark - Support

- (void)addSupportSection {
    MMTableViewSectionInfo *sectionInfo = [objc_getClass("MMTableViewSectionInfo") sectionInfoDefaut];
    
    [sectionInfo addCell:[self createWeChatPayingCell]];
    
    [self.tableViewInfo addSection:sectionInfo];
}

- (MMTableViewCellInfo *)createWeChatPayingCell {
    return [objc_getClass("MMTableViewCellInfo") normalCellForSel:@selector(payingToAuthor) target:self title:@"微信支持" rightValue:@"" accessoryType:1];
}

- (void)payingToAuthor {
    [self startLoadingNonBlock];
    ScanQRCodeLogicController *scanQRCodeLogic = [[objc_getClass("ScanQRCodeLogicController") alloc] initWithViewController:self CodeType:1];
    scanQRCodeLogic.fromScene                  = 2;
    
    NewQRCodeScanner *qrCodeScanner            = [[objc_getClass("NewQRCodeScanner") alloc] initWithDelegate:scanQRCodeLogic CodeType:1];
    [qrCodeScanner notifyResult:@"wxp://f2f0v0mlRgGt7NP6Unvmr7jNXaQaJ4SFwjKO" type:@"QR_CODE" version:6];
}

@end
