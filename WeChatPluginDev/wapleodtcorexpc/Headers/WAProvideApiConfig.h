//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class JSContext, MMUIViewController, NSString, NSThread;
@protocol WAProvideApiDelegate;

@interface WAProvideApiConfig : NSObject
{
    JSContext *_jsContext;
    id <WAProvideApiDelegate> _delegate;
    NSString *_appId;
    NSString *_userName;
    NSThread *_thread;
    MMUIViewController *_parentViewController;
    id _userData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id userData; // @synthesize userData=_userData;
@property(nonatomic) __weak MMUIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) __weak NSThread *thread; // @synthesize thread=_thread;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) __weak id <WAProvideApiDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak JSContext *jsContext; // @synthesize jsContext=_jsContext;

@end

