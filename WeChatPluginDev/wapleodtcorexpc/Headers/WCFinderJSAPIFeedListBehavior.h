//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, WCFinderCompleteHandler;

@interface WCFinderJSAPIFeedListBehavior : NSObject
{
    _Bool _allowTopPull;
    _Bool _allowInfiniteTopPull;
    _Bool _reportFeedRead;
    _Bool _feedFocusChangeNotify;
    _Bool _fromSearchTemplate;
    _Bool _delayCompleteCallback;
    WCFinderCompleteHandler *_completeHandler;
    CDUnknownBlockType _sendTemplateEvent;
    NSMutableArray *_completeActions;
    NSMutableDictionary *_bckInfo;
    NSString *_liteAppId;
}

+ (_Bool)boolValueForKey:(id)arg1 inDict:(id)arg2;
+ (id)behaviorDict:(id)arg1;
+ (id)behaviorWithParams:(id)arg1 event:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *liteAppId; // @synthesize liteAppId=_liteAppId;
@property(nonatomic) _Bool delayCompleteCallback; // @synthesize delayCompleteCallback=_delayCompleteCallback;
@property(retain, nonatomic) NSMutableDictionary *bckInfo; // @synthesize bckInfo=_bckInfo;
@property(retain, nonatomic) NSMutableArray *completeActions; // @synthesize completeActions=_completeActions;
@property(copy, nonatomic) CDUnknownBlockType sendTemplateEvent; // @synthesize sendTemplateEvent=_sendTemplateEvent;
@property(nonatomic) _Bool fromSearchTemplate; // @synthesize fromSearchTemplate=_fromSearchTemplate;
@property(retain, nonatomic) WCFinderCompleteHandler *completeHandler; // @synthesize completeHandler=_completeHandler;
@property(nonatomic) _Bool feedFocusChangeNotify; // @synthesize feedFocusChangeNotify=_feedFocusChangeNotify;
@property(nonatomic) _Bool reportFeedRead; // @synthesize reportFeedRead=_reportFeedRead;
@property(nonatomic) _Bool allowInfiniteTopPull; // @synthesize allowInfiniteTopPull=_allowInfiniteTopPull;
@property(nonatomic) _Bool allowTopPull; // @synthesize allowTopPull=_allowTopPull;
- (void)updateBckInfo:(CDUnknownBlockType)arg1;
- (void)onComplete;
- (void)addCompleteAction:(CDUnknownBlockType)arg1;
- (id)createPlugin;
- (void)notifyTemplate:(id)arg1 params:(id)arg2;
- (_Bool)delayCallResultCallback;

@end

