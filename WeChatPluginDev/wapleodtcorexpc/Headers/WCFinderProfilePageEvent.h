//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderProfilePageEvent : NSObject
{
    _Bool _waitContact;
    CDUnknownBlockType _waitContactAdapter;
    Class _depPage;
    CDUnknownBlockType _depPageAdapter;
    CDUnknownBlockType _asyncAdapter;
}

+ (id)depPage:(Class)arg1 adapter:(CDUnknownBlockType)arg2;
+ (id)ensureContact:(CDUnknownBlockType)arg1;
+ (id)asyncFetchPage:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType asyncAdapter; // @synthesize asyncAdapter=_asyncAdapter;
@property(copy, nonatomic) CDUnknownBlockType depPageAdapter; // @synthesize depPageAdapter=_depPageAdapter;
@property(retain, nonatomic) Class depPage; // @synthesize depPage=_depPage;
@property(copy, nonatomic) CDUnknownBlockType waitContactAdapter; // @synthesize waitContactAdapter=_waitContactAdapter;
@property(nonatomic) _Bool waitContact; // @synthesize waitContact=_waitContact;
- (id)onFilledContact:(id)arg1;

@end

