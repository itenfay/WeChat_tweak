// Darwin/Foundation host suite only.
// Cross-platform minimal gate lives in tests/cross_platform/run_cross_platform_tests.py.
#import <Foundation/Foundation.h>
#import <dispatch/dispatch.h>

#import "WCPLRedEnvelopParamQueue.h"
#import "WeChatRedEnvelopParam.h"
#import "WCPLRedEnvelopConfig.h"
#import "WCPLIgnoreConfig.h"
#import "WCPLGestureConfig.h"
#import "WCPLThreadSafeMutableDictionary.h"
#import "WCPLAlertTextHelpers.h"
#import "WCPLConfigSanitizer.h"
#import "WCPLPureHelpers.h"
#import "WCPLSharedConfigHelpers.h"

static NSString *const kWCPLGroupRedEnvelopScopeKey = @"kWCPLGroupRedEnvelopScope";
static NSString *const kWCPLBlackListKey = @"kWCPLBlackList";
static NSString *const kWCPLUserIgnoreEnableKey = @"kWCPLUserIgnoreEnable";
static NSString *const kWCPLUserIgnoreInfoKey = @"kWCPLUserIgnoreInfo";
static NSString *const kWCPLQuitMonitorScopeKey = @"kWCPLQuitMonitorScope";
static NSString *const kWCPLQuitMonitorWhitelistInfoKey = @"kWCPLQuitMonitorWhitelistInfo";
static NSString *const kWCPLReceiveDonePageSummaryEnableKey = @"kWCPLReceiveDonePageSummaryEnable";
static NSString *const kWCPLPureHelperContractPath = @"tests/contracts/wcpl_pure_helper_contracts.json";

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

static id wcpl_jsonValueOrNil(id value) {
    return value == [NSNull null] ? nil : value;
}

static BOOL wcpl_optionalObjectsEqual(id actual, id expected) {
    if (!actual || !expected) {
        return actual == expected;
    }
    return [actual isEqual:expected];
}

static NSDictionary<NSString *, NSArray<NSDictionary *> *> *wcpl_loadPureHelperContracts(void) {
    static NSDictionary<NSString *, NSArray<NSDictionary *> *> *contracts = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSString *path = [[[NSFileManager defaultManager] currentDirectoryPath]
            stringByAppendingPathComponent:kWCPLPureHelperContractPath];
        NSData *data = [NSData dataWithContentsOfFile:path];
        if (!data) {
            return;
        }
        id json = [NSJSONSerialization JSONObjectWithData:data options:0 error:nil];
        if ([json isKindOfClass:[NSDictionary class]]) {
            contracts = json;
        }
    });
    return contracts;
}

static NSArray<NSDictionary *> *wcpl_contractCases(NSDictionary<NSString *, NSArray<NSDictionary *> *> *contracts,
                                                   NSString *group) {
    id cases = contracts[group];
    return [cases isKindOfClass:[NSArray class]] ? cases : nil;
}

static NSString *wcpl_validatePureHelperContractGroup(NSDictionary<NSString *, NSArray<NSDictionary *> *> *contracts,
                                                      NSString *group,
                                                      id (^resolver)(NSDictionary *caseInfo)) {
    NSArray<NSDictionary *> *cases = wcpl_contractCases(contracts, group);
    if (cases.count == 0 || !resolver) {
        return [NSString stringWithFormat:@"missing contract group: %@", group];
    }

    for (NSDictionary *caseInfo in cases) {
        NSString *caseName = [caseInfo[@"name"] isKindOfClass:[NSString class]] ? caseInfo[@"name"] : @"<unnamed>";
        id actual = resolver(caseInfo);
        id expected = wcpl_jsonValueOrNil(caseInfo[@"expected"]);
        if (!wcpl_optionalObjectsEqual(actual, expected)) {
            return [NSString stringWithFormat:@"%@/%@ mismatch: expected %@ got %@",
                                              group,
                                              caseName,
                                              expected ?: @"<nil>",
                                              actual ?: @"<nil>"];
        }
    }

    return nil;
}

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

static BOOL testConfigSanitizerHostFunctions(void) {
    NSArray *names = WCPLSanitizeUserNameArray(@[@"  alice ", @"", @123, @"bob", @"alice"]);
    WCPL_ASSERT([names isEqualToArray:@[@"alice", @"bob"]], "WCPLSanitizeUserNameArray should sanitize and dedupe");

    NSDictionary<NSString *, NSNumber *> *ignoreInfo = WCPLSanitizeIgnoreDictionary(@{
        @"  ": @YES,
        @"alice": @YES,
        @"bob": @0,
        @123: @YES,
        @"carol": @"1",
    });
    WCPL_ASSERT(ignoreInfo.count == 2, "WCPLSanitizeIgnoreDictionary should keep enabled string keys only");
    WCPL_ASSERT(ignoreInfo[@"alice"].boolValue == YES, "alice should be retained");
    WCPL_ASSERT(ignoreInfo[@"carol"].boolValue == YES, "carol should be retained");
    return YES;
}

static BOOL testPureHelperSharedContracts(void) {
    NSDictionary<NSString *, NSArray<NSDictionary *> *> *contracts = wcpl_loadPureHelperContracts();
    WCPL_ASSERT(contracts != nil, "failed to load pure helper contracts");

    NSString *error = nil;
    error = wcpl_validatePureHelperContractGroup(contracts, @"trim_text", ^id(NSDictionary *caseInfo) {
        return WCPLTrimText(wcpl_jsonValueOrNil(caseInfo[@"input"]));
    });
    WCPL_ASSERT(error == nil, error.UTF8String);
    error = wcpl_validatePureHelperContractGroup(contracts, @"sanitize_identifier_array", ^id(NSDictionary *caseInfo) {
        return WCPLSanitizeIdentifierArray(wcpl_jsonValueOrNil(caseInfo[@"input"]));
    });
    WCPL_ASSERT(error == nil, error.UTF8String);
    error = wcpl_validatePureHelperContractGroup(contracts, @"sanitize_ignore_dictionary", ^id(NSDictionary *caseInfo) {
        return WCPLSanitizeIgnoreDictionary(wcpl_jsonValueOrNil(caseInfo[@"input"]));
    });
    WCPL_ASSERT(error == nil, error.UTF8String);
    error = wcpl_validatePureHelperContractGroup(contracts, @"sanitize_reply_text", ^id(NSDictionary *caseInfo) {
        return WCPLSanitizeReplyText(wcpl_jsonValueOrNil(caseInfo[@"input"]));
    });
    WCPL_ASSERT(error == nil, error.UTF8String);
    error = wcpl_validatePureHelperContractGroup(contracts, @"query_value_for_key_in_url", ^id(NSDictionary *caseInfo) {
        return WCPLQueryValueForKeyInURL(wcpl_jsonValueOrNil(caseInfo[@"key"]), wcpl_jsonValueOrNil(caseInfo[@"url"]));
    });
    WCPL_ASSERT(error == nil, error.UTF8String);
    error = wcpl_validatePureHelperContractGroup(contracts, @"decode_basic_xml_entities", ^id(NSDictionary *caseInfo) {
        return WCPLDecodeBasicXMLEntities(wcpl_jsonValueOrNil(caseInfo[@"input"]));
    });
    WCPL_ASSERT(error == nil, error.UTF8String);
    error = wcpl_validatePureHelperContractGroup(contracts, @"extract_xml_value", ^id(NSDictionary *caseInfo) {
        return WCPLExtractXMLValue(wcpl_jsonValueOrNil(caseInfo[@"xml"]),
                                   wcpl_jsonValueOrNil(caseInfo[@"open_tag"]),
                                   wcpl_jsonValueOrNil(caseInfo[@"close_tag"]));
    });
    WCPL_ASSERT(error == nil, error.UTF8String);
    error = wcpl_validatePureHelperContractGroup(contracts, @"extract_quote_title_from_xml", ^id(NSDictionary *caseInfo) {
        return WCPLExtractQuoteTitleFromXML(wcpl_jsonValueOrNil(caseInfo[@"input"]));
    });
    WCPL_ASSERT(error == nil, error.UTF8String);
    error = wcpl_validatePureHelperContractGroup(contracts, @"is_chatroom_name", ^id(NSDictionary *caseInfo) {
        return @(WCPLIsChatRoomName(wcpl_jsonValueOrNil(caseInfo[@"input"])));
    });
    WCPL_ASSERT(error == nil, error.UTF8String);
    error = wcpl_validatePureHelperContractGroup(contracts, @"normalize_mention_candidate", ^id(NSDictionary *caseInfo) {
        return WCPLNormalizeMentionCandidate(wcpl_jsonValueOrNil(caseInfo[@"input"]));
    });
    WCPL_ASSERT(error == nil, error.UTF8String);
    error = wcpl_validatePureHelperContractGroup(contracts, @"extract_mention_candidate_from_xml", ^id(NSDictionary *caseInfo) {
        return WCPLExtractMentionCandidateFromXML(wcpl_jsonValueOrNil(caseInfo[@"input"]));
    });
    WCPL_ASSERT(error == nil, error.UTF8String);
    error = wcpl_validatePureHelperContractGroup(contracts, @"extract_mention_candidate_from_group_content_prefix", ^id(NSDictionary *caseInfo) {
        return WCPLExtractMentionCandidateFromGroupContentPrefix(wcpl_jsonValueOrNil(caseInfo[@"input"]));
    });
    WCPL_ASSERT(error == nil, error.UTF8String);
    error = wcpl_validatePureHelperContractGroup(contracts, @"extract_voice_attr_uint", ^id(NSDictionary *caseInfo) {
        return @(WCPLExtractVoiceAttrUInt(wcpl_jsonValueOrNil(caseInfo[@"xml"]),
                                          wcpl_jsonValueOrNil(caseInfo[@"attr_name"])));
    });
    WCPL_ASSERT(error == nil, error.UTF8String);
    error = wcpl_validatePureHelperContractGroup(contracts, @"build_minimal_voice_content", ^id(NSDictionary *caseInfo) {
        return WCPLBuildMinimalVoiceContent([caseInfo[@"voice_length_ms"] unsignedIntValue],
                                            [caseInfo[@"voice_format"] unsignedIntValue]);
    });
    WCPL_ASSERT(error == nil, error.UTF8String);
    error = wcpl_validatePureHelperContractGroup(contracts, @"quote_refer_server_id_from_content", ^id(NSDictionary *caseInfo) {
        return @(WCPLQuoteReferServerIDFromContent(wcpl_jsonValueOrNil(caseInfo[@"input"])));
    });
    WCPL_ASSERT(error == nil, error.UTF8String);
    error = wcpl_validatePureHelperContractGroup(contracts, @"build_red_envelop_params", ^id(NSDictionary *caseInfo) {
        return WCPLBuildRedEnvelopParamsFromDictionary(wcpl_jsonValueOrNil(caseInfo[@"input"]));
    });
    WCPL_ASSERT(error == nil, error.UTF8String);
    error = wcpl_validatePureHelperContractGroup(contracts, @"resolve_red_envelop_group_scope", ^id(NSDictionary *caseInfo) {
        return @(WCPLResolveRedEnvelopGroupScope(wcpl_jsonValueOrNil(caseInfo[@"scope"]),
                                                 wcpl_jsonValueOrNil(caseInfo[@"allowed_groups"])));
    });
    WCPL_ASSERT(error == nil, error.UTF8String);
    error = wcpl_validatePureHelperContractGroup(contracts, @"normalize_red_envelop_notify_target", ^id(NSDictionary *caseInfo) {
        return @(WCPLNormalizeRedEnvelopNotifyTarget(wcpl_jsonValueOrNil(caseInfo[@"input"])));
    });
    WCPL_ASSERT(error == nil, error.UTF8String);
    error = wcpl_validatePureHelperContractGroup(contracts, @"resolve_quit_monitor_scope", ^id(NSDictionary *caseInfo) {
        return @(WCPLResolveQuitMonitorScope(wcpl_jsonValueOrNil(caseInfo[@"scope"]),
                                             wcpl_jsonValueOrNil(caseInfo[@"whitelist_info"])));
    });
    WCPL_ASSERT(error == nil, error.UTF8String);
    error = wcpl_validatePureHelperContractGroup(contracts, @"sanitize_inline_text", ^id(NSDictionary *caseInfo) {
        return WCPLSanitizeInlineText(wcpl_jsonValueOrNil(caseInfo[@"input"]),
                                      [caseInfo[@"max_len"] unsignedIntegerValue]);
    });
    WCPL_ASSERT(error == nil, error.UTF8String);
    error = wcpl_validatePureHelperContractGroup(contracts, @"extract_revoker_name_from_replace_text", ^id(NSDictionary *caseInfo) {
        return WCPLExtractRevokerNameFromReplaceText(wcpl_jsonValueOrNil(caseInfo[@"input"]));
    });
    WCPL_ASSERT(error == nil, error.UTF8String);
    error = wcpl_validatePureHelperContractGroup(contracts, @"extract_revoked_content_from_replace_text", ^id(NSDictionary *caseInfo) {
        return WCPLExtractRevokedContentFromReplaceText(wcpl_jsonValueOrNil(caseInfo[@"input"]));
    });
    WCPL_ASSERT(error == nil, error.UTF8String);
    error = wcpl_validatePureHelperContractGroup(contracts, @"is_sysmsg_template_content", ^id(NSDictionary *caseInfo) {
        return @(WCPLIsSysMsgTemplateContent(wcpl_jsonValueOrNil(caseInfo[@"input"])));
    });
    WCPL_ASSERT(error == nil, error.UTF8String);
    error = wcpl_validatePureHelperContractGroup(contracts, @"plain_text_from_sysmsg_template_content", ^id(NSDictionary *caseInfo) {
        return WCPLPlainTextFromSysMsgTemplateContent(wcpl_jsonValueOrNil(caseInfo[@"input"]));
    });
    WCPL_ASSERT(error == nil, error.UTF8String);
    error = wcpl_validatePureHelperContractGroup(contracts, @"alert_tip_display_text_from_content", ^id(NSDictionary *caseInfo) {
        return WCPLAlertTipDisplayTextFromContent(wcpl_jsonValueOrNil(caseInfo[@"input"]));
    });
    WCPL_ASSERT(error == nil, error.UTF8String);
    error = wcpl_validatePureHelperContractGroup(contracts, @"should_tint_alert_tip_display_text", ^id(NSDictionary *caseInfo) {
        return @(WCPLShouldTintAlertTipDisplayText(wcpl_jsonValueOrNil(caseInfo[@"input"])));
    });
    WCPL_ASSERT(error == nil, error.UTF8String);
    return YES;
}

static BOOL testGenerateClientMsgID(void) {
    NSString *explicitSender = WCPLGenerateClientMsgID(@"  alice  ");
    WCPL_ASSERT([explicitSender hasPrefix:@"alice_"], "explicit sender should be trimmed and used as prefix");

    NSString *fallbackSender = WCPLGenerateClientMsgID(nil);
    WCPL_ASSERT([fallbackSender hasPrefix:@"wcpl_"], "missing sender should fall back to wcpl prefix");

    NSRegularExpression *regex =
        [NSRegularExpression regularExpressionWithPattern:@"^[A-Za-z0-9_]+_[0-9]{9,10}_[0-9]+$"
                                                  options:0
                                                    error:nil];
    NSRange explicitRange = NSMakeRange(0, explicitSender.length);
    NSRange fallbackRange = NSMakeRange(0, fallbackSender.length);
    WCPL_ASSERT([regex firstMatchInString:explicitSender options:0 range:explicitRange] != nil,
                "explicit sender client msg id should match expected format");
    WCPL_ASSERT([regex firstMatchInString:fallbackSender options:0 range:fallbackRange] != nil,
                "fallback client msg id should match expected format");
    WCPL_ASSERT(![explicitSender isEqualToString:fallbackSender],
                "different invocations should not collapse to the same client msg id");
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

static BOOL testQuitMonitorScopeMigration(void) {
    wcpl_clearDefaultsKeys(@[kWCPLQuitMonitorScopeKey, kWCPLQuitMonitorWhitelistInfoKey]);

    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    [defaults setObject:@{
        @"  room@chatroom  ": @YES,
        @"not_chatroom": @YES,
    } forKey:kWCPLQuitMonitorWhitelistInfoKey];

    WCPLIgnoreConfig *config = [[WCPLIgnoreConfig alloc] init];
    WCPL_ASSERT(config.quitMonitorScope == WCPLQuitMonitorScopeWhitelist, "default scope should be whitelist when whitelist not empty");

    [defaults removeObjectForKey:kWCPLQuitMonitorWhitelistInfoKey];
    [defaults removeObjectForKey:kWCPLQuitMonitorScopeKey];
    config = [[WCPLIgnoreConfig alloc] init];
    WCPL_ASSERT(config.quitMonitorScope == WCPLQuitMonitorScopeAll, "default scope should be all when whitelist empty");

    [defaults setInteger:99 forKey:kWCPLQuitMonitorScopeKey];
    config = [[WCPLIgnoreConfig alloc] init];
    WCPL_ASSERT(config.quitMonitorScope == WCPLQuitMonitorScopeAll, "invalid scope should be normalized to default");

    wcpl_clearDefaultsKeys(@[kWCPLQuitMonitorScopeKey, kWCPLQuitMonitorWhitelistInfoKey]);
    [defaults setObject:@{
        @"not_chatroom": @YES,
        @"still_not_chatroom": @YES,
    } forKey:kWCPLQuitMonitorWhitelistInfoKey];
    config = [[WCPLIgnoreConfig alloc] init];
    WCPL_ASSERT(config.quitMonitorScope == WCPLQuitMonitorScopeAll, "default scope should be all when whitelist has no valid chatroom");

    wcpl_clearDefaultsKeys(@[kWCPLQuitMonitorScopeKey, kWCPLQuitMonitorWhitelistInfoKey]);
    return YES;
}

static BOOL testQuitMonitorPureHelpers(void) {
    WCPL_ASSERT(WCPLQuitMonitorIsDateLikeText(@"2026-02-26 16:51:23") == YES,
                "timestamp should be recognized as date-like text");
    WCPL_ASSERT(WCPLQuitMonitorIsDateLikeText(@"Alice 退出了群聊") == NO,
                "quit text should not be recognized as date-like text");
    WCPL_ASSERT(WCPLQuitMonitorIsLowSignalSystemText(@"<msgsource><username><![CDATA[x]]></username></msgsource>") == YES,
                "msgsource xml should be treated as low-signal");
    WCPL_ASSERT(WCPLQuitMonitorLooksLikeQuitSystemText(@"Alice 退出了群聊") == YES,
                "quit text should be recognized");
    WCPL_ASSERT(WCPLQuitMonitorLooksLikeQuitSystemText(@"\"Alice\"撤回了一条消息") == NO,
                "revoke text should not be recognized as quit");

    NSString *best = WCPLQuitMonitorSelectBestSystemTextFromCandidates(@[
        @"2026-02-26 16:51:23\n\"传奇爆破兵\"撤回了一条消息",
        @"Alice 退出了群聊"
    ]);
    WCPL_ASSERT([best isEqualToString:@"Alice 退出了群聊"],
                "quit monitor should prefer quit candidate over revoke candidate");

    NSString *bestAgainstLocalTip = WCPLQuitMonitorSelectBestSystemTextFromCandidates(@[
        @"[退群监控] Alice 退出了群聊",
        @"Alice 退出了群聊"
    ]);
    WCPL_ASSERT([bestAgainstLocalTip isEqualToString:@"Alice 退出了群聊"],
                "quit monitor should prefer raw system text over local monitor tip");

    NSArray<NSNumber *> *schedule = WCPLQuitMonitorPendingRetryScheduleSeconds();
    NSArray<NSNumber *> *expected = @[@0.8, @2.0, @5.0, @15.0, @60.0, @300.0, @900.0, @1800.0, @7200.0];
    WCPL_ASSERT([schedule isEqualToArray:expected],
                "quit monitor pending retry schedule mismatch");
    return YES;
}

static BOOL testReceiveDonePageSummaryDefaultAndPersist(void) {
    wcpl_clearDefaultsKeys(@[kWCPLReceiveDonePageSummaryEnableKey]);

    WCPLRedEnvelopConfig *config = [[WCPLRedEnvelopConfig alloc] init];
    WCPL_ASSERT(config.receiveDonePageSummaryEnable == YES, "receiveDonePageSummaryEnable should default to YES");

    config.receiveDonePageSummaryEnable = NO;
    WCPL_ASSERT(config.receiveDonePageSummaryEnable == NO, "receiveDonePageSummaryEnable should persist NO in memory");

    config = [[WCPLRedEnvelopConfig alloc] init];
    WCPL_ASSERT(config.receiveDonePageSummaryEnable == NO, "receiveDonePageSummaryEnable should reload persisted NO");

    config.receiveDonePageSummaryEnable = YES;
    config = [[WCPLRedEnvelopConfig alloc] init];
    WCPL_ASSERT(config.receiveDonePageSummaryEnable == YES, "receiveDonePageSummaryEnable should reload persisted YES");

    wcpl_clearDefaultsKeys(@[kWCPLReceiveDonePageSummaryEnableKey]);
    return YES;
}

static BOOL testThreadSafeDictionaryConcurrentReadWriteNoDeadlock(void) {
    WCPLThreadSafeMutableDictionary<NSString *, NSNumber *> *dictionary =
        [[WCPLThreadSafeMutableDictionary alloc] init];

    const NSInteger workerCount = 12;
    const NSInteger operationsPerWorker = 2000;
    dispatch_queue_t workerQueue = dispatch_queue_create("com.wcpl.tests.threadsafe.dict.stress",
                                                         DISPATCH_QUEUE_CONCURRENT);
    dispatch_group_t group = dispatch_group_create();

    for (NSInteger worker = 0; worker < workerCount; worker++) {
        dispatch_group_async(group, workerQueue, ^{
            @autoreleasepool {
                for (NSInteger index = 0; index < operationsPerWorker; index++) {
                    NSString *key = [NSString stringWithFormat:@"k_%ld_%ld",
                                     (long)worker,
                                     (long)(index % 64)];

                    if (((worker + index) % 3) == 0) {
                        dictionary[key] = @(index);
                        continue;
                    }

                    if (((worker + index) % 5) == 0) {
                        [dictionary removeObjectForKey:key];
                        continue;
                    }

                    (void)[dictionary objectForKey:key];
                    (void)dictionary.count;
                    (void)[dictionary dictionaryRepresentation];
                }
            }
        });
    }

    long waitResult = dispatch_group_wait(group,
                                          dispatch_time(DISPATCH_TIME_NOW, (int64_t)(10 * NSEC_PER_SEC)));
    WCPL_ASSERT(waitResult == 0, "thread-safe dictionary stress should not deadlock");

    dictionary[@"final_check"] = @1;
    WCPL_ASSERT([dictionary[@"final_check"] isEqualToNumber:@1],
                "thread-safe dictionary should remain consistent after stress");

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
    failed += !runTest("testPureHelperSharedContracts", testPureHelperSharedContracts);
    failed += !runTest("testGenerateClientMsgID", testGenerateClientMsgID);
    failed += !runTest("testConfigSanitizerHostFunctions", testConfigSanitizerHostFunctions);
    failed += !runTest("testIgnoreDictionarySanitize", testIgnoreDictionarySanitize);
    failed += !runTest("testQuitMonitorScopeMigration", testQuitMonitorScopeMigration);
    failed += !runTest("testQuitMonitorPureHelpers", testQuitMonitorPureHelpers);
    failed += !runTest("testReceiveDonePageSummaryDefaultAndPersist", testReceiveDonePageSummaryDefaultAndPersist);
    failed += !runTest("testThreadSafeDictionaryConcurrentReadWriteNoDeadlock",
                       testThreadSafeDictionaryConcurrentReadWriteNoDeadlock);

    if (failed == 0) {
        fprintf(stdout, "ALL TESTS PASSED\n");
        return 0;
    }

    fprintf(stderr, "%d TEST(S) FAILED\n", failed);
    return 1;
}
