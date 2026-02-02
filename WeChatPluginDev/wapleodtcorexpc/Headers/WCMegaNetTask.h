//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;

@interface WCMegaNetTask : NSObject
{
    _Bool _checkDisposable;
    id _response;
    NSString *_error;
    NSHashTable *_disposbleTable;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _success;
    CDUnknownBlockType _fail;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType fail; // @synthesize fail=_fail;
@property(copy, nonatomic) CDUnknownBlockType success; // @synthesize success=_success;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSHashTable *disposbleTable; // @synthesize disposbleTable=_disposbleTable;
@property(nonatomic) _Bool checkDisposable; // @synthesize checkDisposable=_checkDisposable;
@property(copy, nonatomic) NSString *error; // @synthesize error=_error;
@property(retain, nonatomic) id response; // @synthesize response=_response;
- (void)doResponse;
- (id)disposeBy:(id)arg1;
- (id)onFail:(CDUnknownBlockType)arg1;
- (id)onSuccess:(CDUnknownBlockType)arg1;
- (id)init;

@end

