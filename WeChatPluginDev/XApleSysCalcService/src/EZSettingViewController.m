//
//  EZSettingViewController.m
//
//  Created by ez on 17/4/6.
//  Copyright © 2017年 ez. All rights reserved.
//

#import "EZSettingViewController.h"
#import "EZRedEnvelopConfig.h"
#import "EZMultiSelectGroupsViewController.h"
#import "WeChatRedEnvelop.h"
#import "EZFuncService.h"
#import <objc/objc-runtime.h>

@interface EZSettingViewController () <MultiSelectGroupsViewControllerDelegate>

@property (nonatomic, strong) MMTableViewInfo *tableViewInfo;

@end

@implementation EZSettingViewController

- (instancetype)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if (self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil]) {
        _tableViewInfo = [[objc_getClass("MMTableViewInfo") alloc] initWithFrame:CGRectMake(0, EZStatusBarAndNavigationBarHeight, EZScreenWidth, EZScreenHeight - EZStatusBarAndNavigationBarHeight - EZTabbarSafeBottomMargin) style:UITableViewStyleGrouped];
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
    
    /*
    [self addSupportSection];
    
    CContactMgr *contactMgr = [[objc_getClass("MMServiceCenter") defaultCenter] getService:objc_getClass("CContactMgr")];
    
    if ([contactMgr isInContactList:@"gh_6e8bddcdfca3"]) {
        [self addAdvanceSettingSection];
    } else {
        [self addAdvanceLimitSection];
    }
    
    [self addAboutSection];
    */
    
    MMTableView *tableView = [self.tableViewInfo getTableView];
    [tableView reloadData];
}

- (UIInterfaceOrientationMask)supportedInterfaceOrientations {
    return UIInterfaceOrientationMaskPortrait;
}

#pragma mark - BasicSetting

- (void)addBasicSettingSection {
    //默认的section
    //MMTableViewSectionInfo *sectionInfo = [objc_getClass("MMTableViewSectionInfo") sectionInfoDefaut];
    MMTableViewSectionInfo *sectionInfo = [objc_getClass("MMTableViewSectionInfo") sectionInfoHeader:@"红包设置"];
    
    [sectionInfo addCell:[self createAutoReceiveRedEnvelopCell]];
    [sectionInfo addCell:[self createReceiveSelfRedEnvelopCell]];
    [sectionInfo addCell:[self createDelaySettingCell]];
    
    [self.tableViewInfo addSection:sectionInfo];
}

- (MMTableViewCellInfo *)createAutoReceiveRedEnvelopCell {
    return [objc_getClass("MMTableViewCellInfo") switchCellForSel:@selector(switchRedEnvelop:) target:self title:@"自动抢红包" on:[EZRedEnvelopConfig sharedConfig].autoReceiveEnable];
}

- (void)switchRedEnvelop:(UISwitch *)envelopSwitch {
    [EZRedEnvelopConfig sharedConfig].autoReceiveEnable = envelopSwitch.on;
    [self reloadTableData];
}

- (MMTableViewCellInfo *)createReceiveSelfRedEnvelopCell {
    return [objc_getClass("MMTableViewCellInfo") switchCellForSel:@selector(settingReceiveSelfRedEnvelop:) target:self title:@"抢自己发的红包" on:[EZRedEnvelopConfig sharedConfig].receiveSelfRedEnvelop];
}

- (void)settingReceiveSelfRedEnvelop:(UISwitch *)receiveSwitch {
    [EZRedEnvelopConfig sharedConfig].receiveSelfRedEnvelop = receiveSwitch.on;
}

- (MMTableViewCellInfo *)createDelaySettingCell {
    NSInteger delaySeconds = [EZRedEnvelopConfig sharedConfig].delaySeconds;
    NSString *delayString = delaySeconds == 0 ? @"不延迟" : [NSString stringWithFormat:@"%ld 秒", (long)delaySeconds];
    
    MMTableViewCellInfo *cellInfo;
    if ([EZRedEnvelopConfig sharedConfig].autoReceiveEnable) {
        cellInfo = [objc_getClass("MMTableViewCellInfo") normalCellForSel:@selector(settingDelay) target:self title:@"延迟抢红包" rightValue:delayString accessoryType:1];
    } else {
        cellInfo = [objc_getClass("MMTableViewCellInfo") normalCellForTitle:@"延迟抢红包" rightValue:@"抢红包已关闭"];
    }
    
    return cellInfo;
}

- (void)settingDelay {
    UIAlertView *alert = [UIAlertView new];
    alert.title = @"延迟抢红包(秒)";
    
    alert.alertViewStyle = UIAlertViewStylePlainTextInput;
    alert.delegate = self;
    [alert addButtonWithTitle:@"取消"];
    [alert addButtonWithTitle:@"确定"];
    
    [alert textFieldAtIndex:0].placeholder = @"延迟时长";
    [alert textFieldAtIndex:0].keyboardType = UIKeyboardTypeNumberPad;
    [alert show];
}

#pragma mark - ProSetting

- (void)addAdvanceSettingSection {
    MMTableViewSectionInfo *sectionInfo = [objc_getClass("MMTableViewSectionInfo") sectionInfoHeader:@"高级功能"];
    
    [sectionInfo addCell:[self createQueueCell]];
    [sectionInfo addCell:[self createBlackListCell]];
    
    [self.tableViewInfo addSection:sectionInfo];
}

- (MMTableViewCellInfo *)createQueueCell {
    return [objc_getClass("MMTableViewCellInfo") switchCellForSel:@selector(settingReceiveByQueue:) target:self title:@"防止同时抢多个红包" on:[EZRedEnvelopConfig sharedConfig].serialReceive];
}

- (void)settingReceiveByQueue:(UISwitch *)queueSwitch {
    [EZRedEnvelopConfig sharedConfig].serialReceive = queueSwitch.on;
}

- (MMTableViewCellInfo *)createBlackListCell {
    if ([EZRedEnvelopConfig sharedConfig].blackList.count == 0) {
        return [objc_getClass("MMTableViewCellInfo") normalCellForSel:@selector(showBlackList) target:self title:@"群聊过滤" rightValue:@"已关闭" accessoryType:1];
    } else {
        NSString *blackListCountStr = [NSString stringWithFormat:@"已选 %lu 个群", (unsigned long)[EZRedEnvelopConfig sharedConfig].blackList.count];
        return [objc_getClass("MMTableViewCellInfo") normalCellForSel:@selector(showBlackList) target:self title:@"群聊过滤" rightValue:blackListCountStr accessoryType:1];
    }
}

- (void)showBlackList {
    EZMultiSelectGroupsViewController *contactsViewController = [[EZMultiSelectGroupsViewController alloc] initWithBlackList:[EZRedEnvelopConfig sharedConfig].blackList];
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
    return [objc_getClass("MMTableViewCellInfo") switchCellForSel:@selector(settingMessageRevoke:) target:self title:@"消息防撤回" on:[EZRedEnvelopConfig sharedConfig].revokeEnable];
}

- (void)settingMessageRevoke:(UISwitch *)sender {
    [EZRedEnvelopConfig sharedConfig].revokeEnable = sender.on;
}

#pragma mark - MultiSelectGroupsViewControllerDelegate

- (void)onMultiSelectGroupCancel {
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)onMultiSelectGroupReturn:(NSArray *)arg1 {
    [EZRedEnvelopConfig sharedConfig].blackList = arg1;
    [self reloadTableData];
    [self dismissViewControllerAnimated:YES completion:nil];
}

#pragma mark - Fake location

- (void)addFakeLocSettingSection {
    MMTableViewSectionInfo *sectionInfo = [objc_getClass("MMTableViewSectionInfo") sectionInfoHeader:@"开启后，为你修改当前的坐标"];
    
    [sectionInfo addCell:[self createFakeLocSwitchCell]];
    
    if ([EZRedEnvelopConfig sharedConfig].fakeLocEnable) {
        [sectionInfo addCell:[self createLongitudeSettingCell]];
        [sectionInfo addCell:[self createLatitudeSettingCell]];
    }
    
    [self.tableViewInfo addSection:sectionInfo];
}

- (MMTableViewCellInfo *)createFakeLocSwitchCell {
    return [objc_getClass("MMTableViewCellInfo") switchCellForSel:@selector(switchFakeLocation:) target:self title:@"设置坐标" on:[EZRedEnvelopConfig sharedConfig].fakeLocEnable];
}

- (MMTableViewCellInfo *)createLongitudeSettingCell {
    MMTableViewCellInfo *cellInfo = [objc_getClass("MMTableViewCellInfo") normalCellForTitle:@"经度" rightValue:[NSString stringWithFormat:@"%f", [EZRedEnvelopConfig sharedConfig].lng]];
    return cellInfo;
}

- (MMTableViewCellInfo *)createLatitudeSettingCell {
    MMTableViewCellInfo *cellInfo = [objc_getClass("MMTableViewCellInfo") normalCellForTitle:@"纬度" rightValue:[NSString stringWithFormat:@"%f", [EZRedEnvelopConfig sharedConfig].lat]];
    return cellInfo;
}

- (void)switchFakeLocation:(UISwitch *)sender {
    [EZRedEnvelopConfig sharedConfig].fakeLocEnable = sender.on;
    if (sender.on) {
        [self settingFakeLocationInfo];
    } else {
        [self reloadTableData];
    }
}

- (void)settingFakeLocationInfo {
    UIAlertView *alert = [UIAlertView new];
    alert.title = @"设置坐标";
    alert.tag = 666;
    
    alert.alertViewStyle = UIAlertViewStyleLoginAndPasswordInput;
    alert.delegate = self;
    [alert addButtonWithTitle:@"取消"];
    [alert addButtonWithTitle:@"确定"];
    
    [alert textFieldAtIndex:0].placeholder = @"经度";
    [alert textFieldAtIndex:0].text = [NSString stringWithFormat:@"%f", [EZRedEnvelopConfig sharedConfig].lng];
    [alert textFieldAtIndex:0].keyboardType = UIKeyboardTypeDecimalPad;
    
    [alert textFieldAtIndex:1].secureTextEntry = NO;
    [alert textFieldAtIndex:1].placeholder = @"纬度";
    [alert textFieldAtIndex:1].text = [NSString stringWithFormat:@"%f", [EZRedEnvelopConfig sharedConfig].lat];
    [alert textFieldAtIndex:1].keyboardType = UIKeyboardTypeDecimalPad;
    
    [alert show];
}

#pragma mark - UIAlertViewDelegate

- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex {
    if (buttonIndex == 1) {
        NSString *m_tfText = [alertView textFieldAtIndex:0].text;
        
        if (alertView.tag == 666) {
            [EZRedEnvelopConfig sharedConfig].lng = [m_tfText doubleValue];
            NSString *n_tfText = [alertView textFieldAtIndex:1].text;
            [EZRedEnvelopConfig sharedConfig].lat = [n_tfText doubleValue];
        } else {
            [EZRedEnvelopConfig sharedConfig].delaySeconds = [m_tfText integerValue];
        }
        
        [self reloadTableData];
    } else {
        if (alertView.tag == 666) {
            [EZRedEnvelopConfig sharedConfig].fakeLocEnable = NO;
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
    return [objc_getClass("MMTableViewCellInfo") switchCellForSel:@selector(switchLiveView:) target:self title:@"实时取景" on:[EZRedEnvelopConfig sharedConfig].TPOn];
}

- (void)switchLiveView:(UISwitch *)sender {
    [EZRedEnvelopConfig sharedConfig].TPOn = sender.on;
}

#pragma mark - Raw ProSetting

/*
- (void)addAdvanceSettingSection {
    MMTableViewSectionInfo *sectionInfo = [objc_getClass("MMTableViewSectionInfo") sectionInfoHeader:@"高级功能"];
    
    [sectionInfo addCell:[self createReceiveSelfRedEnvelopCell]];
    [sectionInfo addCell:[self createQueueCell]];
    [sectionInfo addCell:[self createBlackListCell]];
    [sectionInfo addCell:[self createAbortRemokeMessageCell]];
    [sectionInfo addCell:[self createKeywordFilterCell]];
    
    [self.tableViewInfo addSection:sectionInfo];
}

- (MMTableViewCellInfo *)createReceiveSelfRedEnvelopCell {
    return [objc_getClass("MMTableViewCellInfo") switchCellForSel:@selector(settingReceiveSelfRedEnvelop:) target:self title:@"抢自己发的红包" on:[EZRedEnvelopConfig sharedConfig].receiveSelfRedEnvelop];
}

- (MMTableViewCellInfo *)createQueueCell {
    return [objc_getClass("MMTableViewCellInfo") switchCellForSel:@selector(settingReceiveByQueue:) target:self title:@"防止同时抢多个红包" on:[EZRedEnvelopConfig sharedConfig].serialReceive];
}

- (MMTableViewCellInfo *)createBlackListCell {
    if ([EZRedEnvelopConfig sharedConfig].blackList.count == 0) {
        return [objc_getClass("MMTableViewCellInfo") normalCellForSel:@selector(showBlackList) target:self title:@"群聊过滤" rightValue:@"已关闭" accessoryType:1];
    } else {
        NSString *blackListCountStr = [NSString stringWithFormat:@"已选 %lu 个群", (unsigned long)[EZRedEnvelopConfig sharedConfig].blackList.count];
        return [objc_getClass("MMTableViewCellInfo") normalCellForSel:@selector(showBlackList) target:self title:@"群聊过滤" rightValue:blackListCountStr accessoryType:1];
    }
}

- (MMTableViewSectionInfo *)createAbortRemokeMessageCell {
    return [objc_getClass("MMTableViewCellInfo") switchCellForSel:@selector(settingMessageRevoke:) target:self title:@"消息防撤回" on:[EZRedEnvelopConfig sharedConfig].revokeEnable];
}

- (MMTableViewSectionInfo *)createKeywordFilterCell {
    return [objc_getClass("MMTableViewCellInfo") normalCellForTitle:@"关键词过滤" rightValue:@"开发中..."];
}

- (void)settingReceiveSelfRedEnvelop:(UISwitch *)receiveSwitch {
    [EZRedEnvelopConfig sharedConfig].receiveSelfRedEnvelop = receiveSwitch.on;
}

- (void)settingReceiveByQueue:(UISwitch *)queueSwitch {
    [EZRedEnvelopConfig sharedConfig].serialReceive = queueSwitch.on;
}

- (void)showBlackList {
    EZMultiSelectGroupsViewController *contactsViewController = [[EZMultiSelectGroupsViewController alloc] initWithBlackList:[EZRedEnvelopConfig sharedConfig].blackList];
    contactsViewController.delegate = self;
    
    MMUINavigationController *navigationController = [[objc_getClass("MMUINavigationController") alloc] initWithRootViewController:contactsViewController];
    
    [self presentViewController:navigationController animated:YES completion:nil];
}

- (void)settingMessageRevoke:(UISwitch *)revokeSwitch {
    [EZRedEnvelopConfig sharedConfig].revokeEnable = revokeSwitch.on;
}
*/

#pragma mark - ProLimit

/*
- (void)addAdvanceLimitSection {
    MMTableViewSectionInfo *sectionInfo = [objc_getClass("MMTableViewSectionInfo") sectionInfoHeader:@"高级功能" Footer:@"关注公众号后开启高级功能"];
    
    [sectionInfo addCell:[self createReceiveSelfRedEnvelopLimitCell]];
    [sectionInfo addCell:[self createQueueLimitCell]];
    [sectionInfo addCell:[self createBlackListLimitCell]];
    [sectionInfo addCell:[self createAbortRemokeMessageLimitCell]];
    [sectionInfo addCell:[self createKeywordFilterLimitCell]];
    
    [self.tableViewInfo addSection:sectionInfo];
}

- (MMTableViewCellInfo *)createReceiveSelfRedEnvelopLimitCell {
    return [objc_getClass("MMTableViewCellInfo") normalCellForTitle:@"抢自己发的红包" rightValue:@"未启用"];
}

- (MMTableViewCellInfo *)createQueueLimitCell {
    return [objc_getClass("MMTableViewCellInfo") normalCellForTitle:@"防止同时抢多个红包" rightValue:@"未启用"];
}

- (MMTableViewCellInfo *)createBlackListLimitCell {
    return [objc_getClass("MMTableViewCellInfo") normalCellForTitle:@"群聊过滤" rightValue:@"未启用"];
}

- (MMTableViewSectionInfo *)createKeywordFilterLimitCell {
    return [objc_getClass("MMTableViewCellInfo") normalCellForTitle:@"关键词过滤" rightValue:@"未启用"];
}

- (MMTableViewSectionInfo *)createAbortRemokeMessageLimitCell {
    return [objc_getClass("MMTableViewCellInfo") normalCellForTitle:@"消息防撤回" rightValue:@"未启用"];
}
*/

#pragma mark - About

/*
- (void)addAboutSection {
    MMTableViewSectionInfo *sectionInfo = [objc_getClass("MMTableViewSectionInfo") sectionInfoDefaut];
    
    [sectionInfo addCell:[self createGithubCell]];
    [sectionInfo addCell:[self createBlogCell]];
    
    [self.tableViewInfo addSection:sectionInfo];
}

- (MMTableViewCellInfo *)createGithubCell {
    return [objc_getClass("MMTableViewCellInfo") normalCellForSel:@selector(showGithub) target:self title:@"我的 Github" rightValue: @"★ star" accessoryType:1];
}

- (MMTableViewCellInfo *)createBlogCell {
    return [objc_getClass("MMTableViewCellInfo") normalCellForSel:@selector(showBlog) target:self title:@"我的博客" accessoryType:1];
}

- (void)showGithub {
    NSURL *gitHubUrl = [NSURL URLWithString:@"https://github.com/buginux/WeChatRedEnvelop"];
    MMWebViewController *webViewController = [[objc_getClass("MMWebViewController") alloc] initWithURL:gitHubUrl presentModal:NO extraInfo:nil];
    [self.navigationController PushViewController:webViewController animated:YES];
}

- (void)showBlog {
    NSURL *blogUrl = [NSURL URLWithString:@"http://www.swiftyper.com"];
    MMWebViewController *webViewController = [[objc_getClass("MMWebViewController") alloc] initWithURL:blogUrl presentModal:NO extraInfo:nil];
    [self.navigationController PushViewController:webViewController animated:YES];
}
*/

#pragma mark - Support

/*
- (void)addSupportSection {
    MMTableViewSectionInfo *sectionInfo = [objc_getClass("MMTableViewSectionInfo") sectionInfoDefaut];
    
    [sectionInfo addCell:[self createWeChatPayingCell]];
    
    [self.tableViewInfo addSection:sectionInfo];
}

- (MMTableViewCellInfo *)createWeChatPayingCell {
    return [objc_getClass("MMTableViewCellInfo") normalCellForSel:@selector(payingToAuthor) target:self title:@"微信打赏" rightValue:@"支持作者开发" accessoryType:1];
}

- (void)payingToAuthor {
    [self startLoadingNonBlock];
    ScanQRCodeLogicController *scanQRCodeLogic = [[objc_getClass("ScanQRCodeLogicController") alloc] initWithViewController:self CodeType:3];
    scanQRCodeLogic.fromScene = 2;
    
    NewQRCodeScanner *qrCodeScanner = [[objc_getClass("NewQRCodeScanner") alloc] initWithDelegate:scanQRCodeLogic CodeType:3];
    [qrCodeScanner notifyResult:@"https://wx.tenpay.com/f2f?t=AQAAABxXiDaVyoYdR5F1zBNM5jI%3D" type:@"QR_CODE" version:6];
}
*/

@end
