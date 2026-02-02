//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton;

@interface _ZZMultiButtonChainModel
{
}

+ (Class)viewClass;
@property(readonly, copy, nonatomic) CDUnknownBlockType touchDownView;
@property(readonly, copy, nonatomic) CDUnknownBlockType normalView;
- (CDUnknownBlockType)normalViewWithMasonry;
- (CDUnknownBlockType)touchDownViewWithMasonry;

// Remaining properties
@property(readonly, nonatomic) MMUIButton *view; // @dynamic view;

@end

