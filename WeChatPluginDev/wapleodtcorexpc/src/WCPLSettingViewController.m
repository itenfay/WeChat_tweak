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
#import <objc/objc-runtime.h>

@interface WCPLSettingViewController () <MultiSelectGroupsViewControllerDelegate>

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
    UIAlertView *alert   = [UIAlertView new];
    alert.title          = @"设置坐标";
    alert.tag            = 666;
    
    alert.alertViewStyle = UIAlertViewStyleLoginAndPasswordInput;
    alert.delegate       = self;
    
    [alert addButtonWithTitle:@"取消"];
    [alert addButtonWithTitle:@"确定"];
    
    [alert textFieldAtIndex:0].placeholder     = @"经度";
    [alert textFieldAtIndex:0].text            = [NSString stringWithFormat:@"%f", [WCPLRedEnvelopConfig sharedConfig].lng];
    [alert textFieldAtIndex:0].keyboardType    = UIKeyboardTypeDecimalPad;
    
    [alert textFieldAtIndex:1].secureTextEntry = NO;
    [alert textFieldAtIndex:1].placeholder     = @"纬度";
    [alert textFieldAtIndex:1].text            = [NSString stringWithFormat:@"%f", [WCPLRedEnvelopConfig sharedConfig].lat];
    [alert textFieldAtIndex:1].keyboardType    = UIKeyboardTypeDecimalPad;
    
    [alert show];
}

#pragma mark - UIAlertViewDelegate

- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex {
    if (buttonIndex == 1) {
        NSString *m_tfText = [alertView textFieldAtIndex:0].text;
        
        if (alertView.tag == 666) {
            [WCPLRedEnvelopConfig sharedConfig].lng = [m_tfText doubleValue];
            NSString *n_tfText = [alertView textFieldAtIndex:1].text;
            [WCPLRedEnvelopConfig sharedConfig].lat = [n_tfText doubleValue];
        } else {
            [WCPLRedEnvelopConfig sharedConfig].delaySeconds = [m_tfText integerValue];
        }
        
        [self reloadTableData];
    } else {
        if (alertView.tag == 666) {
            [WCPLRedEnvelopConfig sharedConfig].fakeLocEnable = NO;
            [self reloadTableData];
        }
    }
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
