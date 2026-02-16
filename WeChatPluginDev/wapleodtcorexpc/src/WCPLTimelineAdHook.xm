#import "WCPLConfigCenter.h"
#import "WCPLLogger.h"

#import <objc/message.h>

static BOOL wcpl_timeline_shouldBlockAds(void) {
    return [WCPLConfigCenter shared].timeline.blockTimelineBrandAdsEnable;
}

static void wcpl_timeline_logBlockResult(NSString *scene, NSUInteger removedDatas, NSUInteger removedAds);

static id wcpl_timeline_safeGetProperty(id obj, SEL selector) {
    if (!obj || !selector || ![obj respondsToSelector:selector]) {
        return nil;
    }

    @try {
        return ((id (*)(id, SEL))objc_msgSend)(obj, selector);
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

static BOOL wcpl_timeline_isAdItem(id item) {
    if (!item) return NO;

    id adInfo = wcpl_timeline_safeGetProperty(item, @selector(advertiseInfo));
    if (adInfo && adInfo != [NSNull null]) return YES;

    id atFriendAdInfo = wcpl_timeline_safeGetProperty(item, @selector(atFriendAdvertiseInfo));
    if (atFriendAdInfo && atFriendAdInfo != [NSNull null]) return YES;

    id adCoding = wcpl_timeline_safeGetProperty(item, @selector(advertiseInfoNSCodingData));
    if ([adCoding respondsToSelector:@selector(length)] && ((NSUInteger)[adCoding length] > 0)) return YES;

    id atFriendAdCoding = wcpl_timeline_safeGetProperty(item, @selector(atFriendAdvertiseInfoNSCodingData));
    if ([atFriendAdCoding respondsToSelector:@selector(length)] && ((NSUInteger)[atFriendAdCoding length] > 0)) return YES;

    return NO;
}

static id wcpl_timeline_filterTimelineDatas(id datas, NSUInteger *removedCount) {
    if (removedCount) *removedCount = 0;
    if (![datas isKindOfClass:[NSArray class]]) return datas;

    NSArray *source = (NSArray *)datas;
    NSMutableArray *filtered = [NSMutableArray arrayWithCapacity:source.count];
    NSUInteger removed = 0;

    for (id item in source) {
        if (wcpl_timeline_isAdItem(item)) {
            removed += 1;
            continue;
        }
        [filtered addObject:item];
    }

    if (removedCount) *removedCount = removed;
    if (removed == 0) return datas;
    return filtered;
}

static id wcpl_timeline_filterAdDatas(id adDatas, NSUInteger *removedCount) {
    if (removedCount) *removedCount = 0;
    if (![adDatas isKindOfClass:[NSArray class]]) return adDatas;

    NSArray *source = (NSArray *)adDatas;
    if (removedCount) *removedCount = source.count;
    if (source.count == 0) return adDatas;
    return [NSMutableArray array];
}

static NSUInteger wcpl_timeline_removeAdItemsInMutableArray(NSMutableArray *array) {
    if (![array isKindOfClass:[NSMutableArray class]] || array.count == 0) return 0;

    NSUInteger removed = 0;
    for (NSInteger i = (NSInteger)array.count - 1; i >= 0; i--) {
        id item = array[(NSUInteger)i];
        if (wcpl_timeline_isAdItem(item)) {
            [array removeObjectAtIndex:(NSUInteger)i];
            removed += 1;
        }
    }
    return removed;
}

static NSUInteger wcpl_timeline_cleanupManagerCache(id manager) {
    if (!manager) return 0;

    NSUInteger removedDatas = 0;
    NSUInteger removedAds = 0;

    id timelineDataList = wcpl_timeline_safeGetProperty(manager, @selector(timelineDataList));
    if ([timelineDataList isKindOfClass:[NSMutableArray class]]) {
        removedDatas += wcpl_timeline_removeAdItemsInMutableArray((NSMutableArray *)timelineDataList);
    }

    id timelineBackupList = wcpl_timeline_safeGetProperty(manager, @selector(timelineDataListBeforeJumpToMissRead));
    if ([timelineBackupList isKindOfClass:[NSMutableArray class]]) {
        removedDatas += wcpl_timeline_removeAdItemsInMutableArray((NSMutableArray *)timelineBackupList);
    }

    id advertiseDataList = wcpl_timeline_safeGetProperty(manager, @selector(advertiseDataList));
    if ([advertiseDataList isKindOfClass:[NSMutableArray class]]) {
        removedAds = ((NSMutableArray *)advertiseDataList).count;
        [(NSMutableArray *)advertiseDataList removeAllObjects];
    }

    wcpl_timeline_logBlockResult(@"cleanupCache", removedDatas, removedAds);
    return (removedDatas + removedAds);
}

static void wcpl_timeline_logBlockResult(NSString *scene, NSUInteger removedDatas, NSUInteger removedAds) {
    if (removedDatas == 0 && removedAds == 0) return;

    static CFAbsoluteTime lastLogAt = 0;
    CFAbsoluteTime now = CFAbsoluteTimeGetCurrent();
    if ((now - lastLogAt) < 1.5) return;
    lastLogAt = now;

    WCPLLogInfo(@"[朋友圈广告] 拦截 %@: datas=%lu adDatas=%lu",
                scene ?: @"unknown",
                (unsigned long)removedDatas,
                (unsigned long)removedAds);
}

%hook GroupTool

- (BOOL)isBrandTimelineOpen {
    BOOL originalValue = %orig;

    if (!wcpl_timeline_shouldBlockAds()) {
        return originalValue;
    }

    if (originalValue) {
        static CFAbsoluteTime lastLogAt = 0;
        CFAbsoluteTime now = CFAbsoluteTimeGetCurrent();
        if ((now - lastLogAt) > 3.0) {
            lastLogAt = now;
            WCPLLogInfo(@"[朋友圈广告] 覆盖 isBrandTimelineOpen=NO");
        }
    }

    return NO;
}

%end

%hook WCTimelineMgr

- (void)beginSession {
    %orig;

    if (!wcpl_timeline_shouldBlockAds()) return;
    wcpl_timeline_cleanupManagerCache(self);
}

- (void)onPageRequestPrepared:(id)arg1 pageType:(long long)arg2 {
    if (wcpl_timeline_shouldBlockAds()) {
        wcpl_timeline_cleanupManagerCache(self);
    }
    %orig(arg1, arg2);
}

- (void)onPrePageUpdated:(unsigned long long)arg1 datas:(id)arg2 adDatas:(id)arg3 changedTime:(unsigned int)arg4 wsInfos:(id)arg5 {
    if (!wcpl_timeline_shouldBlockAds()) {
        %orig(arg1, arg2, arg3, arg4, arg5);
        return;
    }

    NSUInteger removedDatas = 0;
    NSUInteger removedAds = 0;
    id filteredDatas = wcpl_timeline_filterTimelineDatas(arg2, &removedDatas);
    id filteredAdDatas = wcpl_timeline_filterAdDatas(arg3, &removedAds);
    wcpl_timeline_logBlockResult(@"prePage", removedDatas, removedAds);

    %orig(arg1, filteredDatas, filteredAdDatas, arg4, arg5);
    wcpl_timeline_cleanupManagerCache(self);
}

- (void)onNextPageUpdated:(unsigned long long)arg1 datas:(id)arg2 adDatas:(id)arg3 changedTime:(unsigned int)arg4 wsInfos:(id)arg5 {
    if (!wcpl_timeline_shouldBlockAds()) {
        %orig(arg1, arg2, arg3, arg4, arg5);
        return;
    }

    NSUInteger removedDatas = 0;
    NSUInteger removedAds = 0;
    id filteredDatas = wcpl_timeline_filterTimelineDatas(arg2, &removedDatas);
    id filteredAdDatas = wcpl_timeline_filterAdDatas(arg3, &removedAds);
    wcpl_timeline_logBlockResult(@"nextPage", removedDatas, removedAds);

    %orig(arg1, filteredDatas, filteredAdDatas, arg4, arg5);
    wcpl_timeline_cleanupManagerCache(self);
}

- (void)onFirstPageUpdated:(unsigned long long)arg1 dataChanged:(_Bool)arg2 datas:(id)arg3 adDatas:(id)arg4 changedTime:(unsigned int)arg5 feedIds:(id)arg6 feedFlags:(id)arg7 wsInfos:(id)arg8 {
    if (!wcpl_timeline_shouldBlockAds()) {
        %orig(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
        return;
    }

    NSUInteger removedDatas = 0;
    NSUInteger removedAds = 0;
    id filteredDatas = wcpl_timeline_filterTimelineDatas(arg3, &removedDatas);
    id filteredAdDatas = wcpl_timeline_filterAdDatas(arg4, &removedAds);
    wcpl_timeline_logBlockResult(@"firstPage", removedDatas, removedAds);

    %orig(arg1, arg2, filteredDatas, filteredAdDatas, arg5, arg6, arg7, arg8);
    wcpl_timeline_cleanupManagerCache(self);
}

- (void)onAdPullWithAdDatas:(id)arg1 {
    if (!wcpl_timeline_shouldBlockAds()) {
        %orig(arg1);
        return;
    }

    NSUInteger removedAds = 0;
    id filtered = wcpl_timeline_filterAdDatas(arg1, &removedAds);
    wcpl_timeline_logBlockResult(@"adPull", 0, removedAds);
    %orig(filtered);
    wcpl_timeline_cleanupManagerCache(self);
}

- (void)updateAdvertiseDataList:(id)arg1 {
    if (!wcpl_timeline_shouldBlockAds()) {
        %orig(arg1);
        return;
    }

    NSUInteger removedAds = 0;
    id filtered = wcpl_timeline_filterAdDatas(arg1, &removedAds);
    wcpl_timeline_logBlockResult(@"updateAdvertiseDataList", 0, removedAds);
    %orig(filtered);
    wcpl_timeline_cleanupManagerCache(self);
}

%end
