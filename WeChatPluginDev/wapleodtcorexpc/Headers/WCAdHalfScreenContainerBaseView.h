//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdHalfScreenContainerInfo;
@protocol WCAdHalfScreenContainerViewDelegate;

@interface WCAdHalfScreenContainerBaseView : NSObject
{
    WCAdHalfScreenContainerInfo *_containerInfo;
    id <WCAdHalfScreenContainerViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCAdHalfScreenContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCAdHalfScreenContainerInfo *containerInfo; // @synthesize containerInfo=_containerInfo;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (id)genUILabelWithType:(int)arg1;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (id)initWithContainerInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

