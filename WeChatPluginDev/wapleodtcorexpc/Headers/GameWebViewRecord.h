//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface GameWebViewRecord : NSObject
{
    NSMutableArray *_webviewControllerArray;
    NSMutableDictionary *_webviewControllerDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *webviewControllerDic; // @synthesize webviewControllerDic=_webviewControllerDic;
@property(retain, nonatomic) NSMutableArray *webviewControllerArray; // @synthesize webviewControllerArray=_webviewControllerArray;
- (unsigned long long)objectArrayCnt;
- (void)removeAllObjects;
- (id)webVcForPageId:(id)arg1;
- (id)webVcAtIndex:(unsigned long long)arg1;
- (void)removeWebVc:(id)arg1;
- (void)recordWebVc:(id)arg1;
- (_Bool)isWebVCRecorded:(id)arg1;
- (id)pageId:(id)arg1;
- (id)init;

@end

