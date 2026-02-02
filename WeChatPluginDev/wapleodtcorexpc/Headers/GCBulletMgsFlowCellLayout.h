//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCLabelDynamicLayout;

@interface GCBulletMgsFlowCellLayout
{
    double _cellTopPadding;
    double _avatarSize;
    double _space;
    GCLabelDynamicLayout *_labelConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GCLabelDynamicLayout *labelConfig; // @synthesize labelConfig=_labelConfig;
@property(nonatomic) double space; // @synthesize space=_space;
@property(nonatomic) double avatarSize; // @synthesize avatarSize=_avatarSize;
@property(nonatomic) double cellTopPadding; // @synthesize cellTopPadding=_cellTopPadding;
- (id)init;

@end

