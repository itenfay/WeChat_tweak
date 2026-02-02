//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MMLiteAppA8KeyCacheInfo : NSObject
{
    NSString *_requestUrl;
    NSString *_fullUrl;
    NSMutableDictionary *_headerDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *headerDic; // @synthesize headerDic=_headerDic;
@property(retain, nonatomic) NSString *fullUrl; // @synthesize fullUrl=_fullUrl;
@property(retain, nonatomic) NSString *requestUrl; // @synthesize requestUrl=_requestUrl;

@end

