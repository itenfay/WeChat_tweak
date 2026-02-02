//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface FlutterKeyboardManager : NSObject
{
    struct unique_ptr<fml::WeakNSObjectFactory<FlutterKeyboardManager>, std::default_delete<fml::WeakNSObjectFactory<FlutterKeyboardManager>>> _weakFactory;
    NSMutableArray *_primaryResponders;
    NSMutableArray *_secondaryResponders;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSMutableArray *secondaryResponders; // @synthesize secondaryResponders=_secondaryResponders;
@property(readonly, retain, nonatomic) NSMutableArray *primaryResponders; // @synthesize primaryResponders=_primaryResponders;
- (void)dispatchToSecondaryResponders:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)handlePress:(id)arg1 nextAction:(CDUnknownBlockType)arg2;
- (WeakNSObject_2ac6be55)getWeakNSObject;
- (void)dealloc;
- (void)addSecondaryResponder:(id)arg1;
- (void)addPrimaryResponder:(id)arg1;
- (id)init;

@end

