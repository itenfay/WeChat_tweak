//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMWebViewGetAdTokenTask : NSObject
{
    NSString *_url;
    NSString *_adUrl;
    NSString *_posId;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSString *posId; // @synthesize posId=_posId;
@property(copy, nonatomic) NSString *adUrl; // @synthesize adUrl=_adUrl;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;

@end

