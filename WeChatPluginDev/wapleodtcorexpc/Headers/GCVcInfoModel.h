//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GCVcInfoModel : NSObject
{
    _Bool _isGameHostWebVc;
    _Bool _isGameVc;
    NSString *_vcClassName;
    NSString *_vcPtr;
    NSString *_webViewUrl;
    NSString *_subVcGameHostWebUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *subVcGameHostWebUrl; // @synthesize subVcGameHostWebUrl=_subVcGameHostWebUrl;
@property(nonatomic) _Bool isGameVc; // @synthesize isGameVc=_isGameVc;
@property(nonatomic) _Bool isGameHostWebVc; // @synthesize isGameHostWebVc=_isGameHostWebVc;
@property(retain, nonatomic) NSString *webViewUrl; // @synthesize webViewUrl=_webViewUrl;
@property(retain, nonatomic) NSString *vcPtr; // @synthesize vcPtr=_vcPtr;
@property(retain, nonatomic) NSString *vcClassName; // @synthesize vcClassName=_vcClassName;
- (id)description;
- (_Bool)isGameRelateVc;

@end

