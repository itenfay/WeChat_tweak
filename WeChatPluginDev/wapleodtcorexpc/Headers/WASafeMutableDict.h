//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WASafeMutableDict : NSObject
{
    _Bool _writable;
    NSMutableDictionary *_dic;
    NSObject *_holder;
    NSString *_name;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool writable; // @synthesize writable=_writable;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak NSObject *holder; // @synthesize holder=_holder;
@property(retain, nonatomic) NSMutableDictionary *dic; // @synthesize dic=_dic;
- (void)dealloc;
- (void)writeBack;
- (id)initWithHolder:(id)arg1 propName:(id)arg2 writable:(_Bool)arg3;

@end

