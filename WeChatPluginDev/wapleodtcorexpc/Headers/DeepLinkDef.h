//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class DeepLinkBitSet, NSString;

@interface DeepLinkDef : NSObject
{
    unsigned int flag;
    CDUnknownBlockType linkBlock;
    NSString *link;
    NSString *linkName;
    DeepLinkBitSet *dlBitset;
}

+ (id)DeepLinkDefWithName:(id)arg1 Link:(id)arg2 PermissionBitSet:(unsigned long long)arg3 LinkBlock:(CDUnknownBlockType)arg4 Flag:(unsigned int)arg5;
- (void).cxx_destruct;
@property(nonatomic) unsigned int flag; // @synthesize flag;
@property(retain, nonatomic) DeepLinkBitSet *dlBitset; // @synthesize dlBitset;
@property(retain, nonatomic) NSString *linkName; // @synthesize linkName;
@property(retain, nonatomic, getter=getLink) NSString *link; // @synthesize link;
@property(nonatomic) __weak CDUnknownBlockType linkBlock; // @synthesize linkBlock;
- (_Bool)isCallExtension;
- (_Bool)isCallDelegate;
- (void)dealloc;
- (id)init;

@end

