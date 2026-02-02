//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderCompleteHandler : NSObject
{
    _Bool _success;
    _Bool _isCanceled;
    id _userInfo;
    CDUnknownBlockType _completeBlock;
}

+ (id)handlerWithComplete:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (_Bool)isValid;
- (void)cancel;
- (void)_invokeComplete;
- (void)commit:(_Bool)arg1 userInfo:(id)arg2;
- (void)dealloc;

@end

