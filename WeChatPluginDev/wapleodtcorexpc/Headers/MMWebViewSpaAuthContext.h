//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMWebViewSpaAuthContext : NSObject
{
    NSString *_callBackId;
    NSString *_reqUrl;
    CDUnknownBlockType _authBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType authBlock; // @synthesize authBlock=_authBlock;
@property(retain, nonatomic) NSString *reqUrl; // @synthesize reqUrl=_reqUrl;
@property(retain, nonatomic) NSString *callBackId; // @synthesize callBackId=_callBackId;
- (void)dealloc;

@end

