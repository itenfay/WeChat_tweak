//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFImageCompletionItem : NSObject
{
    _Bool _called;
    CDUnknownBlockType _callback;
    NSString *_sizeKey;
    CDStruct_4b68193d _param;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool called; // @synthesize called=_called;
@property(retain, nonatomic) NSString *sizeKey; // @synthesize sizeKey=_sizeKey;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) CDStruct_4b68193d param; // @synthesize param=_param;
- (void)callCompletion:(id)arg1 key:(id)arg2 error:(id)arg3 finished:(_Bool)arg4;
- (struct CGSize)size;
- (_Bool)isValid;
- (id)initWithParam:(CDStruct_4b68193d)arg1 callback:(CDUnknownBlockType)arg2;

@end

