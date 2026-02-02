//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIImage;

@interface MMLiveObjectManipulationViewCustomCornerAction : NSObject
{
    UIImage *_icon;
    UIColor *_backgroundColor;
    NSObject *_accessibilityDescriptor;
    CDUnknownBlockType _action;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(retain, nonatomic) NSObject *accessibilityDescriptor; // @synthesize accessibilityDescriptor=_accessibilityDescriptor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

