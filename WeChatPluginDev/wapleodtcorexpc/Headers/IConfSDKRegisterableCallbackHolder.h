//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface IConfSDKRegisterableCallbackHolder : NSObject
{
    CDUnknownBlockType callback;
    _Bool isContinuous;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isContinuous; // @synthesize isContinuous;
@property(copy) CDUnknownBlockType callback; // @synthesize callback;
- (id)initWithCallback:(CDUnknownBlockType)arg1 isContinuous:(_Bool)arg2;

@end

