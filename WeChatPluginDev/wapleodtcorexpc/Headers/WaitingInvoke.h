//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WaitingInvoke : NSObject
{
    NSString *_name;
    id _arguments;
    CDUnknownBlockType _result;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType result; // @synthesize result=_result;
@property(retain, nonatomic) id arguments; // @synthesize arguments=_arguments;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;

@end

