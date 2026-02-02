//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface UnitRCFuncDeclareObjc : NSObject
{
    CDUnknownBlockType _Void_Empty_Block;
    CDUnknownBlockType _Void_Uint32Uint32String_Block;
}

+ (CDUnknownBlockType)to_Void_Uint32Uint32String_Block:(id)arg1;
+ (id)from_Void_Uint32Uint32String_Block:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)to_Void_Empty_Block:(id)arg1;
+ (id)from_Void_Empty_Block:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType Void_Uint32Uint32String_Block; // @synthesize Void_Uint32Uint32String_Block=_Void_Uint32Uint32String_Block;
@property(readonly, copy, nonatomic) CDUnknownBlockType Void_Empty_Block; // @synthesize Void_Empty_Block=_Void_Empty_Block;
- (void)Void_Uint32Uint32String:(unsigned int)arg1 errorType:(unsigned int)arg2 msg:(id)arg3;
- (void)Void_Empty;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

