//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAJSCanvasReportExceptionItem : NSObject
{
    _Bool _isMainContext;
    unsigned int _jsVMType;
    NSString *_appId;
    NSString *_name;
    NSString *_desc;
    NSString *_stack;
    NSString *_basePkgVer;
    NSString *_jsContextName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *jsContextName; // @synthesize jsContextName=_jsContextName;
@property(nonatomic) _Bool isMainContext; // @synthesize isMainContext=_isMainContext;
@property(nonatomic) unsigned int jsVMType; // @synthesize jsVMType=_jsVMType;
@property(copy, nonatomic) NSString *basePkgVer; // @synthesize basePkgVer=_basePkgVer;
@property(copy, nonatomic) NSString *stack; // @synthesize stack=_stack;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)reportString;

@end

