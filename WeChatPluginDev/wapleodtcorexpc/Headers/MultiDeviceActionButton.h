//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MultiDeviceActionButton
{
    unsigned long long _action;
}

+ (double)imageSideLength;
+ (id)buttonImageForAction:(unsigned long long)arg1 highlighted:(_Bool)arg2 selected:(_Bool)arg3;
+ (id)buttonTitleForAction:(unsigned long long)arg1 selected:(_Bool)arg2;
+ (_Bool)supportSelectForAction:(unsigned long long)arg1;
+ (id)buttonForAction:(unsigned long long)arg1;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
- (unsigned long long)accessibilityTraits;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;

@end

