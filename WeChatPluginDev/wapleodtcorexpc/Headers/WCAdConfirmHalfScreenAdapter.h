//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMPageSheetAdapter, NSDictionary, NSString;
@protocol WCAdConfirmHalfScreenAdapterDelegate;

@interface WCAdConfirmHalfScreenAdapter : NSObject
{
    id <WCAdConfirmHalfScreenAdapterDelegate> _delegate;
    MMPageSheetAdapter *_adapter;
    NSString *_requestIcon;
    NSString *_requestName;
    NSString *_desc;
    NSString *_confirmInfo;
    NSString *_confirmDesc;
    NSString *_confirmEmptyDesc;
    NSDictionary *_extInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *confirmEmptyDesc; // @synthesize confirmEmptyDesc=_confirmEmptyDesc;
@property(retain, nonatomic) NSString *confirmDesc; // @synthesize confirmDesc=_confirmDesc;
@property(retain, nonatomic) NSString *confirmInfo; // @synthesize confirmInfo=_confirmInfo;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *requestName; // @synthesize requestName=_requestName;
@property(retain, nonatomic) NSString *requestIcon; // @synthesize requestIcon=_requestIcon;
@property(retain, nonatomic) MMPageSheetAdapter *adapter; // @synthesize adapter=_adapter;
@property(nonatomic) __weak id <WCAdConfirmHalfScreenAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)getDescInfoView;
- (id)getRequestInfoView;
- (void)hideHalfScreenView;
- (void)showHalfScreenView;
- (void)genHalfScreenView;
- (id)initWithRequestIcon:(id)arg1 requestName:(id)arg2 desc:(id)arg3 confirmInfo:(id)arg4 confirmDesc:(id)arg5 confirmEmptyDesc:(id)arg6 extInfo:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

