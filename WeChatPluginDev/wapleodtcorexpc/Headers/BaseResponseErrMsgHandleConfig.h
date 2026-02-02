//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface BaseResponseErrMsgHandleConfig : NSObject
{
    CDUnknownBlockType _handlerConfigBlock;
    NSString *_defaultMsg;
}

+ (id)configWithDefaultMsg:(id)arg1;
+ (id)defaultConfig;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *defaultMsg; // @synthesize defaultMsg=_defaultMsg;
@property(copy, nonatomic) CDUnknownBlockType handlerConfigBlock; // @synthesize handlerConfigBlock=_handlerConfigBlock;

@end

