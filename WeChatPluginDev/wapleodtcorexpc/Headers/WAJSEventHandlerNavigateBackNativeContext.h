//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString, WAAppOpenParameter, WAAppTaskExtInfo, WAAppTaskHandlerWrapper, WAWebViewController;

@interface WAJSEventHandlerNavigateBackNativeContext : NSObject
{
    NSString *_appID;
    WAWebViewController *_webViewController;
    NSDictionary *_extraData;
    WAAppOpenParameter *_openParameter;
    WAAppTaskExtInfo *_taskInfo;
    WAAppTaskHandlerWrapper *_handlerWrapper;
    NSMutableArray *_willJumpToMiniApp;
    NSMutableArray *_prepareToMiniApp;
    NSMutableArray *_beforeToMiniApp;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *beforeToMiniApp; // @synthesize beforeToMiniApp=_beforeToMiniApp;
@property(readonly, nonatomic) NSMutableArray *prepareToMiniApp; // @synthesize prepareToMiniApp=_prepareToMiniApp;
@property(readonly, nonatomic) NSMutableArray *willJumpToMiniApp; // @synthesize willJumpToMiniApp=_willJumpToMiniApp;
@property(retain, nonatomic) WAAppTaskHandlerWrapper *handlerWrapper; // @synthesize handlerWrapper=_handlerWrapper;
@property(retain, nonatomic) WAAppTaskExtInfo *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(retain, nonatomic) WAAppOpenParameter *openParameter; // @synthesize openParameter=_openParameter;
@property(retain, nonatomic) NSDictionary *extraData; // @synthesize extraData=_extraData;
@property(nonatomic) __weak WAWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (id)init;

@end

