//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString;

@interface OpenglRenderView : UIView
{
    struct CGSize _dataContentSize;
}

+ (Class)layerClass;
@property(nonatomic) struct CGSize dataContentSize; // @synthesize dataContentSize=_dataContentSize;
- (void)updateViewFrame;
- (void)updateViewFrameWithContentSize:(struct CGSize)arg1;
- (id)renderView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

