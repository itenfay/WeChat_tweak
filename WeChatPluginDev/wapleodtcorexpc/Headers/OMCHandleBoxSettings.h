//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMCHandleBoxSettings : NSObject
{
    struct XMSHandleBoxSettings _backingSettings;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isNormalized;
@property(readonly, nonatomic) unsigned int enabledButtonIDBits;
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets;
@property(readonly, nonatomic) struct CGSize contentSize;
@property(readonly, nonatomic) double rotation;
@property(readonly, nonatomic) struct CGVector scale;
@property(readonly, nonatomic) struct CGPoint position;
@property(readonly, nonatomic) _Bool isVisible;
- (id)denormalizedHandleBoxSettingsWithSize:(struct CGSize)arg1;
- (id)normalizedHandleBoxSettingsWithSize:(struct CGSize)arg1;
- (id)initWithBackingSettings:(const void *)arg1;

@end

