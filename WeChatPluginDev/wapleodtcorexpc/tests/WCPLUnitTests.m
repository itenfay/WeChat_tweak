#import <Foundation/Foundation.h>

#import "WCPLRedEnvelopParamQueue.h"
#import "WeChatRedEnvelopParam.h"
#import "WCPLRedEnvelopConfig.h"
#import "WCPLIgnoreConfig.h"

static NSString *const kWCPLGroupRedEnvelopScopeKey = @"kWCPLGroupRedEnvelopScope";
static NSString *const kWCPLBlackListKey = @"kWCPLBlackList";
static NSString *const kWCPLUserIgnoreEnableKey = @"kWCPLUserIgnoreEnable";
static NSString *const kWCPLUserIgnoreInfoKey = @"kWCPLUserIgnoreInfo";

static void wcpl_clearDefaultsKeys(NSArray<NSString *> *keys) {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    for (NSString *key in keys) {
        [defaults removeObjectForKey:key];
    }
}

#define WCPL_ASSERT(cond, msg) \
    do { \
        if (!(cond)) { \
            fprintf(stderr, "FAIL %s:%d: %s\n", __FILE__, __LINE__, (msg)); \
            return NO; \
        } \
    } while (0)

static BOOL testParamQueueEnqueueDequeue(void) {
    WCPLRedEnvelopParamQueue *queue = [[WCPLRedEnvelopParamQueue alloc] init];
    WeChatRedEnvelopParam *param = [[WeChatRedEnvelopParam alloc] init];
    param.sendId = @"test_send_id";
    param.sign = @"test_sign";

    [queue enqueue:param];
    WCPL_ASSERT(![queue isEmpty], "queue should not be empty after enqueue");

    WeChatRedEnvelopParam *peeked = [queue peek];
    WCPL_ASSERT([peeked.sendId isEqualToString:@"test_send_id"], "peek should return first element");

    WeChatRedEnvelopParam *matched = [queue dequeueMatchingSign:@"test_sign" sendId:nil];
    WCPL_ASSERT(matched != nil, "dequeueMatchingSign should return matched element");
    WCPL_ASSERT([matched.sendId isEqualToString:@"test_send_id"], "matched element sendId mismatch");
    WCPL_ASSERT([queue isEmpty], "queue should be empty after dequeue");
    return YES;
}

static BOOL testParamQueueMatchBySendId(void) {
    WCPLRedEnvelopParamQueue *queue = [[WCPLRedEnvelopParamQueue alloc] init];
    WeChatRedEnvelopParam *param = [[WeChatRedEnvelopParam alloc] init];
    param.sendId = @"send_123";
    param.sign = @"sign_abc";
    [queue enqueue:param];

    WeChatRedEnvelopParam *matched = [queue dequeueMatchingSign:nil sendId:@"send_123"];
    WCPL_ASSERT(matched != nil, "dequeueMatchingSign should match by sendId");
    WCPL_ASSERT([matched.sign isEqualToString:@"sign_abc"], "matched sign mismatch");
    return YES;
}

static BOOL testGroupScopeMigration(void) {
    wcpl_clearDefaultsKeys(@[kWCPLGroupRedEnvelopScopeKey, kWCPLBlackListKey]);

    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    [defaults setObject:@[@"  room@chatroom  "] forKey:kWCPLBlackListKey];

    WCPLRedEnvelopConfig *config = [[WCPLRedEnvelopConfig alloc] init];
    WCPL_ASSERT(config.groupRedEnvelopScope == 1, "default scope should be 1 when whitelist not empty");

    [defaults removeObjectForKey:kWCPLBlackListKey];
    [defaults removeObjectForKey:kWCPLGroupRedEnvelopScopeKey];
    config = [[WCPLRedEnvelopConfig alloc] init];
    WCPL_ASSERT(config.groupRedEnvelopScope == 0, "default scope should be 0 when whitelist empty");

    [defaults setInteger:99 forKey:kWCPLGroupRedEnvelopScopeKey];
    config = [[WCPLRedEnvelopConfig alloc] init];
    WCPL_ASSERT(config.groupRedEnvelopScope == 0, "invalid scope should be normalized to default");

    wcpl_clearDefaultsKeys(@[kWCPLGroupRedEnvelopScopeKey, kWCPLBlackListKey]);
    return YES;
}

static BOOL testAllowedGroupListAliasing(void) {
    wcpl_clearDefaultsKeys(@[kWCPLBlackListKey]);

    WCPLRedEnvelopConfig *config = [[WCPLRedEnvelopConfig alloc] init];
    config.allowedGroupList = @[@"  a ", @"", @123, @"a", @"b\n"];

    NSArray *expected = @[@"a", @"b"];
    WCPL_ASSERT([config.allowedGroupList isEqualToArray:expected], "allowedGroupList should be sanitized and de-duplicated");

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    WCPL_ASSERT([config.blackList isEqualToArray:expected], "legacy blackList should match allowedGroupList");
#pragma clang diagnostic pop

    wcpl_clearDefaultsKeys(@[kWCPLBlackListKey]);
    return YES;
}

static BOOL testIgnoreDictionarySanitize(void) {
    wcpl_clearDefaultsKeys(@[kWCPLUserIgnoreEnableKey, kWCPLUserIgnoreInfoKey]);

    WCPLIgnoreConfig *config = [[WCPLIgnoreConfig alloc] init];
    config.userIgnoreEnable = YES;

    NSMutableDictionary *raw = [@{
        @"  ": @YES,
        @" alice ": @YES,
        @"bob": @0,
        @123: @YES,
        @"carol": @"1",
    } mutableCopy];

    config.userIgnoreInfo = raw;

    WCPL_ASSERT(config.userIgnoreInfo[@"alice"].boolValue == YES, "alice should be ignored");
    WCPL_ASSERT(config.userIgnoreInfo[@"bob"] == nil, "bob should not be ignored");
    WCPL_ASSERT(config.userIgnoreInfo[@"carol"].boolValue == YES, "carol should be ignored");

    wcpl_clearDefaultsKeys(@[kWCPLUserIgnoreEnableKey, kWCPLUserIgnoreInfoKey]);
    return YES;
}

static BOOL runTest(const char *name, BOOL (*test)(void)) {
    @autoreleasepool {
        BOOL ok = test();
        fprintf(stdout, "%s: %s\n", name, ok ? "OK" : "FAIL");
        return ok;
    }
}

int main(void) {
    int failed = 0;

    failed += !runTest("testParamQueueEnqueueDequeue", testParamQueueEnqueueDequeue);
    failed += !runTest("testParamQueueMatchBySendId", testParamQueueMatchBySendId);
    failed += !runTest("testGroupScopeMigration", testGroupScopeMigration);
    failed += !runTest("testAllowedGroupListAliasing", testAllowedGroupListAliasing);
    failed += !runTest("testIgnoreDictionarySanitize", testIgnoreDictionarySanitize);

    if (failed == 0) {
        fprintf(stdout, "ALL TESTS PASSED\n");
        return 0;
    }

    fprintf(stderr, "%d TEST(S) FAILED\n", failed);
    return 1;
}
