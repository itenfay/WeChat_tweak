//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSHashTable, WKWebView;

@interface WKXPCAttachment : NSObject
{
    int _count;
    NSHashTable *_dicts;
    NSDictionary *_envs;
    WKWebView *_webView;
    long long _flag;
}

- (void).cxx_destruct;
@property(nonatomic) int count; // @synthesize count=_count;
@property(nonatomic) long long flag; // @synthesize flag=_flag;
@property(nonatomic) __weak WKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSDictionary *envs; // @synthesize envs=_envs;
@property(retain, nonatomic) NSHashTable *dicts; // @synthesize dicts=_dicts;
- (_Bool)isEnded;
- (_Bool)isStarted;
- (void)addObject:(id)arg1;
- (_Bool)isValid;
- (void)clear;
- (id)init;

@end

