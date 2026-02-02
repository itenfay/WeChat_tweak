//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber, NSString;
@protocol IWSContainerReportDelegate;

@interface WSContainerViewReporter : NSObject
{
    _Bool _isInCurrTab;
    unsigned int _haveTipsBubble;
    NSNumber *_categoryId;
    unsigned long long _pageId;
    unsigned long long _enterTimeMs;
    NSString *_inTabReddotInfo;
    NSNumber *_fromCategoryId;
    NSNumber *_toCategoryId;
    NSMutableDictionary *_eventIdDict;
    id <IWSContainerReportDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IWSContainerReportDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *eventIdDict; // @synthesize eventIdDict=_eventIdDict;
@property(retain, nonatomic) NSNumber *toCategoryId; // @synthesize toCategoryId=_toCategoryId;
@property(retain, nonatomic) NSNumber *fromCategoryId; // @synthesize fromCategoryId=_fromCategoryId;
@property(nonatomic) unsigned int haveTipsBubble; // @synthesize haveTipsBubble=_haveTipsBubble;
@property(retain, nonatomic) NSString *inTabReddotInfo; // @synthesize inTabReddotInfo=_inTabReddotInfo;
@property(nonatomic) _Bool isInCurrTab; // @synthesize isInCurrTab=_isInCurrTab;
@property(nonatomic) unsigned long long enterTimeMs; // @synthesize enterTimeMs=_enterTimeMs;
@property(nonatomic) unsigned long long pageId; // @synthesize pageId=_pageId;
@property(retain, nonatomic) NSNumber *categoryId; // @synthesize categoryId=_categoryId;
- (void)noteHaveTipsBubble;
- (void)noteInTabReddotInfo:(id)arg1;
- (unsigned long long)genStayTimeMs;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)onSwitchToOtherView:(id)arg1;
- (void)onSwitchToThisView:(id)arg1;
- (void)onQuitWSWebView:(_Bool)arg1;
- (void)onEnterWSWebView:(_Bool)arg1;
- (id)checkToReturnOutParams;
- (id)checkToReturnInParams;
- (void)resetEventIdDict:(id)arg1;
- (void)initDefaultEventIdDict;
- (id)onPreReport:(id)arg1;
- (void)setReportDelegate:(id)arg1;
- (void)initViewIfNeed;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (void)setCategoryId:(id)arg1 andPageId:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

