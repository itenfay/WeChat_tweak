//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, OpenApiParameter;

@interface ChooseCardHandler
{
    OpenApiParameter *_parameter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OpenApiParameter *parameter; // @synthesize parameter=_parameter;
- (void)onChooseCancel;
- (void)onChooseSuccess:(id)arg1;
- (void)chooseCard;
- (void)onPreEnterWechatDone;
- (void)cancelHandleAndReturn3rdApp:(int)arg1 importInfo:(id)arg2;
- (void)startChooseCard:(id)arg1;
- (void)cancelChooseCard;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

