//
// WCPLSettingViewController.m
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WCPLSettingViewController.h"
#import "WCPLRedEnvelopConfig.h"
#import "WCPLMultiSelectGroupsViewController.h"
#import "WCPLMultiSelectContactsViewController.h"
#import "WCPLFuncService.h"
#import "WeChatRedEnvelop.h"
#import "WCPLLogger.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UniformTypeIdentifiers/UniformTypeIdentifiers.h>

static NSString *const kWCPLDefaultLogUploadURL = @"http://23.82.96.72:8099/wcpl_log";

typedef NS_ENUM(NSUInteger, WCPLGroupSelectContext) {
    WCPLGroupSelectContextNone = 0,
    WCPLGroupSelectContextBlackList,
    WCPLGroupSelectContextIgnoreChatroom,
};

@interface WCPLSettingViewController () <MultiSelectGroupsViewControllerDelegate, WCPLMultiSelectContactsViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIDocumentPickerDelegate>

@property (nonatomic, strong) WCTableViewManager *tableViewMgr;
@property (nonatomic, assign) WCPLGroupSelectContext groupSelectContext;

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
    [self reloadTableData];
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
    [self addMessageIgnoreSettingSection];
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
        return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showBlackList) target:self title:@"群聊白名单" rightValue:@"未选择" accessoryType:1];
    } else {
        NSString *blackListCountStr = [NSString stringWithFormat:@"已选 %lu 个群", (unsigned long)[WCPLRedEnvelopConfig sharedConfig].blackList.count];
        return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showBlackList) target:self title:@"群聊白名单" rightValue:blackListCountStr accessoryType:1];
    }
}

- (void)showBlackList {
    self.groupSelectContext = WCPLGroupSelectContextBlackList;
    NSArray *selected = [WCPLRedEnvelopConfig sharedConfig].blackList ?: @[];
    if ([self wcpl_presentGroupSelectContactsControllerWithTitle:@"白名单"
                                             selectedUserNames:selected]) {
        return;
    }

    WCPLMultiSelectGroupsViewController *multiSGVC = [[WCPLMultiSelectGroupsViewController alloc] initWithBlackList:selected];
    multiSGVC.delegate = self;
    multiSGVC.titleText = @"白名单";

    MMUINavigationController *nc = [[objc_getClass("MMUINavigationController") alloc] initWithRootViewController:multiSGVC];
    [self presentViewController:nc animated:YES completion:nil];
}

#pragma mark - Other

- (void)addOtherSettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"其他"];

    [section addCell:[self createAbortRemokeMessageCell]];
    [section addCell:[self createDebugLogCell]];

    [self.tableViewMgr addSection:section];
}

- (WCTableViewNormalCellManager *)createAbortRemokeMessageCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingMessageRevoke:) target:self title:@"消息防撤回" on:[WCPLRedEnvelopConfig sharedConfig].revokeEnable];
}

- (void)settingMessageRevoke:(UISwitch *)sender {
    [WCPLRedEnvelopConfig sharedConfig].revokeEnable = sender.on;
}

- (WCTableViewNormalCellManager *)createDebugLogCell {
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showDebugLog) target:self title:@"查看调试日志" rightValue:@"" accessoryType:1];
}

- (void)showDebugLog {
    WCPLLogger *logger = [WCPLLogger sharedLogger];
    NSString *logPath = [logger logFilePath];

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"调试日志"
                                                                   message:[NSString stringWithFormat:@"日志文件位置:\n%@", logPath]
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    // 查看最近100行日志
    UIAlertAction *viewAction = [UIAlertAction actionWithTitle:@"查看最近日志" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        NSString *recentLog = [logger readRecentLog:100];
        [self showLogContent:recentLog];
    }];

    // 上传日志到本地
    UIAlertAction *uploadAction = [UIAlertAction actionWithTitle:@"上传日志到本地(HTTP)" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        [self uploadDebugLogToLocalServer];
    }];

    // 复制日志文件路径
    UIAlertAction *copyPathAction = [UIAlertAction actionWithTitle:@"复制文件路径" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        UIPasteboard *pasteboard = [UIPasteboard generalPasteboard];
        pasteboard.string = logPath;

        UIAlertController *successAlert = [UIAlertController alertControllerWithTitle:@"成功"
                                                                               message:@"日志文件路径已复制到剪贴板"
                                                                        preferredStyle:UIAlertControllerStyleAlert];
        [successAlert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];
        [self presentViewController:successAlert animated:YES completion:nil];
    }];

    // 清空日志
    UIAlertAction *clearAction = [UIAlertAction actionWithTitle:@"清空日志" style:UIAlertActionStyleDestructive handler:^(UIAlertAction *action) {
        UIAlertController *confirmAlert = [UIAlertController alertControllerWithTitle:@"确认清空"
                                                                               message:@"确定要清空所有调试日志吗？"
                                                                        preferredStyle:UIAlertControllerStyleAlert];
        [confirmAlert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
        [confirmAlert addAction:[UIAlertAction actionWithTitle:@"清空" style:UIAlertActionStyleDestructive handler:^(UIAlertAction *action) {
            [logger clearLog];
            UIAlertController *successAlert = [UIAlertController alertControllerWithTitle:@"成功"
                                                                                   message:@"日志已清空"
                                                                            preferredStyle:UIAlertControllerStyleAlert];
            [successAlert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];
            [self presentViewController:successAlert animated:YES completion:nil];
        }]];
        [self presentViewController:confirmAlert animated:YES completion:nil];
    }];

    UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil];

    [alert addAction:viewAction];
    [alert addAction:uploadAction];
    [alert addAction:copyPathAction];
    [alert addAction:clearAction];
    [alert addAction:cancelAction];

    [self presentViewController:alert animated:YES completion:nil];
}

- (void)uploadDebugLogToLocalServer {
    if (![WCPLLogger sharedLogger].enabled) {
        UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"未启用日志"
                                                                       message:@"请先开启调试日志"
                                                                preferredStyle:UIAlertControllerStyleAlert];
        [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];
        [self presentViewController:alert animated:YES completion:nil];
        return;
    }

    NSString *urlString = kWCPLDefaultLogUploadURL;

    NSURL *url = [NSURL URLWithString:urlString];
    if (!url || !url.scheme || !url.host) {
        UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"地址无效"
                                                                       message:urlString
                                                                preferredStyle:UIAlertControllerStyleAlert];
        [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];
        [self presentViewController:alert animated:YES completion:nil];
        return;
    }

    NSString *logPath = [[WCPLLogger sharedLogger] logFilePath];
    NSData *logData = [NSData dataWithContentsOfFile:logPath];
    if (logData.length == 0) {
        UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"日志为空"
                                                                       message:@"没有可上传的日志内容"
                                                                preferredStyle:UIAlertControllerStyleAlert];
        [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];
        [self presentViewController:alert animated:YES completion:nil];
        return;
    }

    WCPLLog(@"准备上传日志: url=%@ size=%lu path=%@", urlString, (unsigned long)logData.length, logPath);

    NSMutableURLRequest *request = [NSMutableURLRequest requestWithURL:url];
    request.HTTPMethod = @"POST";
    request.HTTPBody = logData;
    [request setValue:@"text/plain; charset=utf-8" forHTTPHeaderField:@"Content-Type"];
    [request setValue:@"wcpl_debug.log" forHTTPHeaderField:@"X-Log-Name"];

    NSURLSession *session = [NSURLSession sharedSession];
    NSURLSessionDataTask *task = [session dataTaskWithRequest:request completionHandler:^(NSData *data, NSURLResponse *response, NSError *error) {
        dispatch_async(dispatch_get_main_queue(), ^{
            if (error) {
                WCPLLog(@"日志上传失败: error=%@", error.localizedDescription ?: @"未知错误");
                UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"上传失败"
                                                                               message:error.localizedDescription ?: @"未知错误"
                                                                        preferredStyle:UIAlertControllerStyleAlert];
                [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];
                [self presentViewController:alert animated:YES completion:nil];
                return;
            }

            NSInteger statusCode = 0;
            if ([response isKindOfClass:[NSHTTPURLResponse class]]) {
                statusCode = ((NSHTTPURLResponse *)response).statusCode;
            }

            if (statusCode < 200 || statusCode >= 300) {
                WCPLLog(@"日志上传失败: status=%ld", (long)statusCode);
                NSString *msg = [NSString stringWithFormat:@"服务器返回状态码: %ld", (long)statusCode];
                UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"上传失败"
                                                                               message:msg
                                                                        preferredStyle:UIAlertControllerStyleAlert];
                [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];
                [self presentViewController:alert animated:YES completion:nil];
                return;
            }

            WCPLLog(@"日志上传成功: status=%ld", (long)statusCode);
            UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"上传成功"
                                                                           message:@"日志已发送到本地服务器"
                                                                    preferredStyle:UIAlertControllerStyleAlert];
            [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];
            [self presentViewController:alert animated:YES completion:nil];
        });
    }];

    [task resume];
}

- (void)showLogContent:(NSString *)content {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"最近日志 (最后100行)"
                                                                   message:content
                                                            preferredStyle:UIAlertControllerStyleAlert];

    // 复制日志内容
    UIAlertAction *copyAction = [UIAlertAction actionWithTitle:@"复制日志" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        UIPasteboard *pasteboard = [UIPasteboard generalPasteboard];
        pasteboard.string = content;

        UIAlertController *successAlert = [UIAlertController alertControllerWithTitle:@"成功"
                                                                               message:@"日志内容已复制到剪贴板"
                                                                        preferredStyle:UIAlertControllerStyleAlert];
        [successAlert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];
        [self presentViewController:successAlert animated:YES completion:nil];
    }];

    UIAlertAction *closeAction = [UIAlertAction actionWithTitle:@"关闭" style:UIAlertActionStyleCancel handler:nil];

    [alert addAction:copyAction];
    [alert addAction:closeAction];

    [self presentViewController:alert animated:YES completion:nil];
}

- (void)addMessageIgnoreSettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"消息屏蔽" Footer:@"开启后可在好友资料页/群聊资料页开启屏蔽，屏蔽后不再接收其消息提醒。"];

    [section addCell:[self createUserIgnoreEnableCell]];
    [section addCell:[self createIgnoredChatroomCountCell]];
    [section addCell:[self createIgnoredUserCountCell]];

    [self.tableViewMgr addSection:section];
}

- (WCTableViewNormalCellManager *)createUserIgnoreEnableCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingUserIgnoreEnable:) target:self title:@"启用消息屏蔽" on:[WCPLRedEnvelopConfig sharedConfig].userIgnoreEnable];
}

- (void)settingUserIgnoreEnable:(UISwitch *)sender {
    [WCPLRedEnvelopConfig sharedConfig].userIgnoreEnable = sender.on;
}

- (WCTableViewNormalCellManager *)createIgnoredChatroomCountCell {
    NSArray *chatrooms = [self ignoredChatroomUserNames];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showIgnoredChatroomList) target:self title:@"已屏蔽群聊" rightValue:[NSString stringWithFormat:@"%lu", (unsigned long)chatrooms.count] accessoryType:1];
}

- (WCTableViewNormalCellManager *)createIgnoredUserCountCell {
    NSArray *users = [self ignoredUserNames];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showIgnoredUserList) target:self title:@"已屏蔽好友" rightValue:[NSString stringWithFormat:@"%lu", (unsigned long)users.count] accessoryType:1];
}

- (NSArray<NSString *> *)ignoredChatroomUserNames {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    NSMutableArray<NSString *> *results = [NSMutableArray array];
    [config.chatIgnoreInfo enumerateKeysAndObjectsUsingBlock:^(NSString *key, NSNumber *obj, BOOL *stop) {
        if (obj.boolValue && [key rangeOfString:@"@chatroom"].location != NSNotFound) {
            [results addObject:key];
        }
    }];
    return results.copy;
}

- (NSArray<NSString *> *)ignoredUserNames {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    NSMutableArray<NSString *> *results = [NSMutableArray array];
    [config.userIgnoreInfo enumerateKeysAndObjectsUsingBlock:^(NSString *key, NSNumber *obj, BOOL *stop) {
        if (obj.boolValue && [key rangeOfString:@"@chatroom"].location == NSNotFound) {
            [results addObject:key];
        }
    }];
    return results.copy;
}

- (NSArray<NSString *> *)wcpl_userNamesFromSelection:(NSArray *)selection {
    if (![selection isKindOfClass:[NSArray class]]) {
        return @[];
    }
    NSMutableArray<NSString *> *names = [NSMutableArray array];
    Class contactClass = NSClassFromString(@"CContact");
    for (id obj in selection) {
        NSString *name = nil;
        if ([obj isKindOfClass:[NSString class]]) {
            name = (NSString *)obj;
        } else if (contactClass && [obj isKindOfClass:contactClass]) {
            @try {
                name = [obj valueForKey:@"m_nsUsrName"];
            } @catch (__unused NSException *exception) {
                name = nil;
            }
        } else {
            @try {
                name = [obj valueForKey:@"m_nsUsrName"];
            } @catch (__unused NSException *exception) {
                name = nil;
            }
        }
        if (name.length > 0) {
            [names addObject:name];
        }
    }
    return names.copy;
}

- (NSMutableDictionary *)wcpl_multiSelectDictionaryWithUserNames:(NSArray<NSString *> *)names {
    if (![names isKindOfClass:[NSArray class]] || names.count == 0) {
        return [NSMutableDictionary dictionary];
    }
    NSMutableDictionary *dict = [NSMutableDictionary dictionary];
    MMServiceCenter *serviceCenter = [objc_getClass("MMServiceCenter") defaultCenter];
    CContactMgr *contactMgr = [serviceCenter getService:objc_getClass("CContactMgr")];
    for (NSString *userName in names) {
        if (![userName isKindOfClass:[NSString class]] || userName.length == 0) {
            continue;
        }
        CContact *contact = [contactMgr getContactByName:userName];
        if (contact) {
            dict[userName] = contact;
        }
    }
    return dict;
}

- (BOOL)wcpl_presentMultiSelectContactsControllerWithTitle:(NSString *)title
                                             onlyChatRoom:(BOOL)onlyChatRoom
                                                    scene:(unsigned int)scene
                                       selectedUserNames:(NSArray<NSString *> *)selected {
    Class controllerClass = NSClassFromString(@"MultiSelectContactsViewController");
    if (!controllerClass) {
        return NO;
    }
    id controller = [[controllerClass alloc] init];
    if (!controller) {
        return NO;
    }

    if ([controller respondsToSelector:@selector(setM_delegate:)]) {
        ((void (*)(id, SEL, id))objc_msgSend)(controller, @selector(setM_delegate:), self);
    } else {
        @try {
            [controller setValue:self forKey:@"m_delegate"];
        } @catch (__unused NSException *exception) {
        }
    }

    if ([controller respondsToSelector:@selector(setM_uiGroupScene:)]) {
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(controller, @selector(setM_uiGroupScene:), scene);
    } else {
        @try {
            [controller setValue:@(scene) forKey:@"m_uiGroupScene"];
        } @catch (__unused NSException *exception) {
        }
    }

    if ([controller respondsToSelector:@selector(setM_onlyChatRoom:)]) {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(controller, @selector(setM_onlyChatRoom:), onlyChatRoom);
    } else {
        @try {
            [controller setValue:@(onlyChatRoom) forKey:@"m_onlyChatRoom"];
        } @catch (__unused NSException *exception) {
        }
    }

    NSMutableDictionary *selectedDict = [self wcpl_multiSelectDictionaryWithUserNames:selected];
    if (selectedDict.count > 0) {
        if ([controller respondsToSelector:@selector(setM_dicMultiSelect:)]) {
            ((void (*)(id, SEL, id))objc_msgSend)(controller, @selector(setM_dicMultiSelect:), selectedDict);
        } else {
            @try {
                [controller setValue:selectedDict forKey:@"m_dicMultiSelect"];
            } @catch (__unused NSException *exception) {
            }
        }
    }

    if ([controller respondsToSelector:@selector(setTitle:)] && title.length > 0) {
        ((void (*)(id, SEL, id))objc_msgSend)(controller, @selector(setTitle:), title);
    } else {
        @try {
            if (title.length > 0) {
                [controller setValue:title forKey:@"m_nsViewControllerTitle"];
                [controller setValue:title forKey:@"m_viewcontrllerTitle"];
            }
        } @catch (__unused NSException *exception) {
        }
    }

    if (![controller isKindOfClass:[UIViewController class]]) {
        return NO;
    }
    MMUINavigationController *nc = [[objc_getClass("MMUINavigationController") alloc] initWithRootViewController:controller];
    [self presentViewController:nc animated:YES completion:nil];
    return YES;
}

- (BOOL)wcpl_presentGroupSelectContactsControllerWithTitle:(NSString *)title
                                       selectedUserNames:(NSArray<NSString *> *)selected {
    Class controllerClass = NSClassFromString(@"GroupSelectContactsViewController");
    if (!controllerClass) {
        return NO;
    }
    id controller = [[controllerClass alloc] init];
    if (!controller) {
        return NO;
    }

    if ([controller respondsToSelector:@selector(setM_delegate:)]) {
        ((void (*)(id, SEL, id))objc_msgSend)(controller, @selector(setM_delegate:), self);
    } else {
        @try {
            [controller setValue:self forKey:@"m_delegate"];
        } @catch (__unused NSException *exception) {
        }
    }

    if ([controller respondsToSelector:@selector(setM_bShowSearchBar:)]) {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(controller, @selector(setM_bShowSearchBar:), YES);
    } else {
        @try {
            [controller setValue:@(YES) forKey:@"m_bShowSearchBar"];
        } @catch (__unused NSException *exception) {
        }
    }

    if ([controller respondsToSelector:@selector(setM_uiDataScene:)]) {
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(controller, @selector(setM_uiDataScene:), 5);
    } else {
        @try {
            [controller setValue:@(5) forKey:@"m_uiDataScene"];
        } @catch (__unused NSException *exception) {
        }
    }

    NSMutableDictionary *selectedDict = [self wcpl_multiSelectDictionaryWithUserNames:selected];
    if (selectedDict.count > 0) {
        if ([controller respondsToSelector:@selector(setM_dicMultiSelect:)]) {
            ((void (*)(id, SEL, id))objc_msgSend)(controller, @selector(setM_dicMultiSelect:), selectedDict);
        } else {
            @try {
                [controller setValue:selectedDict forKey:@"m_dicMultiSelect"];
            } @catch (__unused NSException *exception) {
            }
        }
    }

    if (title.length > 0) {
        if ([controller respondsToSelector:@selector(setM_viewControllerTitle:)]) {
            ((void (*)(id, SEL, id))objc_msgSend)(controller, @selector(setM_viewControllerTitle:), title);
        } else {
            @try {
                [controller setValue:title forKey:@"m_viewControllerTitle"];
            } @catch (__unused NSException *exception) {
            }
        }
        if ([controller respondsToSelector:@selector(setM_rightBarButtonTitle:)]) {
            ((void (*)(id, SEL, id))objc_msgSend)(controller, @selector(setM_rightBarButtonTitle:), @"确定");
        } else {
            @try {
                [controller setValue:@"确定" forKey:@"m_rightBarButtonTitle"];
            } @catch (__unused NSException *exception) {
            }
        }
    }

    UIViewController *presentController = nil;
    if ([controller isKindOfClass:[UIViewController class]]) {
        presentController = controller;
    } else if ([controller respondsToSelector:@selector(getViewController)]) {
        @try {
            id viewController = [controller performSelector:@selector(getViewController)];
            if ([viewController isKindOfClass:[UIViewController class]]) {
                presentController = viewController;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    if (!presentController) {
        return NO;
    }

    MMUINavigationController *nc = [[objc_getClass("MMUINavigationController") alloc] initWithRootViewController:presentController];
    [self presentViewController:nc animated:YES completion:nil];
    return YES;
}

- (void)showIgnoredChatroomList {
    self.groupSelectContext = WCPLGroupSelectContextIgnoreChatroom;
    NSArray *selected = [self ignoredChatroomUserNames];
    if ([self wcpl_presentGroupSelectContactsControllerWithTitle:@"屏蔽群聊"
                                             selectedUserNames:selected]) {
        return;
    }

    WCPLMultiSelectGroupsViewController *multiSGVC = [[WCPLMultiSelectGroupsViewController alloc] initWithBlackList:selected];
    multiSGVC.delegate = self;
    multiSGVC.titleText = @"屏蔽群聊";

    MMUINavigationController *nc = [[objc_getClass("MMUINavigationController") alloc] initWithRootViewController:multiSGVC];
    [self presentViewController:nc animated:YES completion:nil];
}

- (void)showIgnoredUserList {
    self.groupSelectContext = WCPLGroupSelectContextNone;
    NSArray *selected = [self ignoredUserNames];
    if ([self wcpl_presentMultiSelectContactsControllerWithTitle:@"屏蔽好友"
                                                   onlyChatRoom:NO
                                                          scene:0
                                             selectedUserNames:selected]) {
        return;
    }

    WCPLMultiSelectContactsViewController *multiSCVC = [[WCPLMultiSelectContactsViewController alloc] initWithSelectedContacts:selected];
    multiSCVC.delegate = self;
    multiSCVC.titleText = @"屏蔽好友";

    MMUINavigationController *nc = [[objc_getClass("MMUINavigationController") alloc] initWithRootViewController:multiSCVC];
    [self presentViewController:nc animated:YES completion:nil];
}

- (void)updateChatIgnoreInfoWithChatrooms:(NSArray *)chatrooms {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    NSMutableDictionary<NSString *, NSNumber *> *dict = [NSMutableDictionary dictionary];
    for (NSString *chatroom in chatrooms) {
        if ([chatroom rangeOfString:@"@chatroom"].location != NSNotFound) {
            dict[chatroom] = @(YES);
        }
    }
    config.chatIgnoreInfo = dict;
    [config saveChatIgnoreNameListToLocalFile];
}

- (void)updateUserIgnoreInfoWithUsers:(NSArray *)users {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    NSMutableDictionary<NSString *, NSNumber *> *dict = [NSMutableDictionary dictionary];
    for (NSString *user in users) {
        if ([user rangeOfString:@"@chatroom"].location == NSNotFound) {
            dict[user] = @(YES);
        }
    }
    config.userIgnoreInfo = dict;
    [config saveUserIgnoreNameListToLocalFile];
}

#pragma mark - Message Reply Setting

- (void)addMessageReplySettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"消息复读机"];

    [section addCell:[self createMessageReplySwitchCell]];

    // 只有启用复读机时才显示详细设置
    if ([WCPLRedEnvelopConfig sharedConfig].messageReplyEnable) {
        [section addCell:[self createRepeatButtonHapticCell]];
        [section addCell:[self createRepeatButtonStyleCell]];
        [section addCell:[self createRepeatButtonBackgroundAlphaCell]];
        [section addCell:[self createRepeatButtonSizeCell]];
        [section addCell:[self createRepeatButtonTextColorModeCell]];
        if ([WCPLRedEnvelopConfig sharedConfig].repeatButtonTextColorMode == 1) {
            [section addCell:[self createRepeatButtonTextColorDefaultCell]];
            [section addCell:[self createRepeatButtonTextColorTextCell]];
            [section addCell:[self createRepeatButtonTextColorVoiceCell]];
            [section addCell:[self createRepeatButtonTextColorEmoticonCell]];
            [section addCell:[self createRepeatButtonTextColorQuoteCell]];
        }
        [section addCell:[self createDebugLogSwitchCell]];
    }

    [self.tableViewMgr addSection:section];
}

#pragma mark - Swipe Quote Setting

- (void)addSwipeQuoteSettingSection {
    WCTableViewSectionManager *section = [objc_getClass("WCTableViewSectionManager") sectionInfoHeader:@"消息手势" Footer:@"提示：复读手势暂不支持图片/视频消息"];

    // 消息手势总开关
    [section addCell:[self createSwipeGestureSwitchCell]];

    // 只有启用总开关时才显示详细设置
    if ([WCPLRedEnvelopConfig sharedConfig].swipeGestureEnable) {
        // 灵敏度
        [section addCell:[self createSwipeSensitivityCell]];

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

- (NSString *)swipeSensitivityNameForLevel:(NSInteger)level {
    switch (level) {
        case 0: return @"低";
        case 2: return @"高";
        case 1:
        default: return @"中";
    }
}

- (WCTableViewNormalCellManager *)createSwipeGestureSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingSwipeGesture:) target:self title:@"启用消息手势" on:[WCPLRedEnvelopConfig sharedConfig].swipeGestureEnable];
}

- (WCTableViewNormalCellManager *)createSwipeSensitivityCell {
    NSInteger level = [WCPLRedEnvelopConfig sharedConfig].swipeSensitivityLevel;
    NSString *name = [self swipeSensitivityNameForLevel:level];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showSwipeSensitivityPicker) target:self title:@"  手势灵敏度" rightValue:name accessoryType:1];
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

- (void)showSwipeSensitivityPicker {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"手势灵敏度"
                                                                   message:@"高=更容易触发，低=更不易误触"
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    UIAlertAction *lowAction = [UIAlertAction actionWithTitle:@"低 (不易误触)" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        [WCPLRedEnvelopConfig sharedConfig].swipeSensitivityLevel = 0;
        [self reloadTableData];
    }];

    UIAlertAction *midAction = [UIAlertAction actionWithTitle:@"中 (默认)" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        [WCPLRedEnvelopConfig sharedConfig].swipeSensitivityLevel = 1;
        [self reloadTableData];
    }];

    UIAlertAction *highAction = [UIAlertAction actionWithTitle:@"高 (更灵敏)" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        [WCPLRedEnvelopConfig sharedConfig].swipeSensitivityLevel = 2;
        [self reloadTableData];
    }];

    UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil];

    [alert addAction:lowAction];
    [alert addAction:midAction];
    [alert addAction:highAction];
    [alert addAction:cancelAction];

    [self presentViewController:alert animated:YES completion:nil];
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

- (WCTableViewNormalCellManager *)createRepeatButtonHapticCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingRepeatButtonHaptic:) target:self title:@"复读按钮震动反馈" on:[WCPLRedEnvelopConfig sharedConfig].repeatButtonHapticEnable];
}

- (void)settingRepeatButtonHaptic:(UISwitch *)sender {
    [WCPLRedEnvelopConfig sharedConfig].repeatButtonHapticEnable = sender.on;
}

- (WCTableViewNormalCellManager *)createDebugLogSwitchCell {
    return [objc_getClass("WCTableViewNormalCellManager") switchCellForSel:@selector(settingDebugLog:) target:self title:@"启用调试日志" on:[WCPLLogger sharedLogger].enabled];
}

- (void)settingDebugLog:(UISwitch *)sender {
    [WCPLLogger sharedLogger].enabled = sender.on;

    if (sender.on) {
        // 显示日志文件路径提示
        NSString *logPath = [[WCPLLogger sharedLogger] logFilePath];
        UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"调试日志已启用"
                                                                       message:[NSString stringWithFormat:@"日志文件路径:\n%@\n\n可通过文件管理器查看", logPath]
                                                                preferredStyle:UIAlertControllerStyleAlert];
        [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];
        [self presentViewController:alert animated:YES completion:nil];
    }
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

- (WCTableViewNormalCellManager *)createRepeatButtonBackgroundAlphaCell {
    CGFloat alpha = [WCPLRedEnvelopConfig sharedConfig].repeatButtonBackgroundAlpha;
    NSString *value = [NSString stringWithFormat:@"%.2f", alpha];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(settingRepeatButtonBackgroundAlpha) target:self title:@"按钮背景透明度" rightValue:value accessoryType:1];
}

- (void)settingRepeatButtonBackgroundAlpha {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"按钮背景透明度"
                                                                   message:@"范围 0.10 ~ 1.00"
                                                            preferredStyle:UIAlertControllerStyleAlert];

    CGFloat currentValue = [WCPLRedEnvelopConfig sharedConfig].repeatButtonBackgroundAlpha;
    [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
        textField.placeholder = @"例如：0.85";
        textField.keyboardType = UIKeyboardTypeDecimalPad;
        textField.text = [NSString stringWithFormat:@"%.2f", currentValue];
    }];

    UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil];
    UIAlertAction *confirmAction = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        NSString *text = alert.textFields.firstObject.text;
        double value = 0;
        if (![self wcpl_parseDoubleFromText:text value:&value]) {
            [self showErrorAlert:@"请输入有效的数值 (0.10 ~ 1.00)"];
            return;
        }
        if (value < 0.10 || value > 1.00) {
            [self showErrorAlert:@"范围应在 0.10 ~ 1.00 之间"];
            return;
        }
        [WCPLRedEnvelopConfig sharedConfig].repeatButtonBackgroundAlpha = value;
        [self reloadTableData];
    }];

    [alert addAction:cancelAction];
    [alert addAction:confirmAction];

    [self presentViewController:alert animated:YES completion:nil];
}

- (WCTableViewNormalCellManager *)createRepeatButtonSizeCell {
    CGFloat size = [WCPLRedEnvelopConfig sharedConfig].repeatButtonSize;
    NSString *value = [NSString stringWithFormat:@"%.0f", size];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(settingRepeatButtonSize) target:self title:@"按钮大小" rightValue:value accessoryType:1];
}

- (void)settingRepeatButtonSize {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"按钮大小"
                                                                   message:@"范围 18 ~ 36"
                                                            preferredStyle:UIAlertControllerStyleAlert];

    CGFloat currentValue = [WCPLRedEnvelopConfig sharedConfig].repeatButtonSize;
    [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
        textField.placeholder = @"例如：24";
        textField.keyboardType = UIKeyboardTypeNumberPad;
        textField.text = [NSString stringWithFormat:@"%.0f", currentValue];
    }];

    UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil];
    UIAlertAction *confirmAction = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        NSString *text = alert.textFields.firstObject.text;
        double value = 0;
        if (![self wcpl_parseDoubleFromText:text value:&value]) {
            [self showErrorAlert:@"请输入有效的数值 (18 ~ 36)"];
            return;
        }
        if (value < 18 || value > 36) {
            [self showErrorAlert:@"范围应在 18 ~ 36 之间"];
            return;
        }
        [WCPLRedEnvelopConfig sharedConfig].repeatButtonSize = value;
        [self reloadTableData];
    }];

    [alert addAction:cancelAction];
    [alert addAction:confirmAction];

    [self presentViewController:alert animated:YES completion:nil];
}

- (WCTableViewNormalCellManager *)createRepeatButtonTextColorModeCell {
    NSArray *modeNames = @[@"统一颜色", @"按消息类型"];
    NSInteger mode = [WCPLRedEnvelopConfig sharedConfig].repeatButtonTextColorMode;
    NSString *modeName = (mode >= 0 && mode < modeNames.count) ? modeNames[mode] : modeNames[0];
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(showRepeatButtonTextColorModePicker) target:self title:@"文字颜色规则" rightValue:modeName accessoryType:1];
}

- (void)showRepeatButtonTextColorModePicker {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"文字颜色规则"
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleActionSheet];

    UIAlertAction *defaultAction = [UIAlertAction actionWithTitle:@"统一颜色" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        [WCPLRedEnvelopConfig sharedConfig].repeatButtonTextColorMode = 0;
        [self reloadTableData];
    }];

    UIAlertAction *typeAction = [UIAlertAction actionWithTitle:@"按消息类型" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        [WCPLRedEnvelopConfig sharedConfig].repeatButtonTextColorMode = 1;
        [self reloadTableData];
    }];

    UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil];

    [alert addAction:defaultAction];
    [alert addAction:typeAction];
    [alert addAction:cancelAction];

    [self presentViewController:alert animated:YES completion:nil];
}

- (WCTableViewNormalCellManager *)createRepeatButtonTextColorDefaultCell {
    NSString *value = [WCPLRedEnvelopConfig sharedConfig].repeatButtonTextColorDefault ?: @"";
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(settingRepeatButtonTextColorDefault) target:self title:@"文字颜色-默认" rightValue:value accessoryType:1];
}

- (WCTableViewNormalCellManager *)createRepeatButtonTextColorTextCell {
    NSString *value = [WCPLRedEnvelopConfig sharedConfig].repeatButtonTextColorText ?: @"";
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(settingRepeatButtonTextColorText) target:self title:@"文字颜色-文本" rightValue:value accessoryType:1];
}

- (WCTableViewNormalCellManager *)createRepeatButtonTextColorVoiceCell {
    NSString *value = [WCPLRedEnvelopConfig sharedConfig].repeatButtonTextColorVoice ?: @"";
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(settingRepeatButtonTextColorVoice) target:self title:@"文字颜色-语音" rightValue:value accessoryType:1];
}

- (WCTableViewNormalCellManager *)createRepeatButtonTextColorEmoticonCell {
    NSString *value = [WCPLRedEnvelopConfig sharedConfig].repeatButtonTextColorEmoticon ?: @"";
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(settingRepeatButtonTextColorEmoticon) target:self title:@"文字颜色-表情" rightValue:value accessoryType:1];
}

- (WCTableViewNormalCellManager *)createRepeatButtonTextColorQuoteCell {
    NSString *value = [WCPLRedEnvelopConfig sharedConfig].repeatButtonTextColorQuote ?: @"";
    return [objc_getClass("WCTableViewNormalCellManager") normalCellForSel:@selector(settingRepeatButtonTextColorQuote) target:self title:@"文字颜色-引用" rightValue:value accessoryType:1];
}

- (void)settingRepeatButtonTextColorDefault {
    NSString *current = [WCPLRedEnvelopConfig sharedConfig].repeatButtonTextColorDefault ?: @"";
    [self showRepeatButtonTextColorInputWithTitle:@"默认颜色" currentValue:current onConfirm:^(NSString *hexString) {
        [WCPLRedEnvelopConfig sharedConfig].repeatButtonTextColorDefault = hexString;
        [self reloadTableData];
    }];
}

- (void)settingRepeatButtonTextColorText {
    NSString *current = [WCPLRedEnvelopConfig sharedConfig].repeatButtonTextColorText ?: @"";
    [self showRepeatButtonTextColorInputWithTitle:@"文本消息颜色" currentValue:current onConfirm:^(NSString *hexString) {
        [WCPLRedEnvelopConfig sharedConfig].repeatButtonTextColorText = hexString;
        [self reloadTableData];
    }];
}

- (void)settingRepeatButtonTextColorVoice {
    NSString *current = [WCPLRedEnvelopConfig sharedConfig].repeatButtonTextColorVoice ?: @"";
    [self showRepeatButtonTextColorInputWithTitle:@"语音消息颜色" currentValue:current onConfirm:^(NSString *hexString) {
        [WCPLRedEnvelopConfig sharedConfig].repeatButtonTextColorVoice = hexString;
        [self reloadTableData];
    }];
}

- (void)settingRepeatButtonTextColorEmoticon {
    NSString *current = [WCPLRedEnvelopConfig sharedConfig].repeatButtonTextColorEmoticon ?: @"";
    [self showRepeatButtonTextColorInputWithTitle:@"表情消息颜色" currentValue:current onConfirm:^(NSString *hexString) {
        [WCPLRedEnvelopConfig sharedConfig].repeatButtonTextColorEmoticon = hexString;
        [self reloadTableData];
    }];
}

- (void)settingRepeatButtonTextColorQuote {
    NSString *current = [WCPLRedEnvelopConfig sharedConfig].repeatButtonTextColorQuote ?: @"";
    [self showRepeatButtonTextColorInputWithTitle:@"引用消息颜色" currentValue:current onConfirm:^(NSString *hexString) {
        [WCPLRedEnvelopConfig sharedConfig].repeatButtonTextColorQuote = hexString;
        [self reloadTableData];
    }];
}

- (void)showRepeatButtonTextColorInputWithTitle:(NSString *)title
                                  currentValue:(NSString *)currentValue
                                      onConfirm:(void (^)(NSString *hexString))onConfirm {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:title
                                                                   message:@"请输入 Hex 颜色，例如 #07C160"
                                                            preferredStyle:UIAlertControllerStyleAlert];

    [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
        textField.placeholder = @"#RRGGBB";
        textField.keyboardType = UIKeyboardTypeASCIICapable;
        textField.autocorrectionType = UITextAutocorrectionTypeNo;
        textField.autocapitalizationType = UITextAutocapitalizationTypeAllCharacters;
        textField.text = currentValue;
    }];

    UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil];
    UIAlertAction *confirmAction = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        NSString *text = alert.textFields.firstObject.text;
        NSString *normalized = [self wcpl_normalizedHexColorString:text];
        if (!normalized) {
            [self showErrorAlert:@"请输入有效的 Hex 颜色，例如 #07C160"];
            return;
        }
        if (onConfirm) {
            onConfirm(normalized);
        }
    }];

    [alert addAction:cancelAction];
    [alert addAction:confirmAction];

    [self presentViewController:alert animated:YES completion:nil];
}

- (NSString *)wcpl_normalizedHexColorString:(NSString *)input {
    if (!input) return nil;
    NSString *trimmed = [[input stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]] uppercaseString];
    if (trimmed.length == 0) return nil;
    if (![trimmed hasPrefix:@"#"]) {
        trimmed = [@"#" stringByAppendingString:trimmed];
    }
    if (trimmed.length != 7) return nil;
    NSString *hexPart = [trimmed substringFromIndex:1];
    NSCharacterSet *validSet = [NSCharacterSet characterSetWithCharactersInString:@"0123456789ABCDEF"];
    for (NSUInteger i = 0; i < hexPart.length; i++) {
        unichar c = [hexPart characterAtIndex:i];
        if (![validSet characterIsMember:c]) {
            return nil;
        }
    }
    return trimmed;
}

- (BOOL)wcpl_parseDoubleFromText:(NSString *)text value:(double *)value {
    if (!text) return NO;
    NSString *trimmed = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    if (trimmed.length == 0) return NO;
    NSScanner *scanner = [NSScanner scannerWithString:trimmed];
    double result = 0;
    if (![scanner scanDouble:&result] || !scanner.isAtEnd) {
        return NO;
    }
    if (value) {
        *value = result;
    }
    return YES;
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
    self.groupSelectContext = WCPLGroupSelectContextNone;
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)onMultiSelectGroupReturn:(NSArray *)arg1 {
    NSArray *userNames = [self wcpl_userNamesFromSelection:arg1];
    if (self.groupSelectContext == WCPLGroupSelectContextIgnoreChatroom) {
        [self updateChatIgnoreInfoWithChatrooms:userNames];
    } else {
        [WCPLRedEnvelopConfig sharedConfig].blackList = userNames;
    }
    [self reloadTableData];
    self.groupSelectContext = WCPLGroupSelectContextNone;
    [self dismissViewControllerAnimated:YES completion:nil];
}

#pragma mark - WCPLMultiSelectContactsViewControllerDelegate

- (void)onMultiSelectContactCancel {
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)onMultiSelectContactReturn:(NSArray *)arg1 {
    NSArray *userNames = [self wcpl_userNamesFromSelection:arg1];
    if (self.groupSelectContext == WCPLGroupSelectContextIgnoreChatroom) {
        [self updateChatIgnoreInfoWithChatrooms:userNames];
    } else if (self.groupSelectContext == WCPLGroupSelectContextBlackList) {
        [WCPLRedEnvelopConfig sharedConfig].blackList = userNames;
    } else {
        [self updateUserIgnoreInfoWithUsers:userNames];
    }
    [self reloadTableData];
    self.groupSelectContext = WCPLGroupSelectContextNone;
    [self dismissViewControllerAnimated:YES completion:nil];
}

#pragma mark - GroupSelectContactsViewControllerDelegate

- (void)onGroupMultiSelectContactReturn:(NSArray *)arg1 {
    [self onMultiSelectContactReturn:arg1];
}

- (void)onGroupSelectContactReturn:(id)arg1 {
    if (!arg1) {
        [self onMultiSelectContactCancel];
        return;
    }
    [self onMultiSelectContactReturn:@[arg1]];
}

- (_Bool)onShouldSelectContact:(id)arg1 {
    return YES;
}

@end
