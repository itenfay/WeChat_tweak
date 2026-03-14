// Internal include-only module.
// Stitched into src/WCPLGestureHook.xm by scripts/generate_wcpl_gesture_hook.sh.
// Do not add this file to $(TWEAK_NAME)_FILES directly.

static BOOL wcpl_isMessageFromOther(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return NO;
    }

    BOOL isSender = NO;
    BOOL shouldFallback = YES;

    @try {
        Class msgWrapClass = objc_getClass("CMessageWrap");
        SEL selector = @selector(isSenderFromMsgWrap:);
        if (msgWrapClass && [msgWrapClass respondsToSelector:selector]) {
            isSender = ((BOOL (*)(id, SEL, id))objc_msgSend)(msgWrapClass, selector, msgWrap);
            // 主路径可信时直接采用，仅在“判为非发送者”时再做兜底补判
            shouldFallback = !isSender;
        }
    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }

    if (shouldFallback) {
        @try {
            // 兜底1：优先使用发送者状态字段
            if (msgWrap.m_uiIsSenderStatus > 0) {
                isSender = YES;
                shouldFallback = NO;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }

        if (shouldFallback) {
            @try {
                // 兜底2：兼容旧字段 m_bFromMe
                id fromMeValue = [msgWrap valueForKey:@"m_bFromMe"];
                if ([fromMeValue respondsToSelector:@selector(boolValue)]) {
                    isSender = [fromMeValue boolValue];
                }
            } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
        }

        if (shouldFallback) {
            @try {
                // 兜底3：当发送者字段缺失时，用当前账号与 fromUsr 比对
                NSString *selfUserName = wcpl_currentSelfUserNameForRepeat();
                NSString *fromUser = [msgWrap.m_nsFromUsr isKindOfClass:[NSString class]] ? msgWrap.m_nsFromUsr : nil;
                if (selfUserName.length > 0 && fromUser.length > 0 && [fromUser isEqualToString:selfUserName]) {
                    isSender = YES;
                    shouldFallback = NO;
                }
            } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
        }
    }

    return !isSender;
}

static id wcpl_viewModelForCellView(id cellView) {
    if (!cellView) {
        return nil;
    }

    id viewModel = nil;
    if ([cellView respondsToSelector:@selector(viewModel)]) {
        @try {
            viewModel = ((id (*)(id, SEL))objc_msgSend)(cellView, @selector(viewModel));
        } @catch (__unused NSException *exception) {
            viewModel = nil;
        }
    }

    if (!viewModel) {
        @try {
            viewModel = [cellView valueForKey:@"viewModel"];
        } @catch (__unused NSException *exception) {
            viewModel = nil;
        }
    }

    return viewModel;
}

static BOOL wcpl_isTextSubViewModelForRepeat(id viewModel) {
    if (!viewModel) {
        return NO;
    }

    Class textSubViewModelClass = objc_getClass("TextMessageSubViewModel");
    if (textSubViewModelClass && [viewModel isKindOfClass:textSubViewModelClass]) {
        return YES;
    }

    NSString *className = NSStringFromClass([viewModel class]);
    if (![className isKindOfClass:[NSString class]] || className.length == 0) {
        return NO;
    }
    return [className rangeOfString:@"TextMessageSubViewModel"].location != NSNotFound;
}

static BOOL wcpl_resolveRepeatButtonEligibleBySubViewModel(id viewModel) {
    if (!viewModel) {
        return YES;
    }

    if (!wcpl_isTextSubViewModelForRepeat(viewModel)) {
        return YES;
    }

    id parentModel = nil;
    if ([viewModel respondsToSelector:@selector(parentModel)]) {
        @try {
            parentModel = ((id (*)(id, SEL))objc_msgSend)(viewModel, @selector(parentModel));
        } @catch (__unused NSException *exception) {
            parentModel = nil;
        }
    }
    if (!parentModel) {
        @try {
            parentModel = [viewModel valueForKey:@"parentModel"];
        } @catch (__unused NSException *exception) {
            parentModel = nil;
        }
    }
    if (!parentModel) {
        return YES;
    }

    id subViewModels = nil;
    if ([parentModel respondsToSelector:@selector(subViewModels)]) {
        @try {
            subViewModels = ((id (*)(id, SEL))objc_msgSend)(parentModel, @selector(subViewModels));
        } @catch (__unused NSException *exception) {
            subViewModels = nil;
        }
    }
    if (!subViewModels) {
        @try {
            subViewModels = [parentModel valueForKey:@"subViewModels"];
        } @catch (__unused NSException *exception) {
            subViewModels = nil;
        }
    }

    if (![subViewModels respondsToSelector:@selector(count)] ||
        ![subViewModels respondsToSelector:@selector(indexOfObject:)]) {
        return YES;
    }

    NSUInteger count = 0;
    NSUInteger index = NSNotFound;
    @try {
        count = (NSUInteger)[subViewModels count];
        index = (NSUInteger)[subViewModels indexOfObject:viewModel];
    } @catch (__unused NSException *exception) {
        return YES;
    }

    if (count < 2 || index == NSNotFound) {
        return YES;
    }

    return index == (count - 1);
}

static void wcpl_markRepeatButtonEligibilityForViewModel(id viewModel) {
    if (!viewModel) {
        return;
    }
    BOOL eligible = wcpl_resolveRepeatButtonEligibleBySubViewModel(viewModel);
    objc_setAssociatedObject(viewModel,
                             kWCPLRepeatViewModelIsEligibleKey,
                             @(eligible),
                             OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static BOOL wcpl_isCellViewEligibleForRepeatButton(id cellView) {
    id viewModel = wcpl_viewModelForCellView(cellView);
    if (!viewModel) {
        return YES;
    }

    NSNumber *cached = objc_getAssociatedObject(viewModel, kWCPLRepeatViewModelIsEligibleKey);
    if ([cached isKindOfClass:[NSNumber class]]) {
        return cached.boolValue;
    }

    BOOL eligible = wcpl_resolveRepeatButtonEligibleBySubViewModel(viewModel);
    objc_setAssociatedObject(viewModel,
                             kWCPLRepeatViewModelIsEligibleKey,
                             @(eligible),
                             OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return eligible;
}

static BOOL wcpl_tryResolveIsSelfFromCellView(id cellView, BOOL *isSelfOut) {
    if (!isSelfOut || !cellView) {
        return NO;
    }

    id viewModel = wcpl_viewModelForCellView(cellView);
    if (!viewModel) {
        return NO;
    }

    if ([viewModel respondsToSelector:@selector(isSender)]) {
        @try {
            BOOL isSender = ((BOOL (*)(id, SEL))objc_msgSend)(viewModel, @selector(isSender));
            *isSelfOut = isSender;
            return YES;
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    @try {
        id isSenderValue = [viewModel valueForKey:@"isSender"];
        if ([isSenderValue respondsToSelector:@selector(boolValue)]) {
            *isSelfOut = [isSenderValue boolValue];
            return YES;
        }
    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }

    return NO;
}

static BOOL wcpl_resolveIsSelfForRepeatCell(id cellView, CMessageWrap *msgWrap, BOOL *usedCellValueOut) {
    BOOL wrapIsSelf = !wcpl_isMessageFromOther(msgWrap);
    BOOL usedCellValue = NO;

    BOOL resolvedCellIsSelf = NO;
    if (wcpl_tryResolveIsSelfFromCellView(cellView, &resolvedCellIsSelf)) {
        // 对齐农夫山泉：方向优先使用 viewModel.isSender。
        wrapIsSelf = resolvedCellIsSelf;
        usedCellValue = YES;
    }

    if (usedCellValueOut) {
        *usedCellValueOut = usedCellValue;
    }
    return wrapIsSelf;
}

static __attribute__((unused)) BOOL wcpl_resolveIsSelfByGeometry(UIView *cellView,
                                         CGRect menuRect,
                                         BOOL menuRectValid,
                                         CGRect bubbleRect,
                                         BOOL bubbleRectValid,
                                         BOOL fallbackIsSelf) {
    if (![cellView isKindOfClass:[UIView class]]) {
        return fallbackIsSelf;
    }

    CGRect cellBounds = cellView.bounds;
    if (CGRectIsEmpty(cellBounds) || CGRectIsNull(cellBounds) || CGRectIsInfinite(cellBounds) || CGRectGetWidth(cellBounds) <= 16.0f) {
        return fallbackIsSelf;
    }

    BOOL (^inferFromRect)(CGRect, BOOL *) = ^BOOL(CGRect rect, BOOL *didInfer) {
        if (didInfer) {
            *didInfer = NO;
        }

        BOOL rectValid = !CGRectIsEmpty(rect) && !CGRectIsNull(rect) && !CGRectIsInfinite(rect) &&
                         CGRectGetWidth(rect) > 8.0f && CGRectGetHeight(rect) > 8.0f &&
                         CGRectIntersectsRect(rect, cellBounds);
        if (!rectValid) {
            return fallbackIsSelf;
        }

        CGFloat leftGap = CGRectGetMinX(rect) - CGRectGetMinX(cellBounds);
        CGFloat rightGap = CGRectGetMaxX(cellBounds) - CGRectGetMaxX(rect);
        CGFloat gapDelta = leftGap - rightGap;
        if (fabs(gapDelta) > 6.0f) {
            if (didInfer) {
                *didInfer = YES;
            }
            return gapDelta > 0.0f;
        }

        CGFloat cellMidX = CGRectGetMidX(cellBounds);
        CGFloat rectMidX = CGRectGetMidX(rect);
        CGFloat midDelta = rectMidX - cellMidX;
        // 靠近中轴的矩形不参与方向推断，避免大气泡跨中线时误判。
        if (fabs(midDelta) <= 8.0f) {
            return fallbackIsSelf;
        }

        if (didInfer) {
            *didInfer = YES;
        }
        return midDelta > 0.0f;
    };

    BOOL didInfer = NO;
    // 优先依据气泡几何，其次再看 menuRect，避免引用消息 menuRect 左偏导致自消息误判。
    if (bubbleRectValid) {
        BOOL inferred = inferFromRect(bubbleRect, &didInfer);
        if (didInfer) {
            return inferred;
        }
    }

    if (menuRectValid) {
        BOOL inferred = inferFromRect(menuRect, &didInfer);
        if (didInfer) {
            return inferred;
        }
    }

    return fallbackIsSelf;
}

static BOOL wcpl_isMessageSettledForRepeat(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return NO;
    }

    if (msgWrap.m_n64MesSvrID > 0) {
        return YES;
    }

    unsigned int status = msgWrap.m_uiStatus;
    if (status == 2 || status == 3) {
        return YES;
    }

    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (!config.repeatImmediateRenderEnable) {
        return NO;
    }
    if (wcpl_isMessageFromOther(msgWrap)) {
        return NO;
    }
    if (status > 1) {
        return NO;
    }
    if (msgWrap.m_uiMesLocalID > 0) {
        return YES;
    }

    // 本地发送早期阶段可能尚未分配 localID，用短时间窗允许首帧显示复读按钮。
    if (msgWrap.m_uiCreateTime > 0) {
        NSTimeInterval now = [[NSDate date] timeIntervalSince1970];
        NSTimeInterval delta = fabs(now - (NSTimeInterval)msgWrap.m_uiCreateTime);
        if (delta <= 30.0) {
            return YES;
        }
    }

    return NO;
}

static CMessageWrap *wcpl_messageWrapForCellView(id cell) {
    if (!cell) {
        return nil;
    }

    SEL directSelectors[] = {
        @selector(getCurrentMessageWrap),
        @selector(messageWrap),
        @selector(getMediaWrap),
        @selector(msgWrap),
        @selector(getMessageWrap)
    };
    for (size_t idx = 0; idx < sizeof(directSelectors) / sizeof(directSelectors[0]); ++idx) {
        SEL selector = directSelectors[idx];
        if ([cell respondsToSelector:selector]) {
            @try {
                id wrap = ((id (*)(id, SEL))objc_msgSend)(cell, selector);
                if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                    return (CMessageWrap *)wrap;
                }
            } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
        }
    }

    if ([cell respondsToSelector:@selector(viewModel)]) {
        id viewModel = nil;
        @try {
            viewModel = ((id (*)(id, SEL))objc_msgSend)(cell, @selector(viewModel));
        } @catch (__unused NSException *exception) {
            viewModel = nil;
        }
        if (viewModel) {
            SEL vmSelectors[] = {
                @selector(messageWrap),
                @selector(getCurrentMessageWrap),
                @selector(msgWrap),
                @selector(getMessageWrap)
            };
            for (size_t idx = 0; idx < sizeof(vmSelectors) / sizeof(vmSelectors[0]); ++idx) {
                SEL selector = vmSelectors[idx];
                if ([viewModel respondsToSelector:selector]) {
                    @try {
                        id wrap = ((id (*)(id, SEL))objc_msgSend)(viewModel, selector);
                        if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                            return (CMessageWrap *)wrap;
                        }
                    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
                }
            }
        }

        NSArray<NSString *> *kvcKeys = @[@"msgWrap", @"messageWrap", @"m_msgWrap", @"m_messageWrap", @"_msgWrap", @"_messageWrap", @"m_oMessageWrap"];
        NSArray *targets = viewModel ? @[cell, viewModel] : @[cell];
        for (id target in targets) {
            for (NSString *key in kvcKeys) {
                @try {
                    id wrap = [target valueForKey:key];
                    if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                        return (CMessageWrap *)wrap;
                    }
                } @catch (__unused NSException *exceptionKVC) { WCPLCatchLog(exceptionKVC); }
            }
        }
    }
    return nil;
}

