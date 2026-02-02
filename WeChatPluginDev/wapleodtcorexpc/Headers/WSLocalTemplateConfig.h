//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSDictionary, NSString;

@interface WSLocalTemplateConfig : NSObject
{
    unsigned int _version;
    NSDictionary *_urlParams;
    NSString *_htmlPath;
    unsigned long long _localJSBizType;
    MMUIViewController *_containerVC;
    unsigned long long _bizType;
    NSString *_byPassContent;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *byPassContent; // @synthesize byPassContent=_byPassContent;
@property(nonatomic) unsigned long long bizType; // @synthesize bizType=_bizType;
@property(nonatomic) __weak MMUIViewController *containerVC; // @synthesize containerVC=_containerVC;
@property(nonatomic) unsigned long long localJSBizType; // @synthesize localJSBizType=_localJSBizType;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *htmlPath; // @synthesize htmlPath=_htmlPath;
@property(retain, nonatomic) NSDictionary *urlParams; // @synthesize urlParams=_urlParams;

@end

