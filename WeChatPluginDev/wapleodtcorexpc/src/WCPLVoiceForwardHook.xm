%group WCPLVoiceForwardTraceHookGroup

%hook ForwardMsgUtil

+ (id)GenForwardMsgFromMsgWrap:(id)arg1 ToContact:(id)arg2 {
    if (!wcpl_isVoiceForwardFeatureEnabled()) {
        return %orig;
    }

    id generated = %orig;
    CMessageWrap *sourceWrap = [arg1 isKindOfClass:%c(CMessageWrap)] ? (CMessageWrap *)arg1 : nil;
    CMessageWrap *generatedWrap = wcpl_extractForwardMessageWrap(generated);
    WCPLLogInfo(@"[语音转发][trace] GenForward(class) target=%@ src={%@} gen={%@}",
                wcpl_voiceForwardTraceTarget(arg2),
                wcpl_voiceForwardTraceWrap(sourceWrap),
                wcpl_voiceForwardTraceWrap(generatedWrap));
    wcpl_patchGeneratedNativeForwardVoiceWrap(sourceWrap, arg2, generated, @"ForwardMsgUtil.class.GenForward");
    return generated;
}

- (id)GenForwardMsgFromMsgWrap:(id)arg1 ToContact:(id)arg2 {
    if (!wcpl_isVoiceForwardFeatureEnabled()) {
        return %orig;
    }

    id generated = %orig;
    CMessageWrap *sourceWrap = [arg1 isKindOfClass:%c(CMessageWrap)] ? (CMessageWrap *)arg1 : nil;
    CMessageWrap *generatedWrap = wcpl_extractForwardMessageWrap(generated);
    WCPLLogInfo(@"[语音转发][trace] GenForward(instance) target=%@ src={%@} gen={%@}",
                wcpl_voiceForwardTraceTarget(arg2),
                wcpl_voiceForwardTraceWrap(sourceWrap),
                wcpl_voiceForwardTraceWrap(generatedWrap));
    wcpl_patchGeneratedNativeForwardVoiceWrap(sourceWrap, arg2, generated, @"ForwardMsgUtil.instance.GenForward");
    return generated;
}

%end

%hook ForwardMessageMgr

- (void)forwardMessage:(id)arg1 fromViewController:(id)arg2 {
    if (!wcpl_isVoiceForwardFeatureEnabled()) {
        %orig;
        return;
    }

    wcpl_logForwardManagerMethodCatalogIfNeeded(self);
    CMessageWrap *wrap = [arg1 isKindOfClass:%c(CMessageWrap)] ? (CMessageWrap *)arg1 : nil;
    WCPLLogInfo(@"[语音转发][trace] ForwardMessageMgr.forwardMessage(noTarget) wrap={%@} vc=%@",
                wcpl_voiceForwardTraceWrap(wrap),
                arg2 ? (NSStringFromClass([arg2 class]) ?: @"(unknown)") : @"(nil)");
    if (wcpl_isVoiceMessage(wrap)) {
        wcpl_voiceForwardSetPendingContext(self, wrap, arg2, -1);
    } else {
        wcpl_voiceForwardClearPendingContext(self);
    }
    %orig;
}

- (void)forwardMessage:(id)arg1 fromViewController:(id)arg2 forwardType:(long long)arg3 {
    if (!wcpl_isVoiceForwardFeatureEnabled()) {
        %orig;
        return;
    }

    wcpl_logForwardManagerMethodCatalogIfNeeded(self);
    CMessageWrap *wrap = [arg1 isKindOfClass:%c(CMessageWrap)] ? (CMessageWrap *)arg1 : nil;
    WCPLLogInfo(@"[语音转发][trace] ForwardMessageMgr.forwardMessage(noTarget+type) forwardType=%lld wrap={%@} vc=%@",
                arg3,
                wcpl_voiceForwardTraceWrap(wrap),
                arg2 ? (NSStringFromClass([arg2 class]) ?: @"(unknown)") : @"(nil)");
    if (wcpl_isVoiceMessage(wrap)) {
        wcpl_voiceForwardSetPendingContext(self, wrap, arg2, arg3);
    } else {
        wcpl_voiceForwardClearPendingContext(self);
    }
    %orig;
}

- (void)forwardMessage:(id)arg1 fromViewController:(id)arg2 toContact:(id)arg3 {
    if (!wcpl_isVoiceForwardFeatureEnabled()) {
        %orig;
        return;
    }

    wcpl_logForwardManagerMethodCatalogIfNeeded(self);
    CMessageWrap *wrap = [arg1 isKindOfClass:%c(CMessageWrap)] ? (CMessageWrap *)arg1 : nil;
    WCPLLogInfo(@"[语音转发][trace] ForwardMessageMgr.forwardMessage target=%@ wrap={%@} vc=%@",
                wcpl_voiceForwardTraceTarget(arg3),
                wcpl_voiceForwardTraceWrap(wrap),
                arg2 ? (NSStringFromClass([arg2 class]) ?: @"(unknown)") : @"(nil)");
    wcpl_voiceForwardMarkTargetObserved(self, arg3);
    %orig;
}

- (void)forwardMessage:(id)arg1 fromViewController:(id)arg2 toContact:(id)arg3 forwardType:(long long)arg4 {
    if (!wcpl_isVoiceForwardFeatureEnabled()) {
        %orig;
        return;
    }

    wcpl_logForwardManagerMethodCatalogIfNeeded(self);
    CMessageWrap *wrap = [arg1 isKindOfClass:%c(CMessageWrap)] ? (CMessageWrap *)arg1 : nil;
    WCPLLogInfo(@"[语音转发][trace] ForwardMessageMgr.forwardMessage+type target=%@ forwardType=%lld wrap={%@} vc=%@",
                wcpl_voiceForwardTraceTarget(arg3),
                arg4,
                wcpl_voiceForwardTraceWrap(wrap),
                arg2 ? (NSStringFromClass([arg2 class]) ?: @"(unknown)") : @"(nil)");
    wcpl_voiceForwardMarkTargetObserved(self, arg3);
    %orig;
}

- (void)OnForwardMessageCancel:(id)arg1 {
    if (!wcpl_isVoiceForwardFeatureEnabled()) {
        %orig;
        return;
    }

    WCPLLogInfo(@"[语音转发][trace] OnForwardMessageCancel payload=%@",
                arg1 ? (NSStringFromClass([arg1 class]) ?: @"(unknown)") : @"(nil)");
    wcpl_voiceForwardClearPendingContext(self);
    %orig;
}

- (void)OnForwardMessageSend:(id)arg1 {
    if (!wcpl_isVoiceForwardFeatureEnabled()) {
        %orig;
        return;
    }

    NSNumber *pendingToken = objc_getAssociatedObject(self, kWCPLVoiceForwardPendingTokenKey);
    CMessageWrap *pendingWrap = objc_getAssociatedObject(self, kWCPLVoiceForwardPendingWrapKey);
    NSNumber *pendingForwardType = objc_getAssociatedObject(self, kWCPLVoiceForwardPendingForwardTypeKey);

    NSMutableArray<id> *targetCandidates = [NSMutableArray array];
    NSArray *payloadTargets = wcpl_voiceForwardExtractTargetsFromPayload(arg1);
    if (payloadTargets.count > 0) {
        [targetCandidates addObjectsFromArray:payloadTargets];
    }

    if ([(id)self respondsToSelector:@selector(forwardMessageLogics)]) {
        @try {
            id logics = ((id (*)(id, SEL))objc_msgSend)(self, @selector(forwardMessageLogics));
            NSArray *logicTargets = wcpl_voiceForwardExtractTargetsFromPayload(logics);
            if (logicTargets.count > 0) {
                [targetCandidates addObjectsFromArray:logicTargets];
            }
        } @catch (__unused NSException *exceptionForwardLogicsTargets) {
        }
    }

    NSArray *targets = wcpl_voiceForwardExtractTargetsFromPayload(targetCandidates);
    WCPLLogInfo(@"[语音转发][trace] OnForwardMessageSend payload=%@ pending=%@ forwardType=%@ targets=%lu {%@}",
                arg1 ? (NSStringFromClass([arg1 class]) ?: @"(unknown)") : @"(nil)",
                pendingToken ? @"yes" : @"no",
                pendingForwardType ?: @(-1),
                (unsigned long)targets.count,
                wcpl_voiceForwardTargetsSummary(targets));
    BOOL hasPendingVoice = (pendingToken && pendingWrap && wcpl_isVoiceMessage(pendingWrap));
    if (!(hasPendingVoice && targets.count > 0)) {
        %orig;
        return;
    }

    UIViewController *currentVC = objc_getAssociatedObject(self, kWCPLVoiceForwardPendingViewControllerKey);
    BOOL observed = wcpl_voiceForwardTargetObserved(self);
    wcpl_voiceForwardClearPendingContext(self);

    if (observed) {
        WCPLLogInfo(@"[语音转发][aggressive] 原生已命中具体目标，继续原生流程");
        %orig;
        return;
    }

    NSUInteger successCount = 0;
    for (id target in targets) {
        NSString *identifier = wcpl_voiceForwardTraceTarget(target);
        if (wcpl_forwardVoiceToTargetStrict(pendingWrap, currentVC, target, identifier)) {
            successCount += 1;
        }
    }

    if (successCount > 0) {
        WCPLLogWarning(@"[语音转发][aggressive] 接管原生发送，密友链路 success=%lu/%lu",
                       (unsigned long)successCount,
                       (unsigned long)targets.count);
        return;
    }

    WCPLLogWarning(@"[语音转发][aggressive] 接管发送失败，回退原生");
    %orig;
}

%end

%end

%ctor {
    if (WCPL_ENABLE_VOICE_FORWARD_HOOK) {
        %init(WCPLVoiceForwardTraceHookGroup);
    }
}
