//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WebViewA8KeyContext : NSObject
{
    _Bool _notGoToUrlOnGetA8Key;
    _Bool _exceptionBackOnGetA8Key;
    int _reason;
    CDUnknownBlockType _onGetBlock;
}

- (void).cxx_destruct;
@property(nonatomic) int reason; // @synthesize reason=_reason;
@property(copy, nonatomic) CDUnknownBlockType onGetBlock; // @synthesize onGetBlock=_onGetBlock;
@property(nonatomic) _Bool exceptionBackOnGetA8Key; // @synthesize exceptionBackOnGetA8Key=_exceptionBackOnGetA8Key;
@property(nonatomic) _Bool notGoToUrlOnGetA8Key; // @synthesize notGoToUrlOnGetA8Key=_notGoToUrlOnGetA8Key;

@end

