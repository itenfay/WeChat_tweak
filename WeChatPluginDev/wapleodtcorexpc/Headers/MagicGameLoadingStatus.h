//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface MagicGameLoadingStatus : NSObject
{
    _Bool _isWxPkgLoading;
    _Bool _isJsLoading;
    NSNumber *_loadingSpeed;
    NSString *_requestKey;
    NSString *_appId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *requestKey; // @synthesize requestKey=_requestKey;
@property(retain, nonatomic) NSNumber *loadingSpeed; // @synthesize loadingSpeed=_loadingSpeed;
@property(nonatomic) _Bool isJsLoading; // @synthesize isJsLoading=_isJsLoading;
@property(nonatomic) _Bool isWxPkgLoading; // @synthesize isWxPkgLoading=_isWxPkgLoading;

@end

