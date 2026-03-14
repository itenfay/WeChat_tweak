#import "WCPLRedEnvelopSummaryPresenter.h"

#import "WCPLLogger.h"
#import "WCPLPureHelpers.h"
#import "WCPLRedEnvelopConfig.h"
#import <UIKit/UIKit.h>
#import <objc/message.h>
#import <objc/runtime.h>
static NSString *const kWCPLFeatureReceiveDonePageSummary = @"receive_done_page_summary";
static const void *kWCPLReceiveDonePageSummaryLabelKey = &kWCPLReceiveDonePageSummaryLabelKey;
static void (*wcpl_orig_StoryViewController_viewDidLoad)(id, SEL) = NULL;

static long long wcpl_redEnvelopSummaryLongLongFromSelector(id obj, SEL sel, BOOL *found) {
    if (found) {
        *found = NO;
    }
    if (!(obj && sel && [obj respondsToSelector:sel])) {
        return 0;
    }
    @try {
        long long value = ((long long (*)(id, SEL))objc_msgSend)(obj, sel);
        if (found) {
            *found = YES;
        }
        return value;
    } @catch (__unused NSException *exception) {
        return 0;
    }
}

static BOOL wcpl_redEnvelopSummaryLongLongForField(id obj,
                                                   NSString *fieldName,
                                                   long long *valueOut) {
    if (valueOut) {
        *valueOut = 0;
    }
    if (!(obj && fieldName.length > 0)) {
        return NO;
    }
    BOOL found = NO;
    long long selectorValue = wcpl_redEnvelopSummaryLongLongFromSelector(obj,
                                                                         NSSelectorFromString(fieldName),
                                                                         &found);
    if (found) {
        if (valueOut) {
            *valueOut = selectorValue;
        }
        return YES;
    }
    id rawValue = nil;
    @try {
        rawValue = [obj valueForKey:fieldName];
    } @catch (__unused NSException *exception) {
        rawValue = nil;
    }
    if (!(rawValue && [rawValue respondsToSelector:@selector(longLongValue)])) {
        return NO;
    }
    @try {
        if (valueOut) {
            *valueOut = [rawValue longLongValue];
        }
        return YES;
    } @catch (__unused NSException *exception) {
        return NO;
    }
}

static id wcpl_redEnvelopSummaryDataFromTarget(id target) {
    if (!target) {
        return nil;
    }
    id data = nil;
    @try {
        if ([target respondsToSelector:@selector(m_data)]) {
            data = ((id (*)(id, SEL))objc_msgSend)(target, @selector(m_data));
        }
    } @catch (__unused NSException *exception) {
        data = nil;
    }
    if (data) {
        return data;
    }
    @try {
        return [target valueForKey:@"m_data"];
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

static id wcpl_redEnvelopSummaryDetailInfoFromData(id data) {
    if (!data) {
        return nil;
    }
    id detailInfo = nil;
    @try {
        if ([data respondsToSelector:@selector(m_oWCRedEnvelopesDetailInfo)]) {
            detailInfo = ((id (*)(id, SEL))objc_msgSend)(data,
                                                         @selector(m_oWCRedEnvelopesDetailInfo));
        }
    } @catch (__unused NSException *exception) {
        detailInfo = nil;
    }
    if (detailInfo) {
        return detailInfo;
    }
    @try {
        return [data valueForKey:@"m_oWCRedEnvelopesDetailInfo"];
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

static UILabel *wcpl_redEnvelopSummaryLabelForView(UIView *container, BOOL createIfNeeded) {
    UILabel *label = objc_getAssociatedObject(container, kWCPLReceiveDonePageSummaryLabelKey);
    if (label || !createIfNeeded) {
        return label;
    }
    label = [[UILabel alloc] initWithFrame:CGRectZero];
    label.numberOfLines = 0;
    label.textAlignment = NSTextAlignmentCenter;
    label.font = [UIFont systemFontOfSize:14.0];
    label.textColor = [UIColor whiteColor];
    label.backgroundColor = [UIColor clearColor];
    label.lineBreakMode = NSLineBreakByWordWrapping;
    label.userInteractionEnabled = NO;
    label.hidden = NO;
    objc_setAssociatedObject(container,
                             kWCPLReceiveDonePageSummaryLabelKey,
                             label,
                             OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [container addSubview:label];
    return label;
}

static CGFloat wcpl_redEnvelopSummaryStatusBarHeight(void) {
    UIApplication *app = [UIApplication sharedApplication];
    if (!app) {
        return 0.0;
    }
    if (@available(iOS 13.0, *)) {
        for (UIScene *scene in app.connectedScenes) {
            if (![scene isKindOfClass:[UIWindowScene class]]) {
                continue;
            }
            UIStatusBarManager *manager = ((UIWindowScene *)scene).statusBarManager;
            CGFloat height = CGRectGetHeight(manager.statusBarFrame);
            if (height > 0.0) {
                return height;
            }
        }
    }
    return 0.0;
}

static void wcpl_redEnvelopSummaryLayoutLabel(UIView *container, UILabel *label) {
    if (!(container && label)) {
        return;
    }
    CGFloat width = CGRectGetWidth(container.frame);
    if (width <= 0.0) {
        width = CGRectGetWidth(container.bounds);
    }
    if (width <= 0.0) {
        return;
    }
    label.frame = CGRectMake(0.0, wcpl_redEnvelopSummaryStatusBarHeight(), width, 80.0);
}

static void wcpl_redEnvelopSummaryApplyToTarget(id target) {
    if (![target isKindOfClass:[UIViewController class]]) {
        return;
    }
    UIView *container = nil;
    @try {
        container = ((UIViewController *)target).view;
    } @catch (__unused NSException *exception) {
        container = nil;
    }
    if (!container) {
        return;
    }
    UILabel *existing = wcpl_redEnvelopSummaryLabelForView(container, NO);
    if (![WCPLRedEnvelopConfig sharedConfig].receiveDonePageSummaryEnable) {
        existing.hidden = YES;
        return;
    }
    id data = wcpl_redEnvelopSummaryDataFromTarget(target);
    id detailInfo = wcpl_redEnvelopSummaryDetailInfoFromData(data);
    if (!detailInfo) {
        existing.hidden = YES;
        return;
    }
    UILabel *label = existing ?: wcpl_redEnvelopSummaryLabelForView(container, YES);
    if (!label) {
        return;
    }
    long long totalAmount = 0;
    long long totalNum = 0;
    long long recNum = 0;
    long long recAmount = 0;
    BOOL ok1 = wcpl_redEnvelopSummaryLongLongForField(detailInfo, @"m_lTotalAmount", &totalAmount);
    BOOL ok2 = wcpl_redEnvelopSummaryLongLongForField(detailInfo, @"m_lTotalNum", &totalNum);
    BOOL ok3 = wcpl_redEnvelopSummaryLongLongForField(detailInfo, @"m_lRecNum", &recNum);
    BOOL ok4 = wcpl_redEnvelopSummaryLongLongForField(detailInfo, @"m_lRecAmount", &recAmount);
    if (!(ok1 && ok2 && ok3 && ok4)) {
        label.hidden = YES;
        return;
    }
    totalAmount = MAX(0, totalAmount);
    totalNum = MAX(0, totalNum);
    recNum = MAX(0, recNum);
    recAmount = MAX(0, recAmount);
    long long remainNum = MAX(0, totalNum - recNum);
    long long remainAmount = MAX(0, totalAmount - recAmount);
    label.hidden = NO;
    label.text = [NSString stringWithFormat:@"总额：%.2f元 / 总数：%lld个\n剩余：%lld个(%.2f元)",
                  ((double)totalAmount) / 100.0,
                  totalNum,
                  remainNum,
                  ((double)remainAmount) / 100.0];
    wcpl_redEnvelopSummaryLayoutLabel(container, label);
    WCPLLogDebug(@"红包领取完页汇总: feature_id=%@ branch=miyou_copy_storyvc data=%@ detail=%@ totalAmount=%lld totalNum=%lld recNum=%lld recAmount=%lld",
                 kWCPLFeatureReceiveDonePageSummary,
                 data ? NSStringFromClass([data class]) : @"(nil)",
                 NSStringFromClass([detailInfo class]),
                 totalAmount,
                 totalNum,
                 recNum,
                 recAmount);
}

static void wcpl_redEnvelopSummaryStoryViewControllerViewDidLoad(id self, SEL _cmd) {
    if (wcpl_orig_StoryViewController_viewDidLoad) {
        wcpl_orig_StoryViewController_viewDidLoad(self, _cmd);
    }
    @try {
        wcpl_redEnvelopSummaryApplyToTarget(self);
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.25 * NSEC_PER_SEC)),
                       dispatch_get_main_queue(), ^{
            wcpl_redEnvelopSummaryApplyToTarget(self);
        });
    } @catch (NSException *exception) {
        WCPLLogError(@"红包领取完页汇总异常: feature_id=%@ branch=miyou_copy_storyvc exception=%@",
                     kWCPLFeatureReceiveDonePageSummary,
                     WCPLTrimText(exception.reason) ?: @"unknown");
    }
}

static void wcpl_redEnvelopSummaryInstallStoryViewControllerHook(void) {
    Class targetClass = objc_getClass("WCRedEnvelopesStoryViewController");
    if (!targetClass) {
        WCPLLogDebug(@"红包领取完页汇总: feature_id=%@ branch=miyou_copy_storyvc class_not_found=%@",
                     kWCPLFeatureReceiveDonePageSummary,
                     @"WCRedEnvelopesStoryViewController");
        return;
    }
    Method method = class_getInstanceMethod(targetClass, @selector(viewDidLoad));
    if (!method) {
        return;
    }
    IMP newImp = (IMP)wcpl_redEnvelopSummaryStoryViewControllerViewDidLoad;
    IMP oldImp = method_getImplementation(method);
    if (oldImp == newImp) {
        return;
    }
    wcpl_orig_StoryViewController_viewDidLoad = (void (*)(id, SEL))oldImp;
    method_setImplementation(method, newImp);
    WCPLLogDebug(@"红包领取完页汇总: feature_id=%@ branch=miyou_copy_storyvc hook=installed class=%@ method=%@",
                 kWCPLFeatureReceiveDonePageSummary,
                 NSStringFromClass(targetClass),
                 @"viewDidLoad");
}

void WCPLInstallRedEnvelopSummaryPresenterHook(void) {
    dispatch_async(dispatch_get_main_queue(), ^{
        wcpl_redEnvelopSummaryInstallStoryViewControllerHook();
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.0 * NSEC_PER_SEC)),
                       dispatch_get_main_queue(), ^{
            wcpl_redEnvelopSummaryInstallStoryViewControllerHook();
        });
    });
}
