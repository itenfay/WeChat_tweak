//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSURL;

@interface QBWebPage : NSObject
{
    _Bool _finished;
    NSURL *_URL;
    id _webview;
    NSMutableArray *_itemArray;
    NSMutableDictionary *_pageInfo;
    double _timestamp;
}

+ (id)webpageWithURL:(id)arg1;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSMutableDictionary *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(retain, nonatomic) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) __weak id webview; // @synthesize webview=_webview;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)commonInfo;
- (id)dateDesForDate:(id)arg1;
- (id)JSONInfoWithDetail:(_Bool)arg1;
- (id)pageID;
- (void)addPageInfoWithKey:(id)arg1 value:(id)arg2 allowDuplicateKey:(_Bool)arg3;
- (void)addWebItemEvent:(id)arg1;
- (id)webItemWithURL:(id)arg1 createWhenNotExist:(_Bool)arg2;
- (id)init;

@end

