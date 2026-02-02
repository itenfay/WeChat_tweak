//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface MMLiteAppVCView : UIView
{
    UIView *_snapshot;
    struct CGSize _lastSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *snapshot; // @synthesize snapshot=_snapshot;
@property(nonatomic) struct CGSize lastSize; // @synthesize lastSize=_lastSize;
- (void)genSnapshotIfNeeded;
- (void)checkSelfSizeChanged;
- (void)setBounds:(struct CGRect)arg1;

@end

