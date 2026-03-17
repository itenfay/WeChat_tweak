//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, OpenApiParameter;

@interface ChooseInvoiceHandler : NSObject
{
    OpenApiParameter *_parameter;
}

@property(retain, nonatomic) OpenApiParameter *parameter; // @synthesize parameter=_parameter;
- (void)onChooseCancel;
- (void)onChooseSuccess:(id)arg1;
- (void)chooseInvoice;
- (void)onPreEnterWechatDone;
- (void)cancelHandleAndReturn3rdApp:(int)arg1 importInfo:(id)arg2;
- (void)startChooseInvoice:(id)arg1;
- (void)cancelChooseInvoice;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

