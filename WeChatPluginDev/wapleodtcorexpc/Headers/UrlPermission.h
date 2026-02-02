//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class DeepLinkBitSet, GeneralControlBitSet, JSAPIPermissionBitSet;

@interface UrlPermission : NSObject
{
    JSAPIPermissionBitSet *m_permissionBitSet;
    GeneralControlBitSet *m_generalControlBitSet;
    DeepLinkBitSet *m_deepLinkBitSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DeepLinkBitSet *m_deepLinkBitSet; // @synthesize m_deepLinkBitSet;
@property(retain, nonatomic) GeneralControlBitSet *m_generalControlBitSet; // @synthesize m_generalControlBitSet;
@property(retain, nonatomic) JSAPIPermissionBitSet *m_permissionBitSet; // @synthesize m_permissionBitSet;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

