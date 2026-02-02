//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface PageSheetBottomDelegate : NSObject
{
    CDUnknownBlockType _onConfirm;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onConfirm; // @synthesize onConfirm=_onConfirm;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (id)colorForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

